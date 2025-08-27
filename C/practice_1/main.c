// Nhập và o tuổ i củ a họ c sinh, in ra “Đủ tuổi và o lớ p 10” nếu tuổ i từ 15 trở lên.

// Các việc cần làm:
// 1. Nhập vào tuổi của học sinh , sử dụng hàm scanf và khai báo 1 biến age
// 2. Sử dụng lệnh điều kiện if
// 3. In ra kết quả

#include <stdio.h>
int main()
{
    int age;
    printf("Enter student's age: \n");
    scanf("%d", &age);
    if (age > 0 && age < 130)
    {
        if (age >= 15)
        {
            printf("Du tuoi vao lop 10 \n");
        }
        else
        {
            printf("Chua du tuoi vao hoc");
        }
    }
    else
    {
        printf("Tuoi khong hop le");
    }
    return 0;
}
