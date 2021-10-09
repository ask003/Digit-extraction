
#include <stdio.h>

int main()
{
    int n,dig,i=0,j,count=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    int a[10];
    while(n>0)
    {
       dig = n%10;
       a[i] = dig;
       i++;
       count++;
       n = n/10;
    }
    printf("count = %d \ndigits are:\n",count);
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    printf("\ndigits on reverse are:\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}