# RF Propagation & Modulation Schemes
### Modulation Schemes
Radiowave - is a sinusoid, and it is required to be changed to transfer data.

**What it is:**
- **Modulation** - is the process of altering the properties of a radio wave (its amplitude, frequency, or phase) to encode binary data (0s and 1s).   
- **QAM (Quadrature Amplitude Modulation)** is a 5G standard. 
  - Passes some of the bits per one change by combining wave height and step. 
- **The Trade-off**: 
  - 16-QAM transfers 4. bits per time, 256-QAM - 8. bits. 
  - Чем выше модуляция (256-QAM), тем быстрее летит интернет, но тем чище и идеальнее должен быть радиоэфир. Если есть помехи, данные исказятся.

### RF Propagation
**What it is:**
- How radio waves travel from the gNodeB (antenna) to the UE (smartphone) through the physical environment.   
- Path Loss: Чем дальше телефон от вышки, тем слабее сигнал.
- Multipath Fading: signal reflects from other objects on the ground (trees, buildings, cars). So cellphone antenna gets multiple copies of the signal with different delays. And Signal Procesing Algorythms have to clear this chaos mathematically. 

# The LTE/5G Protocol Stack 
is a whole data way before coverting to the radio wave.

### The "way":
1. **RRC (Radio Resource Control)** - the "manager" of the connection.
   - **What it does**: 
     - Handles setting up the call, managing power, and moving the connection to a new tower if the user is driving a car (handover). 
     - Does not transfer / carry user data (like YouTube videos), only carries signaling, control messages to set up a connection, manage radio power, and handle handovers, like moving from one cell (tower) to another.
2. **PDCP (Packet Data Convergence Protocol)** - the encryption level:
    - **What it does**: 
      - Compresses IP headers to save bandwidth 
      - Handles Ciphering/Integrity useer's data Protection *(so that anyone listening to the radio waves cannot steal the information)*.
3. **RLC (Radio Link Control)** - segmentation and reassembly :
    - **What it does**: 
      - Chops data into smaller, manageable pieces before sending it down.
      - Glues it back together on the receiving end *('cause a large IP packet, like a chunk of an image, might be too big for a single radio transmission)*.
4. **MAC (Medium Access Control)** - the traffic controller:
    - **What it does**: 
      - Decides when the device is allowed to talk. 
      - Schedules the radio resources and handles ultra-fast error correction (HARQ) to quickly retransmit lost pieces without waiting for TCP to notice.
5. **PHY (Physical Layer)** - the hardware level:
    - **What it does**:  
      - Takes the final digital bits and translates them into physical radio waves using modulation schemes (like QAM) and RF propagation.