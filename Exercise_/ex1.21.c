#include<stdio.h>

int main()
{
    int i,p,k,g,q,f;
    char s[200];

	scanf("%d",&p);

    for(i=0;i<=p && s[i]!='#';i++)
    {
        scanf("%c", &s[i]);
        printf("%c", s[i]);
    }

    printf("\n");

    q=p;
    for(i=0;s[i]!='#';i++)
    {   
             if(s[i] == ' ' && ((i+1)%4) == 3)
            {
                s[i]='\t';
            }
            else if(s[i] == s[i+1] == ' ' && ((i-2)%4) == 2)
            {
                for(k=(i+2);k<q;++k)
                {
                    s[k-1]=s[k];
                }
                s[i]='\t';
                q=q-1;
            }
            else if(s[i] == s[i+1] == s[i+2] == ' ' && ((i)%4) == 1)
            {
                for(g=(i+3);g<q;++g)
                {
                    s[g-2]=s[g];
                }
                s[i]='\t';
                q=q-2;
            }
            else if(s[i] == s[i+1] == s[i+2] == s[i+3] == ' ' && (i%4) == 0)
            {
                for(f=(i+4);i<q;++f)
                {
                    s[f-3]=s[f];
                }
                s[i]='\t';
                q=q-3;
            }
            else
            {
                ;
            }
            printf("%c",s[i]);
    }
    return 0;
}