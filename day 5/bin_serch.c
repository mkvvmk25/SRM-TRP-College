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

void merge(int *arr,int n,int low,int high,int mid)
{
    int leftsize = mid - low + 1;
    int rightsize = high - mid;
    int leftArr[leftsize];
    int rightArr[rightsize];

    int ind = low; 
    for(int j = 0; j < leftsize; j++)
    {
        leftArr[j] = arr[ind];
        ind++;
    }
    for(int j = 0; j < rightsize; j++)
    {
        rightArr[j] = arr[ind];
        ind++;
    }

    int ith = 0;
    int jth = 0; 
    int kth = low; 

    while( ith < leftsize && 
                jth < rightsize )
    {
        if(leftArr[ith] < rightArr[jth])
        {
            arr[kth] = leftArr[ith];
            kth++;
            ith++;
        }
        else 
        {
            arr[kth] = rightArr[jth];
            kth++;
            jth++;
        }
    }


    // pending elems 
    while(ith < leftsize4)
    {
        arr[kth] = leftArr[ith];
        kth++;
        ith++;
    }
    while(jth < rightsize)
    {
        arr[kth] = rightArr[jth];
        kth++;
        jth++;
    }
}
void mergeSort(int *arr, int n, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2; // 3
        mergeSort(arr, n, low, mid ); 
        mergeSort(arr, n, mid+1, high); 
        merge(arr, n, low, high, mid); 
    }
    // return; 
}

int main()
{
    int arr[5] = {5,6,7,8,4,3,2,1};
    int n = 8; 
    int low = 0;
    int high = n - 1; 
    mergeSort(arr, n, low, high);
}
