#include<stdio.h>
void ammstrong (int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    ammstrong(n);
    return 0;
}
void ammstrong( int n)
{
    int x,d,sum=0;
    x=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
       n= n/10;
    }
    if(sum==x)
    {
        printf("arrstrong");
    }
    else
    {
        printf("not arrstron");
    }
}

