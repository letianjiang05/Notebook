# Asymptotic Notation
- A mathematical framework used in computer science to analyze and describe the efficiency of algorithms in
    - time complexity (execution time) 
    - space complexity (memory usage).
- how an algorithm behaves as the input size grows toward infinity
- "How does the number of operations grow as the input grows?"


# 7.2 Intervals Based on a Normal Population Distribution
- Parameters of interest: $ \mu $. 
- Population distribution is normal. 
- Population standard deviation $ \sigma $ is unknown.
- Then $ \frac{\overline{X} - \mu}{S / \sqrt{n}} \sim t_{n-1} $
    - t-distribution with $ n - 1 $ degrees of freedom.
    - 