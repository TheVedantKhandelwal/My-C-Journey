#include<stdio.h>
int main()
{
    int i,low,high,mid,n,key,array[100];
    printf("enter number of books in the shelf\n");
    scanf("%d",&n);
    printf("Enter%dBookIds\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
        printf("Enter BookID(number) to find\n");
        scanf("%d",&key);
        low=0;
        high=n-1;
        mid=(low+high)/2;
    while(low<=high)
    {
        if(array[mid]<key)
            low=mid=1;
        else if(array[mid]==key)
        {
            printf("BookId=%d is found at location %d\n",key,mid+1);
            break;
        }
        else
            high=mid-1;
            mid=(low+high)/2;
        if(low>high)
            printf("BookID not found! %d isnt present in the book shelf\n",key);
    }
    return 0;
