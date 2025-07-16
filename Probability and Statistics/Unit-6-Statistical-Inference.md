- **Statistical Inference**: 
- **Hypothesis Testing**: a 

# 1.1 Populations, Samples, and Processes
- Data
- Descriptive Statistics: Organizing and summarizing data.
    - Graphically
    - Numerically
- Inferential Statistics: Drawing conclusions based on information contained in the data.
    - Population: The entire group of individuals or items of interest.
    - Census: A complete enumeration of a population.
    - Sample: A subset of the population.
- Variable
    - Quantitative Variable
    - Qualitative/Categorical Variable
# 1.3 Measures of Location
- Mean: $\bar{x} = \frac{1}{n} \sum_{i=1}^{n} x_i $
    - Sample Mean: $ \bar{x} $
    - Population Mean: $ \mu $
    - Outlier
- Median: $ 50^{th} $ percentile
    - $ n $ is odd
    - $ n $ is even: take average
    - Sample Median: $ \tilde{x} $
    - Population Median: $ \tilde{\mu} $
    - Is not affected by outliers.
- Mode: Frequently occurring

# 1.4 Measures of Variability
- Variance: $ s^2 = \frac{1}{n-1} \sum_{i=1}^{n} (x_i - \bar{x})^2 = \frac{S_{xx}}{n-1}$
    - $ S_{xx} = \sum_{i=1}^{n} (x_i - \bar{x})^2 = \sum_{i=1}^{n} x_i^2 - \frac{1}{n} \left( \sum_{i=1}^{n} x_i \right)^2 $
- $ \sum_{i=1}^{n} (x_i - \bar{x}) = 0 $
    - Standard Deviation: $ s^2 $
    - Population Variance: $ \sigma^2 $
    - Sample Standard Deviation: $ s $
    - Population Standard Deviation: $ \sigma $
- The interquartile range: $ IQR = Q_3 - Q_1 $
    - $ Q_1 $: $ 25^{th} $ percentile
    - $ Q_3 $: $ 75^{th} $ percentile

# 6.1 Some General Concepts of Point Estimation
||Parameter, $θ$|Statistic, $\hat{θ}$|
|---|---|---|
|Mean|$ \mu $|$ \overline{X} $|
|Variance|$ \sigma^2 $|$ S^2 $|
|Standard Deviation|$ \sigma $|$ S $|
|Proportion|$ p $|$ \hat{P} $|

- Parameter
    - Target
    - Unknown
    - Constant - One single value
- Statistic
    - Known
    - Random Variable - a list of possible values with associated probabilities
    - Use Statistic to infer Parameter