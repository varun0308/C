#include<stdio.h>

int main()
{
    int i,p,k;
    char s[100];

	scanf("%d",&p);

    for(i=0;i<=p && s[i]!='#';i++)
    {
        scanf("%c", &s[i]);
        printf("%c", s[i]);
    }
	printf("\n");
	int q=0;
	int m;
    for(i=0;i<=100 && s[i]!='#';i++)
	{
		if(s[i]=='\t')
		{
			m=(p+(q*3));
			for(k=m;k>i;--k)
			{
				s[k+3]=s[k];
			}
			s[i]=s[i+1]=s[i+2]=s[i+3]=' ';
			++q;
		}
		printf("%c", s[i]);
	}
}