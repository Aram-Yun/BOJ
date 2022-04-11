#include <stdio.h>

int main(void) {
  int ascending[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int descending[8] = {8, 7, 6, 5, 4, 3, 2, 1};
  int input[8] = {0, };
  int acnt = 0, dcnt = 0;
  for(int i = 0; i < 8; i++) {
    scanf("%d", &input[i]);
    if(ascending[i] == input[i]) {
      acnt++;
    }
    else if(descending[i] == input[i]) {
      dcnt++;
    }
  }
  if(acnt == 8) {
    printf("ascending");
  }
  else if(dcnt == 8) {
    printf("descending");
  }
  else {
    printf("mixed");
  }
  return 0;
}