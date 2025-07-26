# Summary
- Counter
    - Asynchronous
    - Synchronous
    - Modulus of counter
    - mod-x counter
- Shift register
    - Mode of operation
    - Shift register counter
# Sequential logic modules
Sequential logic modules are circuits, in which **combinational logic elements are combined with latches and flip-flops** to realize several commonly-used functions. 
Two main classes of these modules: **registers** and **counters**, which are the basic building blocks of a digital computer and other digital logic applications. 
- The shift registers
    - used for storing and manipulating binary data.
    - Can be combined with a binary adder to produce an accumulator.

# Counter
- The counters
    - generate sequences of binary numbers.
    - used in timing units, control circuits, signal generators, and numerous other devices. 
- Counters are a class of sequential logic circuits that tally a series of input pulses; the pulses may be **regular** or **irregular** in nature. 
- The basic building device for counters is the JK or T flip-flop that operates in **toggle mode**.

## Asynchronous
- Outputs and states change as soon as an input changes.



``` mermaid
graph LR
    A[Inputs] --> B[Combinational Circuit]
    B --> C[Outputs]
    B --> D[Memory Elements]
    D --> B
        style B fill:#ffff33,stroke:#ff0000,stroke-width:2px
    style D fill:#ffff33,stroke:#ff0000,stroke-width:2px
```
### 2-bit asynchronous binary counter
- Two positive-edge-triggered T flip-flops are connected in cascade configuration.
- $\tau$: inherent propagation delay time through one T flip-flop, and Q and Q’ change state simultaneously. (In fact $t_{PLH} \neq t_{PHL}$, and $Q$ and $Q'$ do not change state simultaneously).
- Due to $\tau$, transitions of the CLK and transitions of the $Q'$ can never occur at exactly the same time. Therefore, the 2 flip-flops are never simultaneously triggered. So the counter is asynchronous.

- Total delay time (called cumulative delay) from CLK to Q1 is $2\tau$.
- Total number of different states (00, 01,10,11) of the counter is 4.
- The period of Q0 waveform is 2T and of Q1 waveform is 4T, where T is the period of clock signal. 
- If Q0 is the LSB (least significant bit) and Q1 is the MSB (most significant bit), the sequence of the counter states represents a sequence of binary numbers. Hence, it is a binary counter. It counts the number of clock pulses up to 310 (112) and on the 4th pulse it recycles to its original state (002). 
- Recycle refers to the transition of the counter from its final state back to its original state. 

## Synchronous
- Outputs and states change depending on a special input (clock).
``` mermaid
flowchart LR
    A[Inputs] --> B[Combinational<br> Circuit]
    B --> C[Outputs]
    D[Flip-flops] --> B
    B --> D
    E[Clock] --> D

    style B fill:#ffff33,stroke:#ff0000,stroke-width:2px
    style D fill:#ffff33,stroke:#ff0000,stroke-width:2px
```

||Asynchronous|Synchronous|
|---|---|---|
|Refers to events that|Do not have a fixed time relationship with each other and, generally, do not occur at the same time. |have a fixed time relationship with each other. |
|The flip-flops in the counter|do not change states at exactly the same time because they do not have a common clock pulse|are clocked at the same time by a common clock pulse|
|Flip-flops||Only JK or clocked T flip-flop is used because hold and toggle modes are need for the counter operation.|