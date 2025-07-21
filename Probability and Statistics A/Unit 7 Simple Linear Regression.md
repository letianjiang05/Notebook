# 12.1 The Simple Linear Regression Model
- $Y = \beta_0 + \beta_1 X + \epsilon$
    - $X$: Independent/Predictor/Explanatory variable
    - $Y$: Dependent/Response variable
    - $\beta_0$: Intercept
    - $\beta_1$: Slope
    - $\epsilon$: random error term assumed to be normally distributed with $E(\epsilon) = 0$ and $Var(\epsilon) = \sigma^2$
- Assumptions
    - $E(Y |X = x)$ = β0 + β1x (Linearity)
    - $Var(Y |X = x) = σ^2$ (Homogeneity of Variance)
    - $Y |X = x ∼ Normal$ (Normality)
    - All observations are independent of one another. (Independence)

# 12.2 Estimating Model Parameters
- To find Fitted Line/Least Squares Line:
- principle of least squares
    - Sum of squared: $\sum_{i=1}^n (y_i - \hat{y}_i)^2$
    - Slope: $\hat{\beta}_1 = b_1 = \frac{\sum_{i=1}^n (x_i - \bar{x})(y_i - \bar{y})}{\sum_{i=1}^n (x_i - \bar{x})^2} = \frac{S_{xy}}{S_{xx}}$
    - Intercept: $\hat{\beta}_0 = b_0 = \bar{y} - b_1 \bar{x}$
    - Fitted Line/Least Squares Line: $\hat{y} = b_0 + b_1 x$
- danger of extrapolation: fitted relationship may not be valid outside the range of the data.
- The amount of variability inherent in the regression model $\sigma^2$
    - Large: the model does not fit the data well.
    - Small: the model fits the data well.
- Fitted values: $\hat{y}_i = b_0 + b_1 x_i$
- Residuals: $\hat{\epsilon}_i = e_i = y_i - \hat{y}_i$
- Estimate of $\sigma^2$:
    - $\hat{\sigma}^2 = \text{MSE (Mean Squared Error)} = \frac{\text{SSE (Sum of Squared Errors)}}{n - 2} = \frac{\sum_{i=1}^n e_i^2}{n - 2} = S_{yy} - b_1 S_{xy}$
## The coefficient of determination
- $\text{SST} = S_{yy}$
- $R^2 = 1 - \frac{SSE (Sum of Squared Errors)}{SST (Total Sum of Squares)} = \frac{SSR (Sum of Squared Regression)}{SST}$
    - High: successful model
    - Low: unsuccessful model

# 12.3 Inferences about the slope parameter $\beta_1$
- Null Hypothesis: $H_0: \beta_1 = 0$

# 12.4 Confidence Intervals and Prediction Intervals
PI is wider than CI.
## Confidence Interval 
- The average of $Y$ falls into: 
- $CI = \hat{y} \pm t_{\alpha/2, n-2} \cdot \hat{\sigma} \sqrt{\frac{1}{n} + \frac{(x - \bar{x})^2}{S_{xx}}}$
## Prediction Interval
- The Y-value of a new observation falls into:
- $PI = \hat{y} \pm t_{\alpha/2, n-2} \cdot \hat{\sigma} \sqrt{1 + \frac{1}{n} + \frac{(x - \bar{x})^2}{S_{xx}}}$
# 12.5 Correlation
- Sample correlation coefficient: $r = \frac{\sum (x_i - \bar{x})(y_i - \bar{y})}{\sqrt{\sum (x_i - \bar{x})^2 \sum (y_i - \bar{y})^2}} = \frac{S_{xy}}{\sqrt{S_{xx} S_{yy}}}$
- $-1 \leq r \leq 1$
    - $r = 1$: perfect positive linear relationship
    - $r = -1$: perfect negative linear relationship
    - $r = 0$: no linear relationship
- Informal rule of thumb:
    - Weak: $[0, 0.5]$
    - Moderate: $[0.5, 0.8]$
    - Strong: $[0.8, 1]$