/*  CS50 Problem set 1: Mario
    Adam Intrator
    9/30/15
    Creates an inverse "Mario" pyramid of specified height
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
   
   // Makes sure the input is between 0 and 23 inclusive
    do
    {
        printf("Please enter a value between 0 and 23 inclusive:\n");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
  
  
    // Prints out the pyramid
   
    for (int row = 0; row < height; row++)
    {  
        for (int spaces = height - row - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }
        
        for (int hashes = 0; hashes < (row + 2); hashes++)
        {
            printf("#");
        }
           
        printf("\n");       
    }
}
