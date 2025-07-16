1. How to get Wheatstone bridge circuit balanced?
    - galvanometer
2. How to determine $ R_x $ value? NO formula will be provided.
3. Understand the critical thinking Questions and Answer from your Wheatstone Bridge report.

# Objective
1. To connect the Wheatstone bridge circuit on the breadboard and read the resistors.
2. To balance the Wheatstone bridge circuit.

- $ R_x $: The unknown resistor
- $ R_0 $: The potentiometer resistor
- When the current flowing through 𝑏 and 𝑑 is 0, $ V_{b-d} = 0 $, the bridge is in equilibrium (balanced). In this
state,

|Systematic uncertainty|Measurement uncertainty|Combined uncertainty|
|---|---|---|
|$ \Delta R_x $|$ \frac {\Delta R_x}{R_x} = \frac{\Delta R_1}{R_1} + \frac{\Delta R_2}{R_2} + \frac{\Delta R_0}{R_0} $|$ \Delta R_{x} $|

# Questions
1. If the supplied voltage is increased from 3V to 9V in a balanced Wheatstone bridge, what happens to value in galvanometer? Explain your answer briefly.
    - When the bridge is perfectly balanced
        - $ V_{b-d} = 0 $
        - $ I_{b-d} = 0 $
        - $ R_x = \frac {R_1} {R_2} R_0 $
        - the galvanometer still reads zero.
2. Explain briefly why the value of “Measured $ |V_{b} − 𝑉_{d} | $ different with “Calculated $ |𝑉_{b} − 𝑉_{d} | $ ?
    - Instrument and connection resistances: Real wires, contacts, and the galvanometer itself have nonzero resistance.
    - Resistor tolerances: Actual resistance values deviate from their nominal values.
    - Measurement errors: Instruments’ inaccuracies.
    - Non-ideal power supply: Voltage fluctuations.
3. What is the main function of $ R_4 $ in Figure 6.4? What will happen if $ R_4 $ resistance is extremely low?
4. Is it possible to remove the Op-Amp in this circuit connection and the LDR system remain functioning? Explain briefly the reason
    - No.
    - The Op-Amp acts as a comparator, amplifying the small voltage difference across the bridge to drive the LED with a clear high or low signal. 
    - Also, removing the op-amp will cause the circuit to be unstable.