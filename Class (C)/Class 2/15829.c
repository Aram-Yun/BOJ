#include <stdio.h>

int main(void) {
  int L = 0, storage = 0;
  unsigned long long sum = 0, cal = 1;
  char bin = 0;
  char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0};
  scanf("%d", &L);
  scanf("%c", &bin);
  for(int i = 0; i < L; i++) {
    scanf("%c", &bin);
    for(int j = 0; j < 26; j++) {
      if(bin == alphabet[j]) {
        storage = (j + 1);
        for(int u = 0; u < i; u++) {
          cal *= 31;
          cal %= 1234567891;
        }
        sum += (storage * cal) % 1234567891;
        cal = 1;
        break;
      }
    }
  }
  printf("%d", sum % 1234567891);
  return 0;
}