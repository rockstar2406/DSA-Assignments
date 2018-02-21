#include <stdio.h>
#include <stdlib.h>

void factorial(int n)
{
    int res[50000];
    res[0]=1;
    int res_size=1;
    int x;
    //start form x=2
    //you can start form 1 also but it will be the same only
    //this is basically the factorial part
    for(x=2;x<=n;x++)
    {
        res_size=multiply(x,res,res_size);
    }
    int i ;
    for(i=res_size-1;i>=0;i--)
    {
        printf("%d",res[i]);
    }

}
int multiply(int x,int res[],int res_size)
{
    int carry=0 ;
    int i ;
    for(i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;//whenever we have carry increase the res_size
    }
    return res_size;
}
int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);

}


