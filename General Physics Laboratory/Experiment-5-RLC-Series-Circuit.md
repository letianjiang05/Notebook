||DC|AC|
|---|---|---|
|Direction of current|Fixed|Alternating|

- $ V(t) = V_{max} \sin(\omega t + \phi) $
    - Root Mean Square: $ V_{rms} = \frac{V_{max}}{\sqrt{2}} $
    - $ V_p = {V_{max}} $
    - $ V_{pp} = 2V_{max} $

|Property|Resistor|Inductor|Capacitor|
|---|---|---|---|
|Function|To reduce current flow|Store energy in a magnetic field|Store energy in an electric field|
|Frequency Dependence|Independent|Dependent|Dependent|
|Voltage and Current Phase|In phase|Out of phase|Out of phase|
|Formula||$ X_L = w L = 2 \pi f L $|$ X_C = \frac{1}{w C} = \frac{1}{2 \pi f C} $|

- Resistance: $ Z = \sqrt{R^2 + (X_L - X_C)^2} $
- $ I = \frac{V}{\sqrt{R^2 + (X_L - X_C)^2}} $
    - Resonance: $ X_L = X_C $, inductor cancels out the capacitor
        - $ I $ is maximum
        - $ \phi = 0 $
        - $ I $ in phase with $ V $
        - $ w = \frac{1}{\sqrt{LC}} $
        - $ f = \frac{1}{2 \pi \sqrt{LC}} $
    - Indective
        - $ X_L > X_C $
        - $ \phi > 0 $
        - Voltage leads current
    - Capacitive
        - $ X_L < X_C $
        - $ \phi < 0 $
        - Current leads voltage
- Bandwidth: Narrower, Better
    - Lower cut-off frequency: $ f_1, f_2 $
    - $ I_1 = \frac{I}{\sqrt{2}} $
- Quality Factor: $ Q = \frac{P_{stored}}{P_{dissipated}} = \frac{I^2 X}{I^2 R} = 2 $
    - $ X $: Reactance
    - $ Q $ higher
        - the sharper the resonant peak
        - the narrower the bandwidth
        - the more energy stored in the circuit

# Questions
1. Discuss the effect of each component in the RLC circuit on $ f_0 $ and $ \Delta f $.