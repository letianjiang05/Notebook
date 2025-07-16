# Linear Regression
- $ y(x, w) = w_0 + w_1 x $
- Mean Squared Error: $ L(w) = \frac{1}{n} \sum_{i=1}^{n} (y_i - y(x_i, w))^2 $
    - Mean: $ \frac{1}{n} \sum_{i=1}^{n} $
    - Error: $ (y_i - y(x_i, w)) $
    - Squared: $ ^2 $
# Solving for $ w $
- Target: $ w = \arg \min_w L(w) $
- Least Squares Solution
    - $ \frac{\partial L(w)}{\partial w_0} = 0 $
    - $ \frac{\partial L(w)}{\partial w_1} = 0 $
    - we get $ w_0 \text{ and } w_1 $
- Least Squares Solution (Matrix Form)
    - $ w = (X^T X)^{-1} X^T y $
    - $ X = \begin{bmatrix} 1 & x_1 \\ 1 & x_2 \\ \vdots & \vdots \\ 1 & x_n \end{bmatrix} $
    - $ y = \begin{bmatrix} y_1 \\ y_2 \\ \vdots \\ y_n \end{bmatrix} $
    - $ w = \begin{bmatrix} w_0 \\ w_1 \end{bmatrix} $
