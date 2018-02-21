#include <stdio.h>
#include <string.h>
int main()
{
    char q[10000],w[10000],e[100][10000];
    gets(q);
    gets(w);
    //printf("%s",s);
    //printf("%d",strlen(s));
    int size1=strlen(q),size2=strlen(w);
    int temp =0,cou=0,i;

    for(i=0; i<size2; i++)
    {
        if(w[i]==q[temp])
        {
            temp++;
        }
        else
        {
            temp=0;
        }
       // printf("the value of temp is %d\n",temp);

        if(temp==size1)
        {
            cou++;
            temp=0;
        }
      //  printf("the value of temp is %d\n",temp);

    }
    printf("%d",cou);
    return 0;

}
