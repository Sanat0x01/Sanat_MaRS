#include <stdio.h>
#include <string.h>  

int main() 
{
    int n;
    char morse[500][10]; // Array to store morse code 
    printf("Enter the number of letters: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)      // Input Morse code
    {
        printf("Enter the letter %d in Morse code: ", i + 1);
        scanf("%s", morse[i]);  
    }
    printf("\nThe decoded letters are: ");       // Decode Morse code to plain text
    for (int i = 0; i < n; i++) {
        if (strcmp(morse[i], ".-") == 0) 
        {
            printf("A");
        } 
        else if (strcmp(morse[i], "-...") == 0)
        {
            printf("B");
        } 
        else if (strcmp(morse[i], "-.-.") == 0)
        {
            printf("C");
        } 
        else if (strcmp(morse[i], "-..") == 0) 
        {
            printf("D");
        } 
        else if (strcmp(morse[i], ".") == 0)
        {
            printf("E");
        } 
        else if (strcmp(morse[i], "..-.") == 0) 
        {
            printf("F");
        }
        else if (strcmp(morse[i], "--.") == 0) 
        {
            printf("G");
        } 
        else if (strcmp(morse[i], "....") == 0) 
        {
            printf("H");
        } 
        else if (strcmp(morse[i], "..") == 0) 
        {
            printf("I");
        } 
        else if (strcmp(morse[i], ".---") == 0) 
        {
            printf("J");
        } 
        else if (strcmp(morse[i], "-.-") == 0) 
        {
            printf("K");
        } 
        else if (strcmp(morse[i], ".-..") == 0) 
        {
            printf("L");
        } 
        else if (strcmp(morse[i], "--") == 0) 
        {
            printf("M");
        } 
        else if (strcmp(morse[i], "-.") == 0) 
        {
            printf("N");
        } 
        else if (strcmp(morse[i], "---") == 0) 
        {
            printf("O");
        } 
        else if (strcmp(morse[i], ".--.") == 0) 
        {
            printf("P");
        } 
        else if (strcmp(morse[i], "--.-") == 0) 
        {
            printf("Q");
        } 
        else if (strcmp(morse[i], ".-.") == 0) 
        {
            printf("R");
        } 
        else if (strcmp(morse[i], "...") == 0) 
        {
            printf("S");
        } 
        else if (strcmp(morse[i], "-") == 0) 
        {
            printf("T");
        } 
        else if (strcmp(morse[i], "..-") == 0)
        {
            printf("U");
        } 
        else if (strcmp(morse[i], "...-") == 0) 
        {
            printf("V");
        } 
        else if (strcmp(morse[i], ".--") == 0) 
        {
            printf("W");
        } 
        else if (strcmp(morse[i], "-..-") == 0) 
        {
            printf("X");
        } 
        else if (strcmp(morse[i], "-.--") == 0) 
        {
            printf("Y");
        } 
        else if (strcmp(morse[i], "--..") == 0) 
        {
            printf("Z");
        } 
        else if (strcmp(morse[i], "-----") == 0) 
        {
            printf("0");
        } 
        else if (strcmp(morse[i], ".----") == 0) 
        {
            printf("1");
        } 
        else if (strcmp(morse[i], "..---") == 0) 
        {
            printf("2");
        } 
        else if (strcmp(morse[i], "...--") == 0) 
        {
            printf("3");
        } 
        else if (strcmp(morse[i], "....-") == 0) 
        {
            printf("4");
        } 
        else if (strcmp(morse[i], ".....") == 0) 
        {
            printf("5");
        } 
        else if (strcmp(morse[i], "-....") == 0) 
        {
            printf("6");
        } 
        else if (strcmp(morse[i], "--...") == 0) 
        {
            printf("7");
        } 
        else if (strcmp(morse[i], "---..") == 0) 
        {
            printf("8");
        } 
        else if (strcmp(morse[i], "----.") == 0) 
        {
            printf("9");
        } 
        else 
        {
            printf("?");  // If not a valid Morse code
        }
    }

    
    return 0;
}

