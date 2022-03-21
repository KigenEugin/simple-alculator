#include <stdio.h>
#include <stdlib.h>

int main()
{
/*variable declaration*/
int firstNumber,secondNumber;
int sum,product,difference,modulo;
float quotient;
printf("simple calculator!\n");

/*input*/
printf("Enter First Number");
scanf("%d", &firstNumber);
printf("Enter Second Number");
scanf("%d", &secondNumber);

/*computation*/
sum = firstNumber + secondNumber;
difference = firstNumber - secondNumber;
product = firstNumber * secondNumber;
quotient = (float)firstNumber / secondNumber;
modulo = firstNumber % secondNumber;

/*output*/
printf("%d + %d = %d",sum);
printf("%d - %d = %d",difference);
printf("%d * %d = %d",product);
printf("%d / %d = %d",quotient);
printf("%d % %d = %d",modulo);

return 0;

}



