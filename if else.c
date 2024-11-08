#include <stdio.h>

int main()
{
    int k,g;
    printf("テストの点数は何点ですか?");
    scanf("%d %d", &k,&g);
    
    
    if (k > g)
    {
        printf("あなたは相手より優秀です!\n");
    }
    
    else if(k < g)
    {
     printf("あなたは出来損ないです。\n");
    }
    
    else 
    {
     printf("あなたは相手と同等です。\n");
    }
    
    
    return 0;
}