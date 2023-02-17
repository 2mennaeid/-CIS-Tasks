#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int sum=0;
    int average;
    int _size= sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<_size;i++)
    {
        sum +=arr[i];
    }
    average = (sum)/(_size);
    for(int i=0;i<_size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n%d\n",sum);
    printf("%d",average);
    return 0;
}


