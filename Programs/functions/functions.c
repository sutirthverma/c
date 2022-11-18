#include <stdio.h>
#include<conio.h>

int add(int a, int b);
int subt(int a, int b);
int multi(int a, int b);
int divi(int a, int b);

int main() {
    int x,y,sum,sub,mul,div;
    printf("Enter any two values for calculation:");
    scanf("%d %d",x,y);
    
    sum = add(x,y);
    sub = subt(x,y);
    mul = multi(x,y);
    div = divi(x,y);
    
    printf("Addition:%d",sum);
    printf("Subtraction:%d",sub);
    printf("Multiplication:%d",mul);
    printf("Division:%d",div);
    return 0;
}

int add(int a, int b){
    return (a + b);
};

int subt(int a, int b){
    return (a - b);
};

int multi(int a, int b){
    return (a * b);
};

int divi(int a, int b){
    return (a / b);
};