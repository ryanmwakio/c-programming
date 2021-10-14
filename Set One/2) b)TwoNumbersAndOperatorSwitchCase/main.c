#include <stdio.h>
#include <stdlib.h>

int main()
{
  char enteredOperator;
  double firstNumber, secondNumber;

  printf("Enter an operator: ");
  scanf("%c", &enteredOperator);

  printf("Enter two numbers: ");
  scanf("%lf %lf", &firstNumber, &secondNumber);


  switch (enteredOperator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
      break;
    default:
      printf("Invalid operator");
  }

  return 0;
}
