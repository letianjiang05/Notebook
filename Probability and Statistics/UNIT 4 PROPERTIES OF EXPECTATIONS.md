# 7.2 Expectation of Sums of Random Variables
- Discrete Case:
  - $ E(g(X + Y)) = \sum_{y}\sum_{x} g(x + y) p(x, y) $
  - $ E(aX + bY) = aE(X) + bE(Y) $
- Continuous Case:
    - $ E(g(X + Y)) = \int_{-\infty}^{\infty} \int_{-\infty}^{\infty} g(x + y)p(x, y) \, dx \, dy $
    - $ E(aX + bY) = aE(X) + bE(Y) $

# 7.4 Convariance, Variance of Sums and Correlation Coefficient
- Covariance:
  - $ \text{Cov}(X, Y) = E[(X - E(X))(Y - E(Y))] = E(XY) - E(X)E(Y) $