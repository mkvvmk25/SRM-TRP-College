#include<stdio.h>

void constantTime()
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
    for(int i = 0; i < 10000; i++)
    {
        printf("hello"); 
    }
}

int linearSearchArr(int *ptr, int n, int ele) // LTC 
{
    for(int i = 0; i < n; i++) // n + 1
    {
        if (ptr[i] == ele) // 1
        {
            return i;   // 1
        }
    }
    int a =5 + 10; // 1
    return -1; // 1

    //  O((n)( 1) + 2)
    //  O(n + 2)
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 50000; 
    int ele = 50; 
    linearSearchArr(arr, n, ele); 
}