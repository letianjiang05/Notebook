# Summary
- Numbering systems  
  - Decimal, Binary, Hexadecimal, Octal
  - Conversion, Arithmetic operations
- Binary Code
  - BCD, ASCII code, Gray code, unicode
  - Conversion
- Axiom of logical algebra
  - Different laws for addition and multiplication
  - DeMorgan's theorem
- Minterm, maxterm
  - SOP, POS
  - Canonical forms
  - Truth table
  - Don't care conditions
- Simplification of logic functions
  - Karnaugh maps (3 variables and 4 variables)
- Implementation of logic functions
  - SOP, POS and Universal gate implementation

# Number Systems
- $\text{Weight} = Base^{Position}$
- $\text{Magnitude} = Digit \times Weight$

|System|Base/Redix|Symbols|Note|
|------|----|------|-------|
|Binary|2|0, 1|Binary Digits/Bits, 4 bits = Nibble, 8 bits = Byte|
|Octal|8|0-7||
|Decimal|10|0-9||
|Hexadecimal|16|0-9, A-F||

$ Weight = Base^{Position} $\
$ Magnitude = Digit \times Weight $
## Binary Operation
|Operation|Result|
|---------|------|
|$0 \cdot 0$|$0$|
|$0 \cdot 1$|$0$|
|$1 \cdot 0$|$0$|
|$1 \cdot 1$|$1$|

$ 110/11 = 10 $
## Conversion
### 2 to 10
$$ 1.1 = 1 \times 2^0 + 1 \times 2^1 = 3_{10} $$

### 10 to 2
$ \frac{45}{2} = 22 \quad \text{remainder} = 1 $\
$ \frac{22}{2} = 11 \quad \text{remainder} = 0 $\
$ \frac{11}{2} = 5 \quad \text{remainder} = 1 $\
$ \frac{5}{2} = 2 \quad \text{remainder} = 1 $\
$ \frac{2}{2} = 1 \quad \text{remainder} = 0 $\
$ \frac{1}{2} = 0 \quad \text{remainder} = 1 $\
$ 45_{10} = 101101_{2} $

$ 0.3125 \times 2 = 0.625 \quad \text{carry} = 0 $\
$ 0.625 \times 2 = 1.25 \quad \text{carry} = 1 $\
$ 0.25 \times 2 = 0.50 \quad \text{carry} = 0 $\
$ 0.5 \times 2 = 1.00 \quad \text{carry} = 1 $\
$ 0.45_{10} = 0.0101_{2} $

### 2 to 16
|Binary|Hexadecimal|
|-------|-----------|
|$0000$|$0$|
|$1001$|$9$|
|$1010$|$A$|
|$1111$|$F$|
|$1100\ 1010\ 0101\ 0111$|$CA57_{16}$|
### 16 to 2
$10A4_{16} = 0001\ 0000\ 1010\ 0100_{2}$

## 8 to 2
|Octal|Binary|
|------|-------|
|0     |000    |
|7     |111    |
|$140_{8}$|$001\ 100\ 000_{2}$|

### 2 to 8
$ 101\ 111\ 001_{2} = 571_{8} $

### 2 to 8 and 16
$ 010\ 110.010 = 26.2_{8} = 16.4_{16} $

## Signed Numbers
- A signed binary number ($0\ 011001$):
  - **Sign ($0$)**: positive or negative
  - **Magnitude ($011001$)**: the value of the number

|Form|$+25$|$-25$|
|---|---|---|
|Sign-magnitude|$00011001$|$10011001$|
|1’s complement|Same as $\uparrow$ $00011001$|$11100110$ Complements of $\leftarrow$|
|2’s complement|Same as $\uparrow$ $00011001$|$\uparrow + 1$, $11100110 + 1 \rightarrow 11100111$|

