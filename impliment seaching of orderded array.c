//SELECTION SORT
#include<stdio.h>
int main()
{
    int i,j,temp,a[10],n,small,s,flag=0;
    printf("\n enter the no of element=");
    scanf("%d",&n);
    printf("\n sorted elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[small]>a[j])
            {
                small=j;
            }
        }
        if(small!=i)
        {
            temp=a[i];
            a[i]=a[small];
            a[small]=temp;
        }

    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n Enter the no of element that you want to search:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            flag=1;
            break;
        }
        else
            {
                flag=0;
        break;
        }
    }
    if(flag==0)
    {
        printf("\n%d is avalable in array",s);
    }
    else
    {
        printf("\n%d is not avalable in array",s);
    }
    return 0;
}
