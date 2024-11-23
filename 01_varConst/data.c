#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void calculateTrigFunctions(double angle) {
    // Convert angle from degrees to radians
    double radians = angle * (PI / 180.0);

    // Calculate sine, cosine, and tangent
    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);

    // Print the results
    printf("Angle: %.2f degrees\n", angle);
    printf("Sine: %.4f\n", sine);
    printf("Cosine: %.4f\n", cosine);
    
    // Check for tangent undefined cases (cosine is zero)
    if (cosine == 0) {
        printf("Tangent: undefined (division by zero)\n");
    } else {
        printf("Tangent: %.4f\n", tangent);
    }
}

int main() {
    double angle;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Call function to compute trigonometric values
    calculateTrigFunctions(angle);

    return 0;
}

