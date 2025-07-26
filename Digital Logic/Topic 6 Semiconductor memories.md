# Summary
- Memory
- Types of memory
- Advantages and disadvantages
- RAM
    - SRAM
    - DRAM
- ROM
    - Masked ROM
    - PROM
    - EPROM and EEPROM
- Flash memory
- Memory array
# Memory
- The basic elements of a semiconductor memory is a flip flop in which the information is stored in binary form. 
- The size of a memory chip: $M \times N$ bits
    - $M$: no. of locations available in the memory 
    - $N$: no. of bits in each location.
- Each of the $M$ locations in the memory is defined by a unique address and for accessing an address requires $P$ address lines where $M=2^P$. This address line activates a certain location of the memory and then read or write operation is done.
## Write operation
Sequence of activities:
1. The chip select signal is applied to the CS terminal.
2. The word to be stored is applied to the data-input terminals.
3. The address of the desired memory location is applied to the address-input terminals.
4. A write command signal is applied to the write-control input terminal with RD = 0.
- Write Cycle Time ($t_wc$)
This is the minimum amount of time for which the valid address must be present for writing a word in the memory. In other words, it is the minimum time required between successive write operations.
- Write Pulse Time ($t_w$)
This is the minimum length of the write pulse.
- Write Release Time ($t_{wr}$)
This is the minimum amount of time for which the address must be valid after the write pulse ends.
- Data Set Up Time ($t_{dw}$)
This is the minimum amount of time for which the data must be valid before the write pulse ends.
- Data Hold Time ($t_{dh}$)
This is the minimum amount of time for which the data must be valid after the write pulse ends.
## Read operation
1. The chip-select signal is applied to the CS terminal.
2. The address of the desired memory location is applied to the address-input terminals.
3. A read-command signal is applied to the read control-input terminal.
- Read Cycle Time ($t_{rc}$)
This is the minimum amount of time for which the valid address must be present for reading a word from the memory. In other words, it is the minimum time required between successive read operations.
- Access Time ($t_{A}$)
This is the maximum time from the start of the valid address of the read cycle to the time when the valid data is available at the data outputs. The access time is at most equal to the read-cycle time, i.e., $t_{A} \leq t_{rc}$. In other words, the data outputs might be ready before the memory is actually ready for the next read operation.
- Read To Output Valid Time ($t_{rdv}$)
This is the maximum time delay between the beginning of the read pulse and the availability of valid data at the data outputs.
- Read To Output Active Time ($t_{RDX}$)
This is the minimum time delay between the beginning of the read pulse and the output buffers coming to active state (from the high-impedance state).
- Chip-Select To Output Valid Time ($t_{CO}$)
This is the maximum time delay between the beginning of the chip-select pulse and availability of valid data at the data outputs.
- Chip-Select To Output Active Time ($t_{CX}$)
This is the minimum time delay between the beginning of the chip-select pulse and the output buffers coming to active state.
- Output Tristate From Read ($t_{ORD}$)
This is the maximum time delay between the end of the read pulse and the output buffers going to high-impedance state.
- Data Hold Time ($t_{OHA}$)
This is the minimum time for which the valid data is available at the data outputs after the address ends.
# Types of memory
- Many kinds of storage devices may be used for memory elements. 
- The old types of memories such as magnetic cores, electromechanical relays are rarely used in today’s computer. 
- Today’s storage or memory devices
  - **Semiconductor memories** - ROMs and RAMs (or write-and-read memory)
  - **Magnetic storage** - disks (random access) and tapes (serial access)
  - **Optical storage (or disk)** - disks (random access) including magneto-optical disk

# Advantages and disadvantages

# ROM (Read-Only Memory) and RAM (Random Access Memory)
volatile: describes a memory that loses its stored data when the dc power is removed. 

||ROM|RAM|
|---|---|---|
||Non-volatile|Volatile|
||mostly read but sometimes write memory or flash ROM memory|mostly further subcategorized into SRAM and DRAM|
# RAM
- SRAM
- DRAM

||SRAM|DRAM|
|---|---|---|
|Data Read Speed|Faster|Slower|
|Stored Data|Static|Dynamic|
|Both can be asynchronous and synchronous types|Yes|Yes|
# ROM
- Masked ROM
- PROM
- EPROM and EEPROM
# Flash memory
- The ideal memory characteristics
    - high storage capacity
    - nonvolatility
    - in-system read and write capabilitiy
    - comparatively fast operation
    - cost effectiveness.
- The traditional memory technologies above individually exhibit one or more of these characteristics
- Only flash memory exhibits all of them.
- Flash memories are high-density read/write memories that are nonvolatile, which means that data can be stored indefinitely without power. They are frequently used in place of floppy or small-capacity hard disk drives in portable computers. It is often called nonvolatile RAM. It has the property to “flash (erase)” a large block of memory.

A storage cell of flash memories consists of a single floating-gate MOS transistor (FGMOS). A data bit is stored as charged or the absence of charge on the floating gate depending if  a 0 or a 1 is stored. 
## Flash memory cell

# Memory array
