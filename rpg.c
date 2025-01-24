#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  
  int number1 = (rand() % 21);
  int number2 = (rand() % (21 - number1));
  int number3 = 21 - number1 - number2;
  
  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);
  
  if(number1 > number2 && number1 > number3)
  {
      printf("mage、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }
  if(number2 > number1 && number2 > number3)
  {
      printf("knight、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }
  if(number3 > number1 && number3 > number2)
  {
      printf("thief、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }
  if(number1 == number2 && number1 > number3)
  {
      printf("balancer1、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }
  if(number1 == number3 && number1 > number3)
  {
      printf("balancer2、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }
  if(number3 == number2 && number3 > number1)
  {
      printf("balancer3、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",number1,number2,number3);
  }

   

    return 0;
}