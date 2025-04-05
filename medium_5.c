#include <stdio.h>
#include <math.h>

double toRadians(double degrees) // Convert degrees to radians
 {
    return degrees * M_PI / 180.0;
 }

int main() 
 {
    double roll, pitch, yaw;
    double cy, sy, cp, sp, cr, sr;
    double w, x, y, z;

    printf("Enter Roll (X rotation in degrees): ");      // Get input from user
    scanf("%lf", &roll);

    printf("Enter Pitch (Y rotation in degrees): ");   // Get input from user
    scanf("%lf", &pitch);

    printf("Enter Yaw (Z rotation in degrees): ");    // Get input from user
    scanf("%lf", &yaw);

    roll = toRadians(roll);       // Convert to radians
    pitch = toRadians(pitch);
    yaw = toRadians(yaw);

    cy = cos(yaw * 0.5);      // Calculate trigonometric terms
    sy = sin(yaw * 0.5);
    cp = cos(pitch * 0.5);
    sp = sin(pitch * 0.5);
    cr = cos(roll * 0.5);
    sr = sin(roll * 0.5);

    w = cr * cp * cy + sr * sp * sy;      // Quaternion formula
    x = sr * cp * cy - cr * sp * sy;
    y = cr * sp * cy + sr * cp * sy;
    z = cr * cp * sy - sr * sp * cy;

    printf("\nMartian Rotation System (Quaternion):\n");      // Output result
    printf("w = %.6f\n", w);
    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.6f\n", z);

    return 0;
}

