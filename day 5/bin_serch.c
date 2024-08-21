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
    while(ith < leftsize)
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

void swap(int *a, int *b )
{
    int t = *a; 
    *a = *b; 
    *b = t;
}


int partition(int *arr, int n, int low, int high)
{
    int pe = arr[low]; 
    int start = low; 
    int end = high; 
    while(start < end)
    {
        while(arr[start] <= pe)
        {
            start++;
        }
        while(arr[end] > pe)
        {
            end--; 
        }
        if(start < end)
        {
            swap(&arr[start], &arr[end]); 
        }
    }

    swap(&arr[end], &arr[low]); 
    return end; 
}


void quickSort(int *arr, int n, int low, int high)
{
    if(low < high)
    {
        int mid = partition(arr, n, low,high); // 4 
        quickSort(arr, n, low, mid-1 ); 
        quickSort(arr, n, mid+1, high);
    }
}

int minswapsfor012(int *arr, int n)
{
    int scnt = 0; 
    int t = 0 , s = 0, e = n - 1; 
    while(t <= e)
    {
        if(t == 1)
        {
            t++;
        }
        else if(t== 0)
        {
            swap(&arr[s], &arr[e]);
            scnt++;
            s++;
            t++;
        }
        
        else if(t == 2)
        {
            swap(&arr[t] , &arr[e]);
            scnt++;
            e--;
        } 
    }
    return scnt; 
}

int main()
{
    int arr[8] = {2,1,0,1,0,2,1,1,0};

/*  0 1 2 3 4 5 6 7 8 9  

    0 0 0 0 1 1 1 1 2 2
    s                 e
    t

    while(t <= e)
        t == 1
            t++
        t== 0
            swap(se, te)
            s++
            t++
        t == 2 
            swap(te , ee)
            e--

 */

    // 0 0 0 0 1 1 1 1 2 2

    // bubble  n^2 
    // merge sort  n log n 
    // approch  n
    // log n 
    // 1 
}
