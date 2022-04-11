#include <stdio.h>

int main(void) {
  int N, M, max = 0;
  int arr[100];

  scanf("%d %d", &N, &M);

  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      for(int s = j + 1; s < N; s++) {
        if(M >= arr[i] + arr[j] + arr[s] && max <arr[i] + arr[j] + arr[s]) {
          max = arr[i] + arr[j] + arr[s];
        }
      }
    }
  }
  printf("%d", max);
  return 0;
}