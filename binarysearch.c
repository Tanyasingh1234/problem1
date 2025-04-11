#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
    int low,mid,high;
    low = 0;
    high = size-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        {
            if(arr[mid]==element)
            {
                return mid;
            }
            if(arr[mid]<element)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
     }return -1;
}

int main()
{
    int arr[] = {1,23,45,65,78,89};
    int size=sizeof(arr)/sizeof(int);
    int element = 32;
    int searchindex = binarySearch(arr,size,element);
    printf("The element of %d at index %d \n" , element , searchindex);
    return 0;
}