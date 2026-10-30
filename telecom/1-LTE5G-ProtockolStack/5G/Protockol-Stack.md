# The LTE/5G Protocol Stack 
is a whole data way before coverting to the radio wave.

### The "way":
- RRC (Radio Resource Control):
What it does: The "manager" of the connection. It handles setting up the call, managing power, and moving the connection to a new tower if the user is driving a car (handover). It does not carry user data (like YouTube videos); it only carries signaling/control messages.
- PDCP (Packet Data Convergence Protocol):
What it does: This layer is perfect for your cybersecurity background! It handles IP header compression and Ciphering/Integrity Protection. It encrypts the user's data so that anyone listening to the radio waves cannot steal the information.
- RLC (Radio Link Control):
What it does: Segmentation and reassembly. A large IP packet (like a chunk of an image) might be too big for a single radio transmission. - RLC chops it into smaller, manageable pieces before sending it down, and glues it back together on the receiving end.
- MAC (Medium Access Control):
What it does: The traffic controller. It decides when the device is allowed to talk. It schedules the radio resources and handles ultra-fast error correction (HARQ) to quickly retransmit lost pieces without waiting for TCP to notice.
- PHY (Physical Layer):
What it does: The hardware level. It takes the final digital bits and translates them into physical radio waves using modulation schemes (like QAM) and RF propagation.