# 7.2 Expectation of Sums of Random Variables
## Discrete Case:
- $ E(g(X + Y)) = \sum_{y}\sum_{x} g(x + y) p(x, y) $
  - $ E(aX + bY) = aE(X) + bE(Y) $
## Continuous Case:
- $ E(g(X + Y)) = \int_{-\infty}^{\infty} \int_{-\infty}^{\infty} g(x + y)p(x, y) \, dx \, dy $

# 7.4 Convariance, Variance of Sums and Correlation Coefficient
## Covariance: A measure of linear relationship
- $ \text{Cov}(X, Y) = E[(X - E(X))(Y - E(Y))] = E(XY) - E(X)E(Y) $
  - $\text{Cov}(X, Y) = E(XY) - E(X)E(Y)$
- **Large Positive**: Positive Linear relationship
- **Large Negative**: Negative Linear relationship
- **Zero**: No linear relationship
- $\text{Cov}(X, Y) = \text{Cov}(Y, X)$
- $\text{Cov}(X, X) = \text{Var}(X)$
- $\text{Cov}(aX + b, Y) = a \text{Cov}(X, Y)$
- $\text{Cov}(aX + b, cY + d) = ac \text{Cov}(X, Y)$
- $\text{Cov}(\sum_{i=1}^n X_i, \sum_{j=1}^m Y_j) = \sum_{i=1}^n \sum_{j=1}^m \text{Cov}(X_i, Y_j)$
### Independent Random Variables:
- If $X$ and $Y$ are independent
  - $E(g(X)h(Y)) = E(g(X))E(h(Y))$
  - $\text{Cov}(X, Y) = 0$
- Zero Covariance:
  - If $\text{Cov}(X, Y) = 0$, it does not imply independence.
## Variance
- $\text{Var}(X) = E[(X - E(X))^2] = E(X^2) - (E(X))^2$
- $\text{Var}(aX + bY) = a^2 \text{Var}(X) + b^2 \text{Var}(Y) + 2ab \text{Cov}(X, Y)$
- $\text{Var}(\sum_{i=1}^n a_i X_i) = \sum_{i=1}^n a_i^2 \text{Var}(X_i) + 2\sum_{1 \leq i < j \leq n} a_i a_j \text{Cov}(X_i, X_j)$
## Correlation:
- $ \rho(X, Y) = \text{Corr}(X, Y) = \frac{\text{Cov}(X, Y)}{\sqrt{\text{Var}(X) \text{Var}(Y)}} $
- $-1 \leq \rho(X, Y) \leq 1$
  - **1**: Perfect Positive Linear relationship
  - **-1**: Perfect Negative Linear relationship
  - **0**: No linear relationship
## Bivariate Normal Distribution

# 7.5 Conditional Expectation
## Discrete Case:
- $ E(X | Y = y) = \sum_{x} x P(X = x | Y = y) = \sum_{x} x p_{X|Y}(x | y) $
## Continuous Case:
- $ E(X | Y = y) = \int_{-\infty}^{\infty} x f_{X|Y}(x | y) \, dx $

## The Central Limit Theorem
- $E(\bar X) = \mu$
- $Var(\bar X) = \frac{\sigma^2}{n}$
- The Central Limit Theorem:
  - If $n$ is large enough
  - $\bar X \sim N(\mu, \frac{\sigma^2}{n})$
  - $\sum_{i=1}^n X_i \sim N(n\mu, n\sigma^2)$