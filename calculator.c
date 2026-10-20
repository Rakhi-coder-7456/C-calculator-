#include <stdio.h>
int main() {
    char op;
    float n1, n2;
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    switch(op){
        case '+': 
          printf("Result = %.2f", n1+n2); 
          break;
        case '-':
          printf("Result = %.2f", n1-n2);
          break;
        case '*': 
          printf("Result = %.2f", n1*n2); 
          break;
        case '/':
          if(n2!=0) 
          printf("Result = %.2f", n1/n2); 
          else
            printf("Cannot divide by zero");
          break;
        default:
          printf("Invalid operator");
    }
    return 0;
}
