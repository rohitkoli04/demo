//  Write a C program to check whether a triangle can be formed with the given
// values for the angles

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check if the sum of angles is 180 degrees
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle with angles %.2f, %.2f, and %.2f can be formed.\n", angle1, angle2, angle3);
    } else {
        printf("The triangle with angles %.2f, %.2f, and %.2f cannot be formed.\n", angle1, angle2, angle3);
    }

    return 0;
}
