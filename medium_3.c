#include <stdio.h>
int main() 
{
    char input[100];
    char output[100];
    int i, shift; 
    printf("Enter encrypted message: ");
    scanf("%s", input);  
    for (i = 0; input[i] != '\0'; i++) // Process each character
    {  
        char current = input[i];          // Convert to uppercase
        if (current >= 'a' && current <= 'z') 
        {
            current = current - 'a' + 'A';
        }
        shift = i + 1;                    // Calculate shift (position + 1)
        char decoded = current - 'A' - shift;           // Reverse the shift with wrap-around

        if (decoded < 0) 
        {
            decoded += 26;
        }
        output[i] = decoded % 26 + 'A';
    }
    output[i] = '\0'; // End the string
    printf("Decoded message: %s\n", output);
    return 0;
}

