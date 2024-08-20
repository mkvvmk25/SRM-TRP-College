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
void nsq(int n)
{

}

void rec(int n)
{
    if(n == 0){
        return; 
    }
    printf("helo-->");
    rec(n - 1);
    printf("world-->");
    return; 
}

void bubbleSort(int *arr,int n){
    for(int i = 0; i < n; i++){
        int j = i+1;
        while(j < n){
            if(arr[i] > arr[j]){
                int t = arr[i]; 
                arr[i] = arr[j];
                arr[j] = t; 
            }
            j++;
        }
    }
}
// n * log(n)  b

void timeNlogN(int n) // 8 
{
    for(int i = 1; i <= n; i++) // n
    {
        for(int j = 1; j < n; j = j * 2) // log n 
        {
            printf("hello"); // 1 2 3
        }
    }
    // n * log(n)
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5; 
    bubbleSort(arr, n);
}

// https://bit.ly/CC-200824 