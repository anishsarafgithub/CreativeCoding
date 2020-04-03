#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompting the user for height of the pyramid
    int height;  
    
    do
    {
        height=get_int("Height: ");

    }while(height<1 || height>8);    
    
    //Nested loops to print the pyramid
     for(int i=0;i<height;i++)
        {
            for(int j=height-1;j>=0;j--)
            {
                if(j>i)
                printf(" ");
                else
                printf("#");
            }
            //Changing to a new line
            printf("\n");                    

        }
    
}


        
    



