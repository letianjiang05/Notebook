# Suppose that n people throw their hats into the center of a room. The hats are mixed up, and each person randomly selects one. Find the expected number of people who select their own hat.
$ X_i = 1, \text{ if person i selects their own hat} $\
$ E(X_i) = 0 \times P(X_i = 0) + 1 \times P(X_i = 1) = 0 \times \frac{n-1}{n} + 1 \times \frac{1}{n} = \frac{1}{n} $\
$ Y = \text{number of people who select their own hat} = X_1 + X_2 + \ldots + X_n $\
$ E(X) = E(X_1 + X_2 + \ldots + X_n) = E(X_1) + E(X_2) + \ldots + E(X_n) = n \cdot \frac{1}{n} = 1 $
# 