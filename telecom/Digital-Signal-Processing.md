# Digital Signal Processing
- **The Concept:** 
  - When a physical antenna receives **an analog radio wave**, a hardware chip called an **ADC (Analog-to-Digital Converter)** translates that continuous wave into **a massive stream of raw numbers**.
- **I/Q Data (In-phase and Quadrature):**
  - This is the raw format of the signal. C++ software receives huge buffers filled with these I/Q numbers.
- **The C++ Job:** 
  - The software must run heavy mathematical algorithms, like the **Fast Fourier Transform (FFT)**, on these arrays to filter out background noise (interference) and decode the actual digital bits (0s and 1s) from the wave. 
  - Because this requires processing millions of numbers per second, the C++ code must be perfectly optimized: using the Stack instead of the Heap to avoid cache misses, and avoiding slow virtual function calls (vtables).