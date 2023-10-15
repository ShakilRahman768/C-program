#include<stdio.h>
int main()
{
    int n,i,p,v;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the element: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position and value you want to add: \n");
    scanf("%d %d",&p,&v);
    for(i=n; i>=p-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=v;
    for(i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
