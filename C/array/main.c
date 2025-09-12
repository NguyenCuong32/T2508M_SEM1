//  Viet chuong trinh hien thi ra mang mang so nguyen
#include <stdio.h>
void showArray()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; i++)
    {
        printf("Vi tri array [%d] gia tri la : %d \n", i, array[i]);
    }
}
void inputArray()
{
    int array[10];
    printf("Nhap gia tri cho mang \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        printf("Phan tu thu {%d} = %d \n", i, array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Gia tri cua array[%d] la %d \n", i, array[i]);
    }
}
void inputAdv()
{
    int n;
    printf("Nhap vao so phan tu cua mang: \n");
    scanf("%d", &n);
    int array[n] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        printf("Phan tu thu {%d} = %d \n", i, array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Gia tri cua array[%d] la %d \n", i, array[i]);
    }
}
void charArray(){
    printf("Nhap vao mang ky tu \n");
    char name [10];
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c",&name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%c",name[i]);
    }
    
    
}
int main()
{

    while (1)
    {
        printf("\n1.Goi ham showArray \n2.Goi ham inputArray\n3.Goi ham inputAdv\n4.Goi charArray\n");
        int choice;
        printf("Nhap vao lua chon cua ban.\n");
        scanf("%d", &choice);
      
        switch (choice)
        {
        case 1:
            showArray();
            break;
        case 2:
            inputArray();
            break;
        case 3:
            inputAdv();
            break;
        case 4:
            charArray();
            break;
        default:
            showArray();
            break;
        }
    }
    return 0;
}