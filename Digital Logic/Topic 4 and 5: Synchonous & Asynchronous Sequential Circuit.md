- Counters
- Registers
# Sequential logic modules
Sequential logic modules are circuits, in which combinational logic elements are combined with latches and flip-flops to realize several commonly-used functions. 
Two main classes of these modules are registers and counters, which are the basic building blocks of a digital computer and other digital logic applications. 
The shift registers are used for storing and manipulating binary data.
 Shift registers can be combined with a binary adder to produce an accumulator. 
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
```

## Synchronous sequential circuits:
Outputs and states change depending on a special input (clock).
``` mermaid
graph LR
    A[Clock] --> B[Memory Elements]
    B --> C[Outputs]
    C --> D[Combinational Circuit]
    D --> B
```