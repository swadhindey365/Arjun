/*#include<stdio.h>
int main(){
int arr[]={12,23,45,7,34,23};
int size= sizeof(arr)/sizeof (arr[0]);

for(int i=size-1;i>=0;i--)
{
    printf("%d\t",arr[i]);
}
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[]={12,32,43,45,65,78,98};
    int size=sizeof(arr)/sizeof(arr[0]);

int L,SL;
if(arr[0]>arr[1])
{
    L=arr[0];
    SL=arr[1];
}
else if(arr[1]>arr[0])
{
 L=arr[1];
 SL=arr[0] ;
}
for(int i=0;i<size;i++)
{
    if(arr[i]>L &&arr[i]>SL)
    {
        SL=L;
        L=arr[i];
    }
    else if(arr[i]>SL&&arr[i]!=L)
    {
     SL=arr[i];
    }

}
    printf("SECOND large number is %d\t",SL);

    return 0;
}*/
#include<stdio.h>
int main()
{
    int arr[]={12,23,34,54,43,32,21};
    int size= sizeof (arr)/sizeof(arr[0]);
    int rotatecount;
    printf("Enter the roatetion number : ");
    scanf("%d",&rotatecount);
    rotatecount=rotatecount % size;

    for(int i=0;i<rotatecount;i++)
    {
        int first =arr[0];

        for(int j=0;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
    arr[size-1]=first;
    }
    printf("Rotation Array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}

