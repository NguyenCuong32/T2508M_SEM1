#include<stdio.h>
int findMax(int n, int array[n]){
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (max<array[i])
        {
           max = array[i];
        }
        
    }
    return max;
}

int findMin(int n, int array[n]){
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (min>array[i])
        {
           min = array[i];
        }
        
    }
    return min;
}

void findMinMax(int n,int array[],int *min, int *max){
    *min = *max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (*min>array[i])
        {
           *min = array[i];
        }
        if (*max<array[i])
        {
            *max = array[i];
        }
    }
    
}

int main()
{
    int array[6] = {1,5,6,3,7,999};
    // int max = findMax(6,array);
    // printf("Gia tri lon nhat cua mang %d\n",max);
    // int min = findMin(6,array);
    // printf("Gia tri nho nhat cua mang %d\n",min);

    int min, max =0;
    findMinMax(6,array,&min,&max);
    printf("Gia tri nho nhat cua mang %d, gia tri lon nhat cua mang %d",min, max);
    return 0;
}