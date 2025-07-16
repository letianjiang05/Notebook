- Counters
- Registers
# Sequential logic modules
Sequential logic modules are circuits, in which **combinational logic elements are combined with latches and flip-flops** to realize several commonly-used functions. \
Two main classes of these modules are **registers** and **counters**, which are the basic building blocks of a digital computer and other digital logic applications. \
The shift registers are used for storing and manipulating binary data.\
Shift registers can be combined with a binary adder to produce an accumulator.\
The counters, which generate sequences of binary numbers, are used in timing units, control circuits, signal generators, and numerous other devices. 

# Sequential Circuits
## Asynchronous sequential circuits:
Outputs and states change as soon as an input changes.

``` mermaid
graph LR
    A[Inputs] --> B[Combinational Circuit]
    B --> C[Outputs]
    B --> D[Memory Elements]
    D --> B
        style B fill:#ffff33,stroke:#ff0000,stroke-width:2px
    style D fill:#ffff33,stroke:#ff0000,stroke-width:2px
```

## Synchronous sequential circuits:
Outputs and states change depending on a special input (clock).
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
## Counters
Counters are a class of sequential logic circuits that tally a series of input pulses; the pulses may be **regular** or **irregular** in nature.\
Counters may be categorized as **asynchronous/synchronous**. 
The basic building device for counters is the **JK** or **T** flip-flop that operates in **toggle mode**.

### Asynchronous counters
Asynchronous refers to events that do not have a fixed time relationship with each other and, generally, do not occur at the same time. 
Asynchronous counter is one in which the flip-flops within the counter do not change states at exactly the same time because they do not have a common clock pulse.

#### A 2-bit asynchronous binary counter