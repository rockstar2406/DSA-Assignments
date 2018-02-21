#include <stdio.h>
#include <stdlib.h>

void mul(int n)
{
    int res[50000];
    res[0]=1;
    int res_size=1;
    int x;
    for(x=1; x<=n; x++)
    {
        res_size=multiply(2,res,res_size);//do not forget to update the value of res_size
    }
    int i;
    if(res_size>10)
    {
        int temp=0;
        // printf("here 1\n");
        for(i=9; temp<10; i--)//since the characters are stored in reverse and we need the last 10 digits ,from index 0 to 9
        {
            printf("%d",res[i]);
            temp++;
        }
    }
    else
    {
//printf("here 2");

        for(i=res_size-1; i>=0; i--)
        {
            printf("%d",res[i]);
        }
    }
}
int multiply(int x,int res[],int res_size)
{
    int carry=0 ;
    int i ;
    for(i=0; i<res_size; i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
int main()
{
    int n;
    scanf("%d",&n);
    mul(n);

}

