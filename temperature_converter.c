#include <stdio.h>

int main(void)
{
    int choice;
    double temperature, celsius, fahrenheit, kelvin;

    printf("====================================\n");
    printf("       TEMPERATURE CONVERTER\n");
    printf("====================================\n");
    printf("1. Celsius to Fahrenheit and Kelvin\n");
    printf("2. Fahrenheit to Celsius and Kelvin\n");
    printf("3. Kelvin to Celsius and Fahrenheit\n");
    printf("Choose an option (1-3): ");

    if (scanf("%d", &choice) != 1) {
        printf("Error: Please enter a valid menu option.\n");
        return 1;
    }

    printf("Enter the temperature: ");
    if (scanf("%lf", &temperature) != 1) {
        printf("Error: Please enter a valid numeric temperature.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            if (temperature < -273.15) {
                printf("Error: Temperature cannot be below absolute zero.\n");
                return 1;
            }
            celsius = temperature;
            fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            kelvin = celsius + 273.15;
            printf("\n%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
            break;

        case 2:
            if (temperature < -459.67) {
                printf("Error: Temperature cannot be below absolute zero.\n");
                return 1;
            }
            fahrenheit = temperature;
            celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            kelvin = celsius + 273.15;
            printf("\n%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
            break;

        case 3:
            if (temperature < 0.0) {
                printf("Error: Kelvin temperature cannot be negative.\n");
                return 1;
            }
            kelvin = temperature;
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            printf("\n%.2f Kelvin = %.2f Celsius\n", kelvin, celsius);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
            break;

        default:
            printf("Error: Invalid option. Please choose 1, 2, or 3.\n");
            return 1;
    }

    return 0;
}
