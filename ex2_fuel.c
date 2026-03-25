/* Name:ssenyange simon */
/* Student Number: 25/U/BIE/11579/PE */
#include <stdio.h>
int main() 
{
    float distance;
    float fuelused;
    float efficiency;
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter fuelused (litres): ");
    scanf("%f", &fuelused);
    if (fuelused != 0) {
        efficiency = distance / fuelused;
        printf("\nFuel efficiency: %.2f km/l\n", efficiency);
    } else {
        printf("\nError: Fuel used cannot be zero.\n");
    }

    return 0;
}


