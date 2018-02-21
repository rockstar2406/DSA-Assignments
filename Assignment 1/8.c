#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,c,i,j,n,h;
    char ch[10000],temp;
    i=0;
  gets(ch);
    int size=strlen(ch);
    char s1[7];
    s1[0]='g';
    s1[1]='o';
    s1[2]='o';
    s1[3]='d';
    s1[4]='b';
    s1[5]='y';
    s1[6]='e';
    j=0;
    int flag=0;
    for(i=0;i<size;i++)
    {
        if(ch[i]==s1[j])
        {
            j++;
          //  printf("yes %d\n",i);
            if(j==6)
            {
               flag=1;
            }
        }

        if(flag==1)
        {
            break;
        }
    }
   // printf("%d\n",flag);
    if(flag==1)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }


}
