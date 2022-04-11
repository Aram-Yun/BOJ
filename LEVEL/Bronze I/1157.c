#include <stdio.h>

int main(void) {
  char input[1000001] = {0, };
  char A[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  char a[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  
  int cnt[26] = {0, };
  int max = 0, same = 0, num = 0;
  scanf("%s", input);
  for(int i = 0; i < 1000000; i++) {
    if(input[i] == 0) {
      break;
    }
    for(int j = 0; j < 26; j++) {
      if(input[i] == A[j] || input[i] == a[j]) {
        cnt[j]++;
        break;
      }
    }
  }
  for(int i = 0; i < 26; i++) {
    if(max < cnt[i]) {
      max = cnt[i];
      num = i;
    }
    else if(max == cnt[i]) {
      same = max;
    }
  }
  if(same == max) {
    printf("?");
  }
  else {
    printf("%c", A[num]);
  }
  return 0;
}