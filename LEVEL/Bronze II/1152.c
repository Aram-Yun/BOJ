#include <stdio.h>

int main(void) {
  int cnt = 0;
  char arr[1000001] = {0, };
  char bin = 0;
  scanf("%[^\n]s", arr);
  for(int i = 0; i < 1000001; i++) {
    if(arr[i] == 0) {
      printf("%d", cnt);
      break;
    }
    else if(arr[i] == ' ') {
      if(i != 0) {
        cnt++;
      }
    }
    else {
      if(arr[(i + 1)] == 0) {
        cnt++;
      }
    }
  }
  return 0;
}