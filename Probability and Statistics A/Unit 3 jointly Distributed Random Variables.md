# 6.1 Joint Distribution Functions
## Joint Cumulative Distribution Function (CDF)
- $ P(X, Y) = P(X \leq x, Y \leq y) $
- Marginal Distribution
    - $ F_X(x) = P(X \leq x, Y \leq \infty) = F(x, \infty) $
    - $ F_Y(y) = P(X \leq \infty, Y \leq y) = F(\infty, y) $
## Discrete Case: Joint Probability Mass Function (PMF)
- $p(x, y) = P(X = x, Y = y)$
- Marginal PMF
    - $p_X(x) = \sum_{y} p(x, y)$
    - $p_Y(y) = \sum_{x} p(x, y)$
## Continuous Case: Joint Probability Density Function (PDF)
- $ f(x, y) = \frac{\partial^2}{\partial x \partial y} F(x, y)$
- Marginal PDF
    - $f_X(x) = \int_{-\infty}^{\infty} f(x, y) \, dy$
    - $f_Y(y) = \int_{-\infty}^{\infty} f(x, y) \, dx$

# 6.2 Independent Random Variables
- X and Y are independent if, for any 2 sets of real numbers A and B: $P(X \in A, Y \in B) = P(X \in A) P(Y \in B)$
- If $ X $ and $ Y $ are independent
    - Joint distribution function: $ F(x, y) = F_X(x) F_Y(y) $
    - Discrete case: $p(x, y) = p_X(x) p_Y(y)$
    - Continuous case: $f(x, y) = f_X(x) f_Y(y)$

# 6.3 Sums of Independent Random Variables
- If $ X, Y $ are independent
- $ X + Y \sim N(\mu_X + \mu_Y, \sigma_X^2 + \sigma_Y^2)$
- $ X + Y \sim Poi(\lambda_X + \lambda_Y)$

# 6.4 Conditional Distributions: Discrete Case
- the conditional distribution of $ X $ given $ Y = y $
- $ P_{X|Y}(x|y) = P(X = x | Y = y) = \frac{P(X = x, Y = y)}{P(Y = y)} = \frac{p(x, y)}{p_Y(y)} $

# 6.5 Conditional Distributions: Continuous Case
- the conditional distribution of $ X $ given $ Y = y $
- $ f_{X|Y}(x|y) = \frac{f(x, y)}{f_Y(y)} $