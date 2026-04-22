# Embedded Systems Learning Path

This repository is a structured learning path for embedded systems development, with hands-on practice across major beginner-friendly and industry-relevant platforms.

## Learning Roadmap

1. **01-basics**
   - C/C++ fundamentals for embedded
   - Digital I/O basics, timing, interrupts
   - Build and flashing workflow basics
2. **02-stm32-projects**
   - STM32 peripheral drivers and HAL/LL practice
   - UART, SPI, I2C, ADC, PWM projects
   - RTOS-ready project organization
3. **03-esp32-projects**
   - ESP-IDF/Arduino-ESP32 setup
   - Wi-Fi/BLE basics, sensor integration
   - IoT-style communication demos
4. **04-arduino-projects**
   - Rapid prototyping exercises
   - Sensor and actuator mini-projects
   - Libraries, debugging, and optimization basics
5. **05-notes**
   - Learning notes, debugging records, key concepts
6. **docs**
   - Reference docs, diagrams, setup guides

## Hardware Platforms

- **STM32** (core focus for low-level embedded development)
- **ESP32** (wireless + IoT workflows)
- **Arduino** (fast prototyping and fundamentals)

## Repository Structure

```text
/01-basics
/02-stm32-projects
/03-esp32-projects
/04-arduino-projects
/05-notes
/docs
```

## How to Use This Repository

1. Start from `01-basics` and move in order.
2. In each folder, create project-specific subfolders as you progress.
3. Update each folder's `README.md` to log:
   - goals
   - hardware used
   - progress/status
   - lessons learned
4. Keep reusable references in `05-notes` and `docs`.

## Suggested Progress Workflow

- Pick one topic/project at a time.
- Implement and test on real hardware.
- Record failures, fixes, and final takeaways.
- Commit frequently with clear messages.