### Example
- Convert 12 - 8 using 2’s complement:
- $12 = 00001100_2$
- $8 = 00001000_2$
- Perform 1's complement on 8: $11110111_2$
- Perform 2's complement on -8: $11110111_2 + 00000001_2 = 11111000_2$
- Add the two numbers: $00001100_2 + 11111000_2 = (1)00000100_2$ (Ignore the insignificant bits)
# Binary Code
|Decimal|BCD|Gray Code|
|-------|---|---------|
|$0$|$0000$|$0000$|
|$1$|$0001$|$0001$|
|$2$|$0010$|$0011$|
|$3$|$0011$|$0010$|
|$4$|$0100$|$0110$|
|$5$|$0101$|$0111$|
|$6$|$0110$|$0101$|
|$7$|$0111$|$0100$|
|$8$|$1000$|$1100$|
|$9$|$1001$|$1101$|
|$10$|$1010$|$1111$|
|$11$|$1011$|$1110$|
|$12$|$1100$|$1010$|
|$13$|$1101$|$1011$|
|$14$|$1110$|$1001$|
|$15$|$1111$|$1000$|
### Binary Coded Decimal (BCD)
- Binary coded decimal (BCD) is a way to express each of the decimal digits with a binary code. 
- A number with k decimal digits will require 4k bits in BCD. 
- Decimal 396 is represented in BCD with 12bits as 0011 1001 0110, with each group of 4 bits representing one decimal digit.
- A decimal number in BCD is the same as its equivalent binary number only when the number is between 0 and 9. 
- The binary combinations 1010 through 1111 are not used and have no meaning in BCD.
#### Conversion
- Decimal $\rightarrow$ BCD
$ 24_{10} = 0010\ 0100_{BCD} $
- BCD $\rightarrow$ Decimal
$ 0111\ 0000_{BCD} = 70_{10} $
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
- Digital logic is the manipulation/ operation of binary values through logic gates to act as switches. They open to pass on a pulse of electricity or close to shut it off. 
- Primary gates/logical operation
  - OR
  - AND
  - NOT
- Secondary gates
  - NAND
  - NOR
  - XOR
  - XNOR
## Boolean Constants and Variables
- Boolean variable is a quantity that may be equal to either 0 or 1 at different times. 
- For example, in a certain digital system the Boolean value of 0 might be assigned to any voltage in the range from 0 to 0.8 V while the Boolean value of 1 might be assigned to any voltage in the range from 2 to 5 V (Note, voltages between the 0.8 and 2 V are undefined). 
- Boolean variables represent only the state of a voltage variable in terms of 0 and 1, called the **logic level**.

