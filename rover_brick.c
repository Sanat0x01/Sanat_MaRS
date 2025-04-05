#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main() 
{
    FILE *file;
    char filename[100];
    int obstacles[MAX_SIZE][4];
    int n = 0; // Number of obstacles
    int arena_size = 0;
    int arena[MAX_SIZE][MAX_SIZE] = {0};

    printf("Enter the obstacle file name: ");  // Get filename from user
    scanf("%s", filename);

    file = fopen(filename, "r");      // Open the file
    
}

    while (fscanf(file, "%d %d %d %d",&obstacles[n][0], &obstacles[n][1],&obstacles[n][2], &obstacles[n][3]) == 4)     // Read obstacle data and find maximum distance to determine arena size
    {
        for (int i = 0; i < 4; i++)   // Find the maximum distance in any direction
        {
            if (obstacles[n][i] > arena_size) 
            {
                arena_size = obstacles[n][i];
            }
        }
        n++;
    }
    fclose(file);

    arena_size = arena_size * 2 + 1;      // Arena size is maximum distance * 2 + 1 

    for (int i = 0; i < arena_size; i++)     // Initialize arena with all safe positions (1)
    {
        for (int j = 0; j < arena_size; j++)
         {
            arena[i][j] = 1;
         }
    }

    int center = arena_size / 2;  	 // Mark obstacle positions (0)
   					 // Center is at (arena_size / 2, arena_size / 2)			
    for (int k = 0; k < n; k++) {
        int north = obstacles[k][0];
        int east = obstacles[k][1];
        int south = obstacles[k][2];
        int west = obstacles[k][3];

        // Calculate positions relative to center
        int row = center - north + south;
        int col = center - west + east;

        // Mark as obstacle if within bounds
        if (row >= 0 && row < arena_size && col >= 0 && col < arena_size) {
            arena[row][col] = 0;
        }
    }

    // Print the arena
    printf("\nArena Map (%dx%d):\n", arena_size, arena_size);
    printf("(X = obstacle, . = safe position)\n\n");
    for (int i = 0; i < arena_size; i++)
     {
        for (int j = 0; j < arena_size; j++) 
        {
            if (arena[i][j] == 0)
            {
               printf("X ");
            }
	    else
	    {
               printf(". ");
            }

        }
        printf("\n");
    }

    return 0;
}

