# 6.1 Joint Distribution Functions
- Joint Cumulative Distribution Function (CDF)
    - $ P(X, Y) = P(X \leq x, Y \leq y) $
- Marginal Distribution
    - $ F_X(x) = P(X \leq x, Y \leq \infty) = F(x, \infty) $
    - $ F_Y(y) = P(X \leq \infty, Y \leq y) = F(\infty, y) $

- For Discrete Random Variables:
    - Joint Probability Mass Function (PMF)
        - $ p(x, y) = P(X = x, Y = y) $
- For Continuous Random Variables:
    - Joint Probability Density Function (PDF)
        - $ f(x, y) = \frac{\partial^2}{\partial x \partial y} F(x, y)$
- Marginal PDF
    - $ f_X(x) = \int_{-\infty}^{\infty} f(x, y) \, dy $
    - $ f_Y(y) = \int_{-\infty}^{\infty} f(x, y) \, dx $
- $ P(X \in A, Y \in B) = \int_A \int_B f(x, y) \, dx \, dy $
- $ F(x, y) = P(X \leq x, Y \leq y) = \int_{-\infty}^x \int_{-\infty}^y f(u, v) \, dv \, du $
- Marginal PDF
    - $ f_X(x) = \int_{-\infty}^{\infty} f(x, y) \, dy $
    - $ f_Y(y) = \int_{-\infty}^{\infty} f(x, y) \, dx $
- $ P(X < 1, Y < 1) = \int_{-\infty}^1 \int_{-\infty}^1 f(x, y) \, dy \, dx $
- $ P(X < Y) = \int_{-\infty}^{\infty} \int_{-\infty}^{y} f(x, y) \, dx \, dy $

# 6.2 Independent Random Variables
- X and Y are independent if, for any 2 sets of real numbers A and B:
$ P(X \in A, Y \in B) = P(X \in A) P(Y \in B) $
- If $ X $ and $ Y $ are independent, then:
    - Joint distribution function: $ F(x, y) = F_X(x) F_Y(y) $
    - 

# 6.3 Sums of Independent Random Variables
$ X \sim N(\mu_X, \sigma_X^2) $\
$ Y \sim N(\mu_Y, \sigma_Y^2) $\
$ Z \sim N(\mu_Z, \sigma_Z^2) $\
If $ X, Y, Z $ are independent, then:\
$ X + Y + Z \sim N(\mu_X + \mu_Y + \mu_Z, \sigma_X^2 + \sigma_Y^2 + \sigma_Z^2) $

$ X \sim Poi(\lambda_X) $\
$ Y \sim Poi(\lambda_Y) $\
$ Z \sim Poi(\lambda_Z) $\
If $ X, Y, Z $ are independent, then:\
$ X + Y + Z \sim Poi(\lambda_X + \lambda_Y + \lambda_Z) $\

# 6.4 Conditional Distributions: Discrete Case
the conditional distribution of $ X $ given $ Y = y $ is defined as:
$ P(X = x | Y = y) = \frac{P(X = x, Y = y)}{P(Y = y)} = \frac{p(x, y)}{p_Y(y)} $

# 6.5 Conditional Distributions: Continuous Case
the conditional distribution of $ X $ given $ Y = y $ is defined as:
$ f_{X|Y}(x|y) = \frac{f(x, y)}{f_Y(y)} = \frac{f(x, y)}{\int_{-\infty}^{\infty} f(x, y) \, dx} $