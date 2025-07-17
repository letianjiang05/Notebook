# 1. Number Systems, Binary Code
|System|Base|Symbols|Note|
|------|----|------|-------|
|Binary|2|0, 1|Binary Digits/Bits, 4 bits = Nibble, 8 bits = Byte|
|Octal|8|0-7||
|Decimal|10|0-9||
|Hexadecimal|16|0-9, A-F||

$ Weight = Base^{Position} $\
$ Magnitude = Digit \times Weight $
## Binary Operation
$ 0 + 0 = 0 $\
$ 0 + 1 = 1 $\
$ 1 + 0 = 1 $\
$ 1 + 1 = 10 $\
$ 0 \cdot 0 = 0 $\
$ 0 \cdot 1 = 0 $\
$ 1 \cdot 0 = 0 $\
$ 1 \cdot 1 = 1 $

$ 110/11 = 10 $

## 2 to 10
$$ 1.1 = 1 \times 2^0 + 1 \times 2^1 = 3_{10} $$

## 10 to 2
$ 45/2 = 22 \quad \text{remainder} = 1 $\
$ 22/2 = 11 \quad \text{remainder} = 0 $\
$ 11/2 = 5 \quad \text{remainder} = 1 $\
$ 5/2 = 2 \quad \text{remainder} = 1 $\
$ 2/2 = 1 \quad \text{remainder} = 0 $\
$ 1/2 = 0 \quad \text{remainder} = 1 $\
$ 45_{10} = 101101_{2} $

$ 0.3125 \times 2 = 0.625 \quad \text{(0)} $\
$ 0.625 \times 2 = 1.25 \quad \text{(1)} $\
$ 0.25 \times 2 = 0.5 \quad \text{(0)} $\
$ 0.5 \times 2 = 1.0 \quad \text{(1)} $\
$ 0.45_{10} = 0.0110_{2} $

## 2 to 16
|Binary|Hexadecimal|
|-------|-----------|
|0000   |0          |
|0001   |1          |
|0010   |2          |
|0011   |3          |
|0100   |4          |
|0101   |5          |
|0110   |6          |
|0111   |7          |
|1000   |8          |
|1001   |9          |
|1010   |A          |
|1011   |B          |
|1100   |C          |
|1101   |D          |
|1110   |E          |
|1111   |F          |

$$ 
1100 1010 0101 0111
= CA57_{16}
$$
## 16 to 2
$$ 10A4_{16} = 0001 0000 1010 0100_{2} $$

## 8 to 2
|Octal|Binary|
|------|-------|
|0     |000    |
|1     |001    |
|2     |010    |
|3     |011    |
|4     |100    |
|5     |101    |
|6     |110    |
|7     |111    |

$ 140_{8} = 001 100 000_{2} $

## 2 to 8
$ 101111001_{2} = 571_{8} $

## 2 to 8 and 16
$ 010110.010 = 26.2_{8} = 16.4_{16} $




## Signed Numbers
  A signed binary number consists of both sign and magnitude information.
  The sign indicates whether a number is positive or negative, and the magnitude is the value of the number.
  There are 3 forms in which signed integer numbers can be represented in binary:
### Sign-magnitude
The left most bit is the sign bit and the remaining bits are the magnitude bit.
A negative number has the same magnitude bits as the corresponding postive number but the sign bit is a 1 rather than a 0.
- $ +25 $ in sign-magnitude form is:$ 00011001 $
- $ -25 $ in sign magnitude form is:
$ 10011001 $

#### 1’s complement (the first complement)
Positive numbers in 1’s complement form are represented the same way as the positive sign-magnitude form.\
Negative numbers are the complements of the corresponding bits of the positive numbers.
For example, using 8-bits, the decimal number $ -25 $ is expressed as complement of all bits in $ +25 = 00011001 $ as $ 11100110 $

#### 2’s complement (the second complement)
Positive numbers in 2’s complement form are represented the same way as in the sign-magnitude and 1’s complement forms.
Negative numbers are the converted by first inverting the bits in the corresponding positive numbers, then add 1 to the inverted bits.
For example, $ -25 $ is converted to 2’s complement is:
$ +25 = 00011001 $ inverted to $ 11100110 $, then add 1 to become $ 11100111 $

### Example
   Express the decimal number 39 as an 8-bit sign magnitude, 1’s complement and 2’s complement forms.
Solution:
                 +39 = 00100111
Sign-magnitude: 10100111
1’s complement: 11011000
2’s complement: 11011001

