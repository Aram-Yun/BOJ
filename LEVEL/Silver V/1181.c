#include <stdio.h>
#include <string.h>

int main(void) {
  int N;
  char arr[20000][51], bin;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%s", arr[i]);
  }
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(strlen(arr[j]) > strlen(arr[j + 1])) {
        for(int s = 0; s < 51; s++) {
          bin = arr[j][s];
          arr[j][s] = arr[j + 1][s];
          arr[j + 1][s] = bin;
        }
      }
      else if(strlen(arr[j]) == strlen(arr[j + 1])) {
        for(int s = 0; s < strlen(arr[j]); s++) {
          if((int)arr[j][s] > (int)arr[j + 1][s]) {
            for(int t = 0; t < 51; t++) {
              bin = arr[j][t];
              arr[j][t] = arr[j + 1][t];
              arr[j + 1][t] = bin;
            }
          }
        }
      }
    }
  }
 
  for(int i = 0; i < N; i++) {
    printf("%s\n", arr[i]);
  }
  return 0;
}