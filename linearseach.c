#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }return -1;
}


int main()
{
    int arr[]={2,3,22,45,67,443,551};
    int size=sizeof(arr)/sizeof(int);
    int element=443;
    int searchindex=linearSearch(arr,size,element);
    printf("the element %d was found at index %d \n",element,searchindex);
    return 0;
}