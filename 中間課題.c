#include <stdio.h>
#include <string.h>

int main()
{
    int i ,length = 0 ,large = 0 ,small = 0;
    char str[400];
    scanf ("%s" , str);
    printf ("%s" , str);
    length = strlen(str);
    if (length > 8)
    {
        printf("8文字以上です\n");
        for (i = 0; i <= 400; i++)
        {
            if (str [i] >= 'A' && str[i] <= 'Z')
            large = 1;
            if (str [i] >= 'a' && str[i] <= 'z')
            small = 1;
        }
        if (large == 0)
        printf("大文字を含めてください\n");
        if (small == 0)
        printf("小文字を含めてください\n");
        if (large == 1 && small == 1)
        {
        printf("大文字かつ小文字が含まれている\n");
        printf("これは強いパスワードである\n");
        }
    }
    else 
    printf("8文字未満です\n");

    return 0;
}