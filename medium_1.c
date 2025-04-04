#include <stdio.h>
#include <math.h>

int main()
 {
    float x, y;
    printf("Enter the x coordinate detected by the camera: ");
    scanf("%f",&x);
    
    printf("Enter the y coordinate detected by the camera: ");
    scanf("%f",&y);

    float original_z = -60.0;                                                   // Original z-coordinate is -60 cm
    float adjusted_z = original_z - 5.0;                                        // Adjusted z-coordinate to account for the 5 cm offset

    float original_distance = sqrt(x*x + y*y + original_z*original_z);          // Calculate original distance
    float adjusted_distance = sqrt(x*x + y*y + adjusted_z*adjusted_z);          // Calculate adjusted distance
    
    printf("Adjusted Position: (%.2f, %.2f, %.2f)\n", x, y, adjusted_z);        // Print the adjusted position
    printf("Original Distance: %.2f cm\n", original_distance);                  // Print the original distance
    printf("Adjusted Distance: %.2f cm\n", adjusted_distance);                  // Print the adjusted distance

    return 0;
}

