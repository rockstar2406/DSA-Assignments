#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,c,i,j,n,h,k;
    scanf("%d",&n);
    while(n--)
    {
        char s[101];
        scanf("%s",s);
        char  s1[101][101];
        int size=strlen(s);
        int flag=0;
        for(i=1; i<=10; i++)
        {
            if(i*i==size)
            {
                flag=1;
                break;
            }
        }
        //   printf("the value of i is %d",i);
        if(flag==0)
        {
            // printf("here 1");
            printf("NO\n");
        }
        else
        {
            int x=0;
            for(j=1; j<=i; j++)
            {
                for(k=1; k<=i; k++)
                {
                    s1[j][k]=s[x];
                    x++;
                }
            }
            int flag1=0;
            for(j=1; j<=i; j++)//distributing the characters in a i*i square matrix
            {
                for(k=1; k<=i; k++)
                {
                    if(s1[j][k]!=s1[k][j])//checking whether it is symmetric or not
                    {
                        flag1=1;
                        break;
                    }
                }
            }
            if(flag1==1)
            {
                //printf("here 2");
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }


    }
    return 0;


}
