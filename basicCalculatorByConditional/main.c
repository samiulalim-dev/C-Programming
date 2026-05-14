#include <stdio.h>

int main()
{
    float a,b;
    char op;
    printf("enter number a:");
    scanf("%f",&a);
    printf("Enter operator=");
    scanf(" %c",&op);
    printf("enter number b:");
    scanf("%f",&b);

    if(op == '+'){
        printf("%.2f",a+b);
    }
    else if(op == '-'){
        printf("%.2f",a-b);
    }
    else if(op== '*'){
        printf("%.2f",a*b);
    }
    else if(op== '/'){
        printf("%.2f",a/b);
    }
    else{
        printf("enter valid operator");
    }
 return 0;
}
