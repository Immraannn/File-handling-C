#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    char ch;
    printf("Enter the ch:");
    scanf("%c",&ch);
    int b;
    printf("Enter value of b:");
    scanf("%d",&b);
    // if(ch=='+')
    // printf("%d",a+b);
    // if(ch=='-')
    // printf("%d",a-b);
    // if(ch=='*')
    // printf("%d",a*b);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a+b);
        break;
        case '*':
        printf("%d",a+b);
        break;
        case '/':
        printf("%f",(float)a+b);
        break;
        default:
        printf("Invalid operator");
    }
    return 0;
}