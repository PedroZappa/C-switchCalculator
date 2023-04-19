#include <stdio.h>

int main() {
  char op; // Operation
  double first, second; // Operands 

  // Operation & Operand Input
  printf("Enter operator ( +, -, /, * ): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
  
  // Operation Switch
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
      break;
    // Operator doesn't match any case
    default:
      printf("Error! Invalid operator.\n");
      break;
  }

  return 0;
}