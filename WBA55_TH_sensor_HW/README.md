# WBA55_TH_sensor – Hardware (KiCad)

This folder contains the **hardware design** for the WBA55_TH_sensor board:

- 4‑layer PCB
- Tuned 2.4 GHz antenna for STM32WBA55 wireless operation
- Designed in **KiCad 9.0.0**
- Based on **STM32WBA55** MCU and **SHT40AD1B** temperature/humidity sensor
- Powered from **CR2032** coin cell or external supply (see schematic)

The design can be used as a reference for integrating STM32WBA55 in low‑power BLE sensor applications.

## Contents

- KiCad project:
  - `*.kicad_pro`
  - `*.kicad_sch` (schematic)
  - `*.kicad_pcb` (PCB layout)
- Generated documentation:
  - Schematic and layout PDFs
  - Gerber files
  - BOM and component placement files

## How to use

1. Open the project in **KiCad 9.0.0**.
2. Review the schematic and 4‑layer stack‑up, including the tuned RF antenna section.
3. Adjust design parameters (components, layout, stack‑up) if needed for your application or PCB manufacturer.
4. Generate manufacturing outputs (Gerbers, drill, pick‑and‑place) from KiCad for board fabrication.

## Licensing

The hardware design files are provided under the terms described in the repository `LICENSE` file.

Third‑party components and trademarks (including but not limited to STM32WBA55 and SHT40AD1B) remain the property of their respective owners.