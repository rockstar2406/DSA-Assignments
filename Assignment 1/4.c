#include <stdio.h>
#include <stdlib.h>
/*
//this is for the encoding part
int main()
{
    int a,b,c,i,j,n,h;
    char ch[1000000],t[1000000],temp;
    i=0;
    int spaces=0,tempspaces=0;
    do
    {
        scanf("%c",&ch[i]);
        temp=ch[i];
        if(temp==' ')
            spaces++;
        i++;
    }
    while(temp!='\n');
    int size=i;
    //printf("the spaces are %d",spaces);
    c=0;
    for(j=0; j<size; j++)
    {
        // printf("j and size are %d and %d\n",j,size);
        if(ch[j]!=' ')
        {

            if(ch[j]+3<=122)
            {
                t[c]=ch[j]+3;
            }
            else
            {
                t[c]=ch[j]+3-26;
            }

            c++;
        }

        else if(ch[j]==' ')
        {
            tempspaces++;
            int p;
            for(p=c-1; p>=0; p--)
            {
                printf("%c",t[p]);
            }
            printf(" ");
            //printf("\n");
            c=0;
        }
        if(spaces==tempspaces)
        {
            int l;
            for(l=size-2; l>j; l--)//here size-2 not size-1 as that character will actually be a new line ,and l>j not l>=j
            {
               // printf("%c",ch[l]);

               if(ch[l]+3<=122)
                {
                    ch[l]=ch[l]+3;
                    printf("%c",ch[l]);
                }
                else
                {
                    ch[l]=ch[l]+3-26;
                    printf("%c",ch[l]);
                }
            }
            break;

        }

    }
//    printf("%d",c);
//printf("%c",t[c-1]);
}
*/
//this is for the encoding part
int main()
{
    int a,b,c,i,j,n,h;
    char ch[1000000],t[1000000],temp;
    i=0;
    int spaces=0,tempspaces=0;
    do
    {
        scanf("%c",&ch[i]);
        temp=ch[i];
        if(temp==' ')
            spaces++;
        i++;
    }
    while(temp!='\n');
    int size=i;
    //printf("the spaces are %d",spaces);
    c=0;
    for(j=0; j<size; j++)
    {
        // printf("j and size are %d and %d\n",j,size);
        if(ch[j]!=' ')
        {

            if(ch[j]-3>=65)
            {
                t[c]=ch[j]-3;
            }
            else
            {
                t[c]=ch[j]-3+26;
            }

            c++;
        }

        else if(ch[j]==' ')
        {
            tempspaces++;
            int p;
            for(p=c-1; p>=0; p--)
            {
                printf("%c",t[p]);
            }
            printf(" ");
            //printf("\n");
            c=0;
        }
        if(spaces==tempspaces)
        {
            int l;
            for(l=size-2; l>j; l--)
            {
               // printf("%c",ch[l]);

               if(ch[l]-3>=97)
                {
                    ch[l]=ch[l]-3;
                    printf("%c",ch[l]);
                }
                else
                {
                    ch[l]=ch[l]-3+26;
                    printf("%c",ch[l]);
                }
            }
            break;

        }

    }
//    printf("%d",c);
//printf("%c",t[c-1]);
}