Convert 12 - 8 using 2’s complement:\
$ 12 = 00001100 $\
$ 8 = 00001000 $\
Perform 1's complement on 8:\
$ 11110111 $\
Perform 2's complement on -8:\
$ 11110111 + 00000001 = 11111000 $
Add the two numbers:\
$ 00001100 + 11111000 = 00000100 $
## Binary Code
|Decimal|BCD|Gray Code|
|-------|---|---------|
|0      |0000|0000    |
|1      |0001|0001    |
|2      |0010|0011    |
|3      |0011|0010    |
|4      |0100|0110    |
|5      |0101|0111    |
|6      |0110|0101    |
|7      |0111|0100    |
|8      |1000|1100    |
|9      |1001|1101    |
|10     |1010|1111    |
|11     |1011|1110    |
|12     |1100|1010    |
|13     |1101|1011    |
|14     |1110|1001    |
|15     |1111|1000    |
### Binary Coded Decimal (BCD)
- Binary coded decimal (BCD) is a way to express each of the decimal digits with a binary code. 
- A number with k decimal digits will require 4k bits in BCD. 
- Decimal 396 is represented in BCD with 12bits as 0011 1001 0110, with each group of 4 bits representing one decimal digit.
- A decimal number in BCD is the same as its equivalent binary number only when the number is between 0 and 9. 
- The binary combinations 1010 through 1111 are not used and have no meaning in BCD.

- Decimal to BCD conversion
$ 2469_{10} = 0010 0100 0110 1001_{BCD} $
- BCD to Decimal conversion
$ 1001010001110000_{BCD} = 9470_{10} $
### Gray Code
The Gray code has no specific weights assigned to the bit positions. \
The important feature of the Gray code is that it exhibits only a single bit change from one code word to the next in the sequence.\
Its primary use is:
- Error detection.
- Representation of analog data.
- Low power design

- Binary-to-Gray code conversion
    1. The most significant bit MSB (left most) in the Gray code is the same as the corresponding MSB in the binary number.
    2. Going from left to right, add each adjacent pair of binary code bits to get the next Gray code bit. Discard carries.\
    $ 1 0 1 1 0 \rightarrow 1 1 1 0 1 $\
    $ 1 \rightarrow 0 \rightarrow 1 \rightarrow 1 \rightarrow 0 $\
    $ \downarrow  $\
    $ 1 \rightarrow 1 \rightarrow 1 \rightarrow 0 \rightarrow 1 $
- Gray-to-binary conversion
    1. The most significant bit MSB (left most) in the binary number is the same as the corresponding MSB in the Gray code.
    2. Going from left to right, add each binary code bit generated to the Gray code bit in the next adjacent position. Discard carries.\
    $ 1 \rightarrow 1 \rightarrow 0 \rightarrow 1 \rightarrow 1 $\
    $ \downarrow $\
    $ 1 \rightarrow 0 \rightarrow 0 \rightarrow 1 \rightarrow 0 $
## ASCII Character Codes
American Standard Code for Information Interchange (Refer to Table 1.7)
A popular code used to represent information sent as character-based data.
It uses 7-bits to represent:
94 Graphic printing characters.
34 Non-printing characters.
Some non-printing characters are used for text format (e.g. BS = Backspace, CR = carriage return).
Other non-printing characters are used for record marking and flow control (e.g. STX and ETX start and end text areas).

- EBCDIC Codes: Extended Binary Coded Decimal Interchange Code (EBCDIC)
- Uni Code: Everyone in the world should be able to use their own language on phones and computers.
It’s a 32/64 bit code which represent all the characters and emoji, visual representation etc.
## Logic circuit
Digital logic is the manipulation/ operation of binary values through logic gates to act as switches. They open to pass on a pulse of electricity or close to shut it off. 
## Boolean Constants and Variables
Boolean variable is a quantity that may be equal to either 0 or 1 at different times. 
For example, in a certain digital system the Boolean value of 0 might be assigned to any voltage in the range from 0 to 0.8 V while the Boolean value of 1 might be assigned to any voltage in the range from 2 to 5 V (Note, voltages between the 0.8 and 2 V are undefined). 
Boolean variables represent only the state of a voltage variable in terms of 0 and 1, called the logic level.
There are three (3) Primary gates/logical operation: OR AND & NOT and four (4) secondary gates: NAND, NOR, XOR & XNOR. 
## Axioms of Logical Algebra
|Axiom|Addition|Multiplicaiton|
|------|--------|-------------|
|Commutative|$A + B = B + A$|$A \cdot B = B \cdot A$|
|Associative|$(A + B) + C = A + (B + C)$|$(A \cdot B) \cdot C = A \cdot (B \cdot C)$|
|Distributive|$A \cdot (B + C) = A \cdot B + A \cdot C$|$A + (B \cdot C) = (A + B) \cdot (A + C)$|
|Identity|$A + 0 = A$|$A \cdot 1 = A$|
|Null|$A + 1 = 1$|$A \cdot 0 = 0$|
|Idempotency|$A + A = A$|$A \cdot A = A$|
|Complementary|$A + \overline{A} = 1$|$A \cdot \overline{A} = 0$|
|Involution|$\overline{\overline{A}} = A$| |

