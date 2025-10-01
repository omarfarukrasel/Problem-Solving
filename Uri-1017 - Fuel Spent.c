#include <stdio.h>

int main() {
    int time, speed;
    double distance, liters;

    // Read input values
    scanf("%d %d", &time, &speed);

    // Calculate distance
    distance = time * speed;

    // Fuel needed
    liters = distance / 12.0;

    // Print result with 3 decimal places
    printf("%.3lf\n", liters);

    return 0;
}
