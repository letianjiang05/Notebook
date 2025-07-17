Sections 12.1 to 12.4 of textbook: 2, 3, 7, 9(a)-(d), 11(a)(b), 12, 15(b)(c)(d), 17, 19, 21, 23(b), 27, 31, 33, 35, 38, 45, 48, 49, 53, 59(a)(b)(c)(d), 61(b)

1. Suppose the relationship between applied stress x and time-tofailure y is described by the simple linear regression model with true regression line $ y = 65 − 1.2x $ and $ \sigma = 8 $.
    1. (a) State the distribution of time-to-failure for any fixed value of applied stress.
        - $ Y | X = x \sim N(65 - 1.2x, 8^2) $
        - $ E(Y | X = x) = 65 - 1.2x $
        - $ Var(Y | X = x) = 8^2 $
    2. State the distribution of time-to-failure when applied stress is 20.
        - $ Y | X = 20 \sim N(65 - 1.2 \cdot 20, 8^2) $
    3. Find the probability that time-to-failure is more than 50 when applied stress is 20.
        - $ P(Y > 50 | X = 20) = P\left(Z > \frac{50 - (65 - 1.2 \cdot 20)}{8}\right) $