$ A + AB = A $\
$ A + A’ B = A + B $\
$(A + B)(A + C) = A + B C $

- DeMorgan's Theorems\
$ \overline{A + B} = \overline{A} \cdot \overline{B} $\
$ \overline{A \cdot B} = \overline{A} + \overline{B} $\
$ \overline{A + B + C} = \overline{A} \cdot \overline{B} \cdot \overline{C} $\
$ \overline{A \cdot B \cdot C} = \overline{A} + \overline{B} + \overline{C} $
- Variable: a symbol used to represent a condition with value of either 0 or 1. For example, in Boolean equation Y = AB + CD. Each symbol Y, A, B, C and D is a variable.
- Complement: used to represent an opposite logic value of a variable. If A = 1, the complement of A is 0, or vice versa. Usually (read as “A bar” or “not A”) is used to represent the complement of A.
- Literal: a variable or a complement of a variable. For example, A is a literal, and $ \overline{A} $ is also a literal.
- Boolean equation: $ Z = A(B + CD) $

### sum of product (SOP)
$ Z = A ( B + CD) = A B’ C D + A B C’ D’ + A B C’ D + A B C D’+ A B C D $\
$ AB’CD $ is one product term.

Simply Boolean equations:\
$ [AB’(C + BD) + A’B’]C $\
$ A’BC + AB’C’ + A’B’C’ + AB’C + ABC $

### The standard SOP
 all the variables in the domain appear in each product term in the expression.\
$ A, B, C, D $ all should appear in each product term.\
$ ABC $ is not a standard SOP expression because D is missing.
### The Product of Sum (POS)
$ (A + B + C)’ $ is not a POS because in a POS a single overbar cannot extend over more than one variable.
### The Standard POS
### SOP and POS
| A | B | C | Z | Sum/Product Term         |
|---|---|---|-|--------------------------|
| 0 | 0 | 0 | 0 | (A + B + C)              |
| 0 | 0 | 1 | 0 | (A + B + C')             |
| 0 | 1 | 0 | 0 | (A + B' + C)             |
| 0 | 1 | 1 | 1 | ABC                       |
| 1 | 0 | 0 | 1 | AB'C'                     |
| 1 | 0 | 1 | 0 | (A' + B + C')             |
| 1 | 1 | 0 | 1 | ABC'                      |
| 1 | 1 | 1 | 1 | ABC                       |
- SOP expression: $ Z = A’BC + AB’C’ + ABC’ + ABC $
- POS expression: $ Z = (A+B+C)(A+B+C’)(A+B’+C)(A’+B+C’) $
## Canonical Forms
A function with n variables is in canonical form if the SOP or POS expression has all the n variables (or their complements) appearing exactly once in each term.
- canonical SOP: $ f_1(A,B,C) = A’BC’+ABC’+A’BC+ABC $
- canonical POS: $ f_2(A,B,C) = (A+B+C)(A+B+C’)(A’+B+C) $
## Minterm
A minterm of n variables is a product of the variables in which each appears exactly once in true or complemented form.
An n-variable minterm is a normal product terms with n literals. There are $ 2^n $ such product terms.


## Maxterm
| X | Y | Z | $ m_n $ |  $ M_n $   |
|---|---|---|---------|-----------|
| 0 | 0 | 0 | X'Y'Z'   | X + Y + Z |
| 0 | 0 | 1 | X'Y'Z    | X + Y + Z'|
| 0 | 1 | 0 | X'Y Z'   | X + Y' + Z|
| 0 | 1 | 1 | X'Y Z    | X + Y' + Z'|
| 1 | 0 | 0 | XY'Z'    | X' + Y + Z |
| 1 | 0 | 1 | XY'Z     | X' + Y + Z'|
| 1 | 1 | 0 | XYZ'     | X' + Y' + Z|
| 1 | 1 | 1 | XYZ      | X' + Y' + Z'|