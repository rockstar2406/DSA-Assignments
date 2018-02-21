#include <stdio.h>
#include <stdlib.h>

/*using the fact that (x^n)%M=
(x^n/2%M)*(x^n/2%M)%M when n is even
(x%M)*(x^n-1%M)%M when n is odd
1 when n is 0
*/
int y;
int mod(int x,int n,int m)
{

    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
     y=mod(x,n/2,m);
     return (y*y)%m;//see the upper comments
    }
    else
    {
        return ((x%m)*mod(x,n-1,m))%m;
    }

}
int main()
{
    int a,b,c,i,j,n,p;
    scanf("%d%d%d",&c,&n,&p);
    a=mod(c,n,p);
    printf("%d",a);

}

