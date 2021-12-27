#include <stdio.h>

int main(void) {
  int wcnt = 0, bcnt = 0, min = 2500;
  int N = 0, M = 0; 
  char input[51][51] = {0, };
  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++) {
    scanf("%s", input[i]);
  }
  for(int i = 0; i < N - 7; i++) {
    for(int j = 0; j < M - 7; j++) {
      for(int u = 0; u < 8; u++) {
        for(int k = 0; k < 8; k++) {
          if((u + i) % 2 == 0) {
            if((j + k) % 2 == 0) {
              if(input[(u + i)][(j + k)] == 'W') {
               wcnt++;
              }
              else {
               bcnt++;
              }
            }
            else {
              if(input[(i + u)][(j + k)] == 'B') {
                wcnt++;
              }
              else {
                bcnt++;
              }
            }
         }
         else {
           if((j + k) % 2 == 0) {
             if(input[(i + u)][(j + k)] == 'B') {
                wcnt++;
              }
             else {
                bcnt++;
              }
           }
           else {
              if(input[(i + u)][(j + k)] == 'W') {
                wcnt++;
              }
              else {
               bcnt++;
             }
           }
          }
        }
      }
      if(min > wcnt || min > bcnt) {
        min = wcnt <= bcnt ? wcnt : bcnt;
      }
      wcnt = 0, bcnt = 0;
    }
  }
  printf("%d", min);
  return 0;
}