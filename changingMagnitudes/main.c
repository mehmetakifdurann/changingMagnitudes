// This program will take 2 values, then it will change their magnitudes.
// Created by Mehmet Akif Duran

#include <stdio.h>

void changingMagnitudes(int number1, int number2){
    
    // Variable Decleration(s).
    int z;
    
    // Executable Statement(s).
            
        // Changing operation:
    
        z = number1;
        number1 = number2;
        number2 = z;
    
    // Printing new values of first and second number:
    
    printf("Your new x value is :  %d\n", number1);
    printf("Your new y value is :  %d\n",number2);

}


int main(void){
    
    // Variable Decleration(s).
    
    int x,y;
    
    //Executable Statement(s).
    
    // Getting the x and y value.
    printf("Enter the first value (for x) :  \n");
        scanf("%d", &x);
    
    printf("Enter the second value (for y) : \n");
        scanf("%d", &y);
    
    // Printing the first values of x and y :
    printf("First 'x' value is : %d, and the 'y' value is : %d\n", x,y);
    
    
    // Calling the function for the change.
    changingMagnitudes(x,y);
    
    
    
    return 0;
}
