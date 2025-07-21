# CAN Bus Communication Between STM32F407G & STM32F446RE  
## Project by Abhijit Rai  
**Electronics & Telecommunication Engineering – Army Institute of Technology, Pune**   

---

## Mission Brief

This isn't your average blinking LED project. This is real-time embedded communication using the **CAN protocol**—the same tech that keeps your car's brain in sync. Two STM32 boards talking in real-time, analog sensing on one end, digital response on the other, no nonsense in between. All signal, no noise.

I designed this to push the boundary of low-level communication, hardware/software orchestration, and interrupt-driven control. And all software was written in bare-metal C for full control over the hardware.

---

## What This Rig Does

### STM32F407G Discovery – The Talker  
- Reads analog input from a **potentiometer**, converts it with **ADC**, and fires off the data every **100 ms**.  
- Configured using **HAL drivers** via **STM32CubeMX**.  
- CAN payloads are slim—just enough data to get the job done fast.

### STM32F446RE Nucleo – The Listener  
- Listens in on that CAN line using **interrupts** like a spy in a thriller.  
- Filters packets, grabs data by **message ID**, and toggles an **LED** if the analog value breaks the limit.  
- All business, no delays.

---

## System Specs (aka the Juicy Tech Details)

| Feature           | Details                                      |
|------------------|----------------------------------------------|
| Protocol          | CAN (Controller Area Network)               |
| Baud Rate         | 500 kbps                                    |
| Transceivers      | MCP2551 / SN65HVD230                        |
| ADC               | 8-bit, DMA-enabled (F407G side)             |
| Interrupts        | CAN RX (F446RE side)                        |
| Voltage Source    | Potentiometer (0–3.3V)                      |
| Output Trigger    | Onboard LED                                 |
| Message Format    | Standard ID, 1-byte payload                 |

---

## Toolchain Arsenal

- **STM32CubeMX** – Peripheral config & code auto-gen  
- **STM32CubeIDE** – Compile, flash, debug like a pro  
- **HAL Libraries** – Abstraction without sacrificing control  
- **ST-Link Utility** – For direct firmware brain uploads  

---

## Wiring Like a Genius

1. Connect **CANH** and **CANL** via your transceivers (MCP2551 or SN65HVD230)  
2. Slap on those **120 Ω resistors** at each end—termination matters  
3. Flash `CAN_Sender` to **STM32F407G**  
4. Flash `CAN_Receiver` to **STM32F446RE**  
5. Power up both boards. Rotate the pot. Watch the LED light up when you push it past the threshold.  
6. Sit back and appreciate the elegance of interrupt-driven embedded design  

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

## Shoutouts (No AI assistants were harmed)

- [STMicroelectronics – STM32 MCUs](https://www.st.com/en/microcontrollers-microprocessors/stm32-32-bit-arm-cortex-mcus.html)  
- [MCP2551 Datasheet – Microchip](https://www.microchip.com/en-us/product/MCP2551)  
- [SN65HVD230 Datasheet – Texas Instruments](https://www.ti.com/product/SN65HVD230)  

---

## Licensing

All design, code, and testing were done by **Abhijit Rai**.  
This project is a solo mission in embedded exploration.  

Fork it, learn from it, improve it—but give credit where it’s due.  
And no, I don’t do magic. I do engineering.

---

