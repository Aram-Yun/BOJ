#include <stdio.h>
#include <string.h>

char min(char a, char b) {
  char ans;
  ans = (int)a > (int)b ? b : a;
  return ans;
}


int main(void) {
  int N, tmp;
  char arr[20000][51], bin;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%s", arr[i]);
  }
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N - 1; j++) {
      if(strlen(arr[j]) > strlen(arr[j + 1])) {
        for(int s = 0; s < 51; s++) {
          bin = arr[j][s];
          arr[j][s] = arr[j + 1][s];
          arr[j + 1][s] = bin;
        }
      }
    }
  }
  
  for(int i = 0; i < N - 1; i++) {
    tmp = min(arr[i], arr[i + 1]);
  }

  for(int i = 0; i < N; i++) {
    if(arr[i][0] == 0) {
      continue;
    }
    printf("%s\n", arr[i]);
  }

  return 0;
} 