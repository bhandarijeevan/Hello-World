//* write a simple program using Arithmetic operator *//
//* write a simple program using Arithmetic operator *//
//* write a simple program using Arithmetic operator *//

#include<stdio.h>
#include<conio.h>
#include<math.h>

// tell the compiler the start the program
int main()
{
    // declaration the necessary variables
    int num1, num2;
    int sum, sub, mul, div, mod;

    printf("\n Enter the first numbers:");
    scanf("%d",&num1);

    printf("\n Enter the second numbers:");
    scanf("%d",&num2);
    
    //to show the num 1 and num 2 values
    printf("The value of num1 is %d",num1);
    printf("The value of num2 is %d",num2);
    // calculate sum
    sum=num1+num2;
    printf("\n The sum is %d", sum);

   // calculate subtraction
    sub=num1-num2;
    printf("\n The subtraction is %d", sub);

    // calculate multiplication
    mul=num1*num2;
    printf("\n The multiplication is %d", mul);

    // calculate division
    div=num1/num2;
    printf("\n The division is %d",div);

    // calculate Reminder/ modulo
    mod=num1%num2;
    printf("\n The Reminder divided by num2 is %d", mod);


    getch();
    return 0;

}
