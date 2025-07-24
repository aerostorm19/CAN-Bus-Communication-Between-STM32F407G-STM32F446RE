# CAN Bus Communication Between STM32F407G & STM32F446RE  
## Project by Abhijit Rai  
**Electronics & Telecommunication Engineering – Army Institute of Technology, Pune**   

---

## Mission Brief

This isn't your average blinking LED project. This is real-time embedded communication using the **CAN protocol**—the same tech that keeps your car's brain in sync. Two STM32 boards talking in real-time, analog sensing on one end, digital response on the other, no nonsense in between. All signal, no noise.

I designed this to push the boundary of low-level communication, hardware/software orchestration, and interrupt-driven control. And all software was written in bare-metal C for full control over the hardware.

---

## What This Rig Does (Communication Workflow)

### STM32F407G Discovery – The Talker (Transmitter) 
- **Analog Acquisition**: Reads potentiometer voltage through an 8-bit ADC channel.  
- **CAN Transmission**: Sends updated values every 100 ms using a dedicated CAN ID.  
- **Peripheral Configuration**: Managed via STM32CubeMX and HAL drivers.

### STM32F446RE Nucleo – The Listener (Receiver)
- **CAN Reception**: Listens for incoming messages and handles them via interrupt callbacks.  
- **Threshold Detection**: Activates onboard LED if received value exceeds predefined limit.  
- **GPIO Control**: Manages digital output based on real-time received data.

---

## Technical Specifications

| Parameter           | Details                                    |
|---------------------|--------------------------------------------|
| Communication Bus   | CAN (Controller Area Network)              |
| Baud Rate           | 500 kbps                                   |
| Message Format      | Standard ID, 1-byte payload                |
| ADC Resolution      | 8-bit (STM32F407G side)                    |
| Transceiver ICs     | MCP2551 / SN65HVD230                       |
| Termination         | 120 Ω resistors at both CAN bus ends       |
| Trigger Mechanism   | LED toggling on STM32F446RE (GPIO)         |
| Message Handling    | Interrupt-driven reception and filtering   |

---

## Software Environment

- **STM32CubeMX**: Peripheral initialization and `.ioc` configuration  
- **STM32CubeIDE**: Build, debug, and firmware deployment  
- **HAL Drivers**: Hardware abstraction layer for CAN, ADC, GPIO, and NVIC  
- **ST-Link Utility**: Programming interface for board flashing  
- **Bare-metal C**: Low-level system control and logic implementation

---

## Wiring Instructions

1. Connect **CANH** and **CANL** lines through appropriate CAN transceivers (e.g., MCP2551 or SN65HVD230).  
2. Add **120 Ω termination resistors** at both ends of the CAN bus to ensure signal integrity.  
3. Flash the `CAN_Sender` firmware to the **STM32F407G** development board.  
4. Flash the `CAN_Receiver` firmware to the **STM32F446RE** development board.  
5. Power both boards. Rotate the potentiometer—once it crosses the threshold, the LED on the receiver board will illuminate.  
6. Observe the real-time behavior enabled by interrupt-driven embedded design.
  
---

## File System Breakdown

| Folder/File        | Purpose                                       |
|--------------------|-----------------------------------------------|
| `CAN_Sender/`      | All code for STM32F407G board (ADC + CAN TX) |
| `CAN_Receiver/`    | All code for STM32F446RE board (CAN RX + LED)|
| `.ioc` Files       | Peripheral config snapshots (CubeMX)         |
| `main.c`           | Application logic                            |
| `can.c`, `adc.c`   | Peripheral init routines                     |
| `Inc/`, `Src/`     | Clean HAL-style project layout               |

---

## Gear Used

- **STM32F407G Discovery Board**  
- **STM32F446RE Nucleo Board**  
- **MCP2551 / SN65HVD230 CAN Transceivers**  
- **120 Ω resistors** x2 (termination)  
- **Potentiometer (0–3.3V input)**  
- **Breadboard, jumpers, and common sense**  
- **1x LED + resistor** for the glow show  

---

## Why I Built This

Because embedded systems should talk to each other like a Jarvis talks to Iron Man’s HUD—fast, accurate, and with zero overhead. I built this to learn, test, and eventually scale up to more complex multi-node communication systems. It’s my stepping stone into distributed embedded control. This project taught me the nitty-gritty of CAN filters, real-time ADC sampling, and interrupt choreography.

---

## References

- [STMicroelectronics – STM32 MCUs](https://www.st.com/en/microcontrollers-microprocessors/stm32-32-bit-arm-cortex-mcus.html)  
- [MCP2551 Datasheet – Microchip](https://www.microchip.com/en-us/product/MCP2551)  
- [SN65HVD230 Datasheet – Texas Instruments](https://www.ti.com/product/SN65HVD230)  

---

## Licensing and Attribution

All design, code, and testing were done by **Abhijit Rai**.  
This project is a solo mission in embedded exploration.  

Fork it, learn from it, improve it—but give credit where it’s due.  
And no, I don’t do magic. I do engineering.

---
## Contact

**Abhijit Rai**  
Email: [abhijit.airosys@gmail.com](mailto:abhijit.airosys@gmail.com)  
---
> **Note:** This repository was originally developed under my other GitHub account, [abhijitrai1619](https://github.com/abhijitrai1619/Smart-Glasses-for-Visually-Impaired).  
> It has been forked and maintained here under [aerostorm19](https://github.com/aerostorm19), also my account, purely for organizational and safety purposes.
