#include <stdio.h>
#include <stdlib.h>
#include <string.h>;
struct st
{
    int count ;

};
int main()
{
    int a,b,c,i,j;
    char s;
    struct st s1[256];
    for(i=0;i<256;i++)
    {
        s1[i].count=0;
    }
    do
    {
        scanf("%c",&s);
        s1[(int)s].count++;

    }while(s!='\n');
    for(i=0;i<256;i++)
    {
        if(s1[i].count>0&&i!='\n')//CAREFULLLLLLLLLLLLLLLLLLL
       printf("%c %d\n",i,s1[i].count);
    }
}
