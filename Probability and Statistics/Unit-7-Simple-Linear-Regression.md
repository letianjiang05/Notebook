# 12.1 The Simple Linear Regression Model
- **Regression**: investigates the relationship between variables related in a nondeterministic fashion.
- **Linear Regression**:
- $$Y = \beta_0 + \beta_1 X$$
    - $$X$$: Independent/Predictor/Explanatory variable
    - $$Y$$: Dependent/Response variable
    - $$\beta_0$$: Intercept
    - $$\beta_1$$: Slope
- Scatterplot: A picture of these data $$(x_i, y_i) $$.
- If the two variables are not deterministically related: $$Y = \beta_0 + \beta_1 X + \epsilon $$
    - $$\epsilon$$: Uncertainty
- Relationship
    - Linear
    - Positive
    - Negative
## Simple Linear Regression Model
- $$Y = \beta_0 + \beta_1 X + \epsilon$$
    - $$\epsilon$$: random error term assumed to be normally distributed with $$E(\epsilon) = 0$$ and $$Var(\epsilon) = \sigma^2$$
- Assumptions
    - $$E(Y |X = x)$$ = β0 + β1x (Linearity)
    - $$Var(Y |X = x) = σ^2$$ (Homogeneity of Variance)
    - $$Y |X = x ∼ Normal$$ (Normality)
    - All observations are independent of one another. (Independence)

# 12.2 Estimating Model Parameters
To find Fitted Line/Least Squares Line:
- principle of least squares
    - Sum of squared: $$\sum_{i=1}^n (y_i - \hat{y}_i)^2$$

    - vertical distances (deviations)
    