# Telecommunication
is a transmitting information over a distance.

### Traffic types:
1. Voice
2. Data
3. Image
4. Video
5. Multimedia

(All of them contain different bandwidth, latency, jitter, loss requirements).

# RAN (Radio Access Network)
* connects individual devices to other parts of a network through a **radio connections**; 
* links user equipment, such as a cellphone, computer or any remotely controlled machine, over a **fiber or wireless Backhaul connection** to the core network, which manages subscriber information, location and more; 

It's evolved from the first generation (1G) to the fifth generation (5G) of cellular networking. With the development of **fourth generation (4G)** technology in the 2000s, the **3rd Generation Partnership Project (3GPP)** introduced **Long-Term Evolution (LTE) RAN**, and the radio access network and the core network changed significantly. 



### ❓❓❓ A RAN is made up of three essential elements:
1. **Antennas** - convert electrical signals into radio waves.
2. **Radios** - transform digital information into signals that can be sent wirelessly; ensure that transmissions are in the correct frequency bands with the right power levels.
3. **Baseband units (BBUs)** - provide a set of signal processing functions that make wireless communication possible. Traditional baseband uses **custom electronics** combined with **multiple lines of code** to enable wireless communication, typically **using the licensed radio spectrum**; BBU processing detects errors, secures the wireless signal and ensures that wireless resources are used effectively.

❓❓❓ Now, with LTE Advanced and 5G, improvements are coming in the form of:
- centralized RAN, also called **Cloud RAN (C-RAN)**.
- multiple antenna arrays, such as **MIMO** - multiple input, multiple output.


### How does RAN works:
1. A RAN provides access to and coordinates the management of resources across the **radio sites**. 
2. A handset or other device is wirelessly connected to the backbone, or core network.
3. The RAN sends its signal to various wireless endpoints so it can travel with traffic from other networks. 
4. **Dual-mode handsets** - a single handset or phone could be connected at the same time to multiple RANs.



# gNodeB (gNB) / eNodeB (eNB): 
### gNodeB - the foundational base station for 5G NR (New Radio) networks
#### Features of the New Network:
1. Support data-hungry applications
2. Support medium to carry multimedia
3. Minimize delay
4. Handle and transfer any data format
5. ❓❓❓ QoS (Quality of Service) Guarantees - ensures that different types of traffic meet performance requierements.  
6. ❓❓❓ Encryption at every layer

### eNodeB - the foundational base station for 4G LTE networks
- ❓❓❓ With 4G, system connectivity for the first time was based on the Internet Protocol (IP), replacing the previous circuit-based networks.
- eNB is the specific component that **connects user devices back to the EPC (Evolved Packet Core)**.

# Core Network (5GC / EPC): 
The central part of the mobile network that handles authentication, routing, and billing.
1. **Authentication** - Is this SIM card allowed on the network? 
2. **Billing / Mobility** - Tracking the phone as it moves from one tower to another so a call doesn't drop.
3. **Routing** - Connecting the phone's request to the actual public internet.

