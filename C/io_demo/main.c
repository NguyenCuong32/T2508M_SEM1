#include<stdio.h>
int main(){
    int a = 10;
    float b= 24.5556;
    char x = 'A';
    printf("Enter an interger \n");
    scanf("%d",&a);
    printf("Enter a float \n");
    scanf("%f",&b);
    printf("Enter a character\n");
    scanf(" %c",&x);

    printf("Interger: %d\n",a);
    printf("Float: %f\n",b);
    printf("Character %c\n",x);


    printf("Interger %d Float %f Character %c \n",a,b,x);
    return 0;
}