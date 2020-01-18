#include <stdio.h>
#include <conio.h>
 
int main(){
    int number, digitSum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    while(number != 0)
    {
        digitSum += number % 10;
        number = number/10;
    }    
    printf("Sum of digits : %d\n", digitSum);
    getch();
    return 0;
}