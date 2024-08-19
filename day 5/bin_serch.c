#include<stdio.h>
// binary search 
    // iterative
    // recursive
int binarySearch(int *ptr, int n, int ele)
{
    int low = 0; // 0
    int high = n - 1; // 7

    while(low <= high)
    {
        int mid = (low + high) / 2; // 2
        if(ptr[mid] == ele)
        {
            return mid;
        }
        else if(ele < ptr[mid] )
        {
            // low remains same 
            high = mid - 1; // 2
        }
        else 
        {
            // high remains same 
            low = mid + 1; 
        }
    }

    return -1;
}

// log base 2 of 8 -> 3

int main()
{

    int arr[8]= {5,10,15,20,25,30,35,40};
    int n = 8; 
    int ele = 100; 

    int ind  = binarySearch(arr, n, ele); 
    printf("%d",ind); 
}