#include <stdio.h>

int main(void)
{
    int Jiro, Hanao, Saburo;
    
    Jiro = 50;  //次郎の年齢
    Hanao = 55;  //はなおの年齢
    Saburo = 50;  //三郎の年齢
    
    // 変数と定数の比較
    if(Jiro == 50)
       printf("次郎は50歳です\n");
    if(Hanao != 50)
       printf("はなおは50歳ではありません\n");
    if(Hanao >= 50)
       printf("はなおは50歳以上です\n");
    if(Jiro < 50)
       printf("三郎は50歳未満です\n");
       
    // 変数と変数の比較
    if(Jiro > Saburo)
       printf("次郎は三郎より年上です\n");
    if(Hanao > Jiro)
       printf("はなおは次郎より年上です\n");

    return 0;
}