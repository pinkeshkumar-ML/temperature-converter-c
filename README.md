# Temperature Converter in C

A beginner-friendly command-line program that converts temperatures between Celsius, Fahrenheit, and Kelvin.

## Features

- Celsius to Fahrenheit and Kelvin
- Fahrenheit to Celsius and Kelvin
- Kelvin to Celsius and Fahrenheit
- Input validation for menu choices and numeric temperatures
- Checks for temperatures below absolute zero
- Results displayed to two decimal places

## Conversion formulas

- Fahrenheit = (Celsius × 9/5) + 32
- Kelvin = Celsius + 273.15
- Celsius = (Fahrenheit − 32) × 5/9
- Celsius = Kelvin − 273.15

## How to compile and run

You need a C compiler such as GCC.

### Linux / macOS

```bash
gcc temperature_converter.c -o temperature_converter
./temperature_converter
```

### Windows (MinGW GCC)

```bash
gcc temperature_converter.c -o temperature_converter.exe
temperature_converter.exe
```

## Example

```text
====================================
       TEMPERATURE CONVERTER
====================================
1. Celsius to Fahrenheit and Kelvin
2. Fahrenheit to Celsius and Kelvin
3. Kelvin to Celsius and Fahrenheit
Choose an option (1-3): 1
Enter the temperature: 25

25.00 Celsius = 77.00 Fahrenheit
25.00 Celsius = 298.15 Kelvin
```

## Project structure

```text
temperature-converter-c/
├── temperature_converter.c
├── README.md
└── .gitignore
```

## Notes

- Kelvin values cannot be negative.
- Celsius values below -273.15 °C and Fahrenheit values below -459.67 °F are rejected.
- This is a console-based C project created as an internship task.
