#include <iostream>
#include <stdio.h>
int main() {
  int ore1,ore2,minuti1,minuti2,secondi1,secondi2,differenza;
  printf("inserire le ore del primo orario");
  scanf("%d",&ore1);
  printf("inserire i minuti del primo orario");
  scanf("%d",&minuti1);
  printf("inserire i second del primo orario");
  scanf("%d",&secondi1);
  printf("inserire le ore del secondo orario");
  scanf("%d",&ore2);
  printf("inserire minuti del secondo orario");
  scanf("%d",&minuti2);
  printf("inserire i secondi del secondo orario");
  scanf("%d",&secondi2);
  secondi1 = ore1*3600 + minuti1*60;
  secondi2 = ore2*3600 + minuti2*60;
  if (secondi1>=secondi2)
      differenza = secondi1-secondi2;
    else
        differenza = secondi2-secondi1;
    printf("la differenza in secondi é %d secondi", differenza);

}
