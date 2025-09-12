#include <stdio.h>
struct Student
{
    char name[30];
    int age;
    float score;
    float height;
};

int main()
{
    struct Student std;
    printf("Nhap thong tin sv \n");
    scanf("%s", std.name);
    scanf("%d", &std.age);
    scanf("%f", &std.score);
    scanf("%f", &std.height);
    printf("Name: %s \tAge: %d\t Score: %f\t Hight: %f",std.name,std.age,std.score,std.height);
}