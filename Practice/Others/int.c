#include<stdio.h>

int main(void)
{
    int nb,nt,pos,c;
    
    nb = 0;
    nt = 0;
    
    for(pos=1;(c=getchar())!=EOF;++pos)
        if( c == ' ')
        {
            if((pos % 4) != 0)
                ++nb;
            else
            {
                nb = 0;
                ++nt;
            }
        }
        else 
        {
            for( ; nt > 0 ; --nt)
                putchar('\t');
            if( c == '\t')
                nb = 0;
            else
                for( ; nb > 0; --nb)
                    putchar(' ');
            
            putchar(c);
            
            if(c == '\n')
                pos = 0;
            else if ( c == '\t')
                pos = pos + ( 4 - (pos -1) % 4) - 1;
        }

    return 0;
}

