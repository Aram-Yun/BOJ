#include <stdio.h>

int main(void) {
  char arr[101] = {0, };
  char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0};
  int cnt[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  for(int i = 0; i < 100; i++) {
    if(scanf("%c", &arr[i]) == EOF) {
      break;
    }
    for(int j = 0; j < 26; j++) {
      if(alphabet[j] == arr[i]) {
        if(cnt[j] == -1) {
          cnt[j] = i;
        }
        printf("%c, %d We found it!\n", alphabet[j], cnt[j]);
        break;
      }
    }
  }
  for(int i = 0; i < 26; i++) {
    printf("%d ", cnt[i]);
  }
  return 0;


}