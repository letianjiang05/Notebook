# 2.2 Sample Space and Events
- Sample Space(S): The set of all possible outcomes of a random experiment.
    - S = {tail, head}
- Event(E): A subset of the sample space, which can include one or more outcomes.
    - E = {head}

- Union $ A \cup B $
- Intersection $ A \cap B $
- Complement $ A^c $

A and B are mutually exclusive: Two events that cannot occur at the same time.$ A \cap B = \emptyset $

DeMorgan's Law:
- $(A \cup B)^c = A^c \cap B^c$
- $(A \cap B)^c = A^c \cup B^c$
- $(A \cup B \cup C)^c = A^c \cap B^c \cap C^c$
- $(A \cap B \cap C)^c = A^c \cup B^c \cup C^c$

# 2.3 Axioms of Probability
- Axiom 1: $ 0 \leq P(S) \leq 1 $ 
- Axiom 2: $ P(S) = 1 $
- Axiom 3: If $ A_1, A_2, \ldots $ are mutually exclusive events, then:
  $$ P(A_1 \cup A_2 \cup \ldots) = P(A_1) + P(A_2) + \ldots $$

- Example:\
Axiom 2: $ P(S) = 1 $\
Axiom 3: $ P({H}) + P({T}) = P({H} \cap {T}) $\
Since coin is fair, thus $ P({H}) = P({T}) $


# 2.4 Some Simple Proposition
- Complement Rule: $ P(E^c) = 1 - P(E) $
- If $ E \subset S $, then $ P(E) \leq P(S) $
- Addition Rule: $ P(A \cup B) = P(A) + P(B) - P(A \cap B) $\
$ P(A \cup B \cup C) = P(A) + P(B) + P(C) - P(A \cap B) - P(A \cap C) - P(B \cap C) + P(A \cap B \cap C) $
- $ P(E_1 \cup E_2 \cup \ldots \cup E_n) = P(E_1) + P(E_2) + \ldots + P(E_n) - P(E_1 \cap E_2) - P(E_1 \cap E_3) - \ldots - P(E_{n-1} \cap E_n) + P(E_1 \cap E_2 \cap E_3) + \ldots + P(E_{n-2} \cap E_{n-1} \cap E_n)$

# 2.5 Sample Spaces Having Equally Likely Outcomes
Then: $ P(E) = \frac{n(E)}{n(S)} $
- $ n(E) $ number of outcomes in E.
- $ n(S) $ number of outcomes in S.

- Roll 2 dice, find the sum is 7:\
E = { (1,6), (2,5), (3,4), (4,3), (5,2), (6,1) }\
n(E) = 6\
n(S) = 36
- 6 White, 5 Black, find 1 white 2 black:\
$ n(E) = \binom{6}{1} \binom{5}{2}$\
$ n(S) = \binom{11}{3}$

# 3.2 Conditional Probability
Probability of A given B: $ P(A|B) = \frac{P(A \cap B)}{P(B)} $
- A, B, C, D have 13 cards each, If A and B have a total of 8 spades among them, what is the probability that C has 3 spades? :\
$ n(F) = \binom{26}{5} $\
$ n(E \cap F) = \binom{13}{3} \binom{13}{2} $
## Multiplication Rule
$ P(A \cap B) = P(A|B) \cdot P(B) $
# 3.3 Bayes's Formula
- Law of Total Probability:\
$ P(B) = P(B|A) \cdot P(A) + P(B|A^c) \cdot P(A^c) $
- Bayes's Formula:\
$ P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B)} $

A = "Disease", B = "Positive Test":\
$ P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B|A) \cdot P(A) + P(B|A^c) \cdot P(A^c)} $
- Generalization of Total Probability:\
If $ A_1, A_2, \ldots, A_n $ are mutually exclusive and exhaustive events, then:\
$ P(B) = P(B|A_1) \cdot P(A_1) + P(B|A_2) \cdot P(A_2) + \ldots + P(B|A_n) \cdot P(A_n) $
- Generalization of Bayes's Formula:\
$ P(A_i|B) = \frac{P(B|A_i) \cdot P(A_i)}{P(B|A_1) \cdot P(A_1) + P(B|A_2) \cdot P(A_2) + \ldots + P(B|A_n) \cdot P(A_n)} $

# 3.4 Independent Events
- E is independent of F if:\
$ P(E|F) = P(E) $\
$ P(E \cap F) = P(E) \cdot P(F) $
- E, F, G are independent if:\
$ P(E \cap F \cap G) = P(E) \cdot P(F) \cdot P(G) $\
$ P(E \cap F) = P(E) \cdot P(F) $\
$ P(E \cap G) = P(E) \cdot P(G) $\
$ P(F \cap G) = P(F) \cdot P(G) $

- If E is independent of F, then F is independent of E.

$ P(E \cap F^c) = P(E) - P(E \cap F)$