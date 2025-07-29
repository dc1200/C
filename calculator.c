#include<stdio.h>
#include<math.h>

int main()
{
  float n1, n2;
  char operator;

  printf("Enter an operator (+, -, /, *, ^): ");
  scanf(" %c", &operator);  // Add a space before %c to consume any leftover whitespace

  printf("Enter two numbers: ");
  scanf("%f %f", &n1, &n2);

  switch(operator)
  {
    case '+' : printf("%.3f + %.3f = %.3f", n1, n2, n1 + n2); break;
    case '-' : printf("%.3f - %.3f = %.3f", n1, n2, n1 - n2); break;
    case '/' : 
      if(n2 != 0)
        printf("%.3f / %.3f = %.3f", n1, n2, n1 / n2);
      else
        printf("Error! Division by zero");
      break;
    case '*' : printf("%.3f * %.3f = %.3f", n1, n2, n1 * n2); break;
    case '^' : printf("%.3f ^ %.3f = %.3f", n1, n2, pow(n1, n2)); break;
    default  : printf("Error! Operator is not supported");
  }

  return 0;
}
