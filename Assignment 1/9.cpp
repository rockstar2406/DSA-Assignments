#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,j,n,h,g,f;
    scanf("%d%d",&a,&b);
    int q[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&q[i][j]);
        }
    }
    int d;
    scanf("%d%d",&c,&d);
    int w[c][d];
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&w[i][j]);
        }
    }
    int e[a][d];
    int k,sum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            for(k=0;k<c;k++)
            {
               sum+=q[i][k]*w[k][j];
            }
            e[i][j]=sum;
            sum=0;
        }
    }
    int ans =0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            ans+=e[i][j];
        }
    }
    printf("%d",ans);
    return 0;
}