# Axioms of Logical Algebra
|Axiom|Addition|Multiplicaiton|
|------|--------|-------------|
|Commutative|$A + B = B + A$|$A \cdot B = B \cdot A$|
|Associative|$(A + B) + C = A + (B + C)$|$(A \cdot B) \cdot C = A \cdot (B \cdot C)$|
|Distributive|$A \cdot (B + C) = A \cdot B + A \cdot C$|$A + (B \cdot C) = (A + B) \cdot (A + C)$|
|Identity|$A + 0 = A$|$A \cdot 1 = A$|
|Null|$A + 1 = 1$|$A \cdot 0 = 0$|
|Idempotency|$A + A = A$|$A \cdot A = A$|
|Complementary|$A + A' = 1$|$A \cdot A' = 0$|
|Involution|$(A')' = A$|$(A')' = A$|

- $A + AB = A$
- $A + A’ B = A + B$
- $(A + B)(A + C) = A + B C$

## DeMorgan's Theorems
- $\overline{A + B} = \overline{A} \cdot \overline{B}$
- $\overline{A \cdot B} = \overline{A} + \overline{B}$
- $\overline{A + B + C} = \overline{A} \cdot \overline{B} \cdot \overline{C}$
- $\overline{A \cdot B \cdot C} = \overline{A} + \overline{B} + \overline{C}$
## Variable, Literal, Complement
- Variable: a symbol used to represent a condition with value of either 0 or 1. 
  - In Boolean equation Y = AB + CD. Each symbol Y, A, B, C and D is a variable.
- Complement: used to represent an opposite logic value of a variable. 
  - $A'$, $\overline{A}$
- Literal: a variable or a complement of a variable. 
  - A is a literal, and $ \overline{A} $ is also a literal.
- Boolean equation: $Z = A(B + CD)$
- Truth table
# Minterm, maxterm
## sum of product (SOP)
- $Z = A ( B + CD)$
- $Z = A B’ C D + A B C’ D’ + A B C’ D + A B C D’+ A B C D$
- $AB’CD$ is a product term.

### Simply Boolean equations:
- $[AB’(C + BD) + A’B’]C = A’BC + AB’C’ + A’B’C’ + AB’C + ABC$

### The standard SOP
- $A, B, C, D$ all should appear in each product term.
- $ABC$ is not a standard SOP expression because D is missing.
## The Product of Sum (POS)
$(A + B + C)’$ is not a POS because in a POS a single overbar cannot extend over more than one variable.
### The Standard POS
Same as SOP
### SOP and POS
| A | B | C | Z | Sum/Product Term         |
|---|---|---|-|--------------------------|
|$0$|$0$|$0$|$0$|$(A + B + C)$|
|$0$|$0$|$1$|$0$|$(A + B + C')$|
|$0$|$1$|$0$|$0$|$(A + B' + C)$|
|$0$|$1$|$1$|$1$|$ABC$|
|$1$|$0$|$0$|$1$|$AB'C'$|
|$1$|$0$|$1$|$0$|$(A' + B + C')$|
|$1$|$1$|$0$|$1$|$ABC'$|
|$1$|$1$|$1$|$1$|$ABC$|
## Conversion
- $Z = A’B’C’ + A’BC’ + A’BC + AB’C + ABC$
- $000 + 010 + 011 + 101 + 111$
- $001, 100, 110$
- $Z = (A + B + C’)(A’ + B + C)(A’ + B’ + C)$

## Canonical Forms
A function with n variables is in canonical form if the SOP or POS expression has all the n variables (or their complements) appearing exactly once in each term.
- canonical SOP: $f_1(A,B,C) = A’BC’+ABC’+A’BC+ABC $
- canonical POS: $f_2(A,B,C) = (A+B+C)(A+B+C’)(A’+B+C)$
- $f_3(A,B,C) = A’B+ABC’+B$    (not in canonical form)

## Minterm
- A minterm of n variables is a product of the variables in which each appears exactly once in true or complemented form.
- $A'B'$: $00$
- $f_1(A,B,C) = A'B'C' + A'BC' + A'BC + ABC' + ABC$
- An n-variable minterm is a normal product terms with n literals. There are $ 2^n $ such product terms.


## Maxterm
- A maxterm of n variables is a sum of the variables in which each appears exactly once in true or complemented form.
- $A + B$: $0 + 0$
- An n-variable maxterm is a normal sum terms with n literals. There are $2^n$ such sum terms.

|$X$|$Y$|$Z$|Minterm Numbers|$m_n$ Minterm|Maxterm Numbers|$M_n$ Maxterm|
|---|---|---|---|---|---|---|
|$0$|$0$|$0$|$m_0$|$X'Y'Z'$|$M_0$|$X + Y + Z$|
|$0$|$0$|$1$|$m_1$|$X'Y'Z$| $M_1$|$X + Y + Z'$|
|$0$|$1$|$0$|$m_2$|$X'Y Z'$|$M_2$|$X + Y' + Z$|
|$0$|$1$|$1$|$m_3$|$X'Y Z$|$M_3$|$X + Y' + Z'$|
|$1$|$0$|$0$|$m_4$|$XY'Z'$|$M_4$|$X' + Y + Z$|
|$1$|$0$|$1$|$m_5$|$XY'Z$|$M_5$|$X' + Y + Z'$|
|$1$|$1$|$0$|$m_6$|$XYZ'$|$M_6$|$X' + Y' + Z$|
|$1$|$1$|$1$|$m_7$|$XYZ$|$M_7$|$X' + Y' + Z'$|

# K-maps
|ab\c|$0$|$1$|
|---|---|---|
|$00$|0|1|
|$01$|2|3|
|$10$|4|5|
|$11$|6|7|

|ab\cd|$00$|$01$|$11$|$10$|
|---|---|---|---|---|
|$00$|1|2|4|3|
|$01$|5|6|8|7|
|$11$|13|14|16|15|
|$10$|9|10|12|11|

