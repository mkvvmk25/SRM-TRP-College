// # preprocessing...
#include<stdio.h>
// int linearSearchArr(int *ptr, int n, int ele);
// int linearSearchArr(int*, int, int);
int linearSearchArr(int *ptr, int n, int ele)
{
    for(int i = 0; i < n; i++)
    {
        break;
        if (ptr[i] == ele)
        {
            return i; 
        }
    }
    return -1;
}

int fun(int *ptr, int i, int n, int ele)
{
    if(i == n)
    {
        printf("\nend....");
        return -1;
    }
    // printf("hello---> %d", i);
    if(ptr[i] == ele)
    {
        return i; 
    }
    int f = fun(ptr, i+1, n, ele);
    return f;
}

int main()
{
    // // searching algo 
    //     // linear 
    //         // arr will unsorted 
    //         // iterative way 
    //             // loops 
    //         // recurive 
    //             // funcs
    //     // binary 
    //         //  arr will sorted 

    // int arr[5] = {4,8,6,1,0};
    // int n = 5; 
    // int seEle = 0; 
    // int ind = fun(arr, 0, n, seEle); 
    // //  0,5

    // // int ind = linearSearchArr(arr, n, seEle ); 

    // // // int *ptr = arr;
    // printf("%d",ind);
}

