#include<stdio.h>
int main()
{
    int arr[]={12,35,1,10,34,1};
    int size = sizeof(arr)/sizeof(arr[0]);

       for(int i=0;i<size;i++)
{
    for(int j=size-1;j<=0;j++)
    {
        printf("%d\n",arr[j]);
    }
}
    return 0;
}
