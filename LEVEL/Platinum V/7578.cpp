#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 500'000;

long long N, num[1'000'001], cnt = 0, bin;
int arr[maxn], tmp[maxn];

void merge(int a, int b) {
  if(a == b) return;
  int mid = (a + b) / 2;
  merge(a, mid);
  merge(mid + 1, b);
  int x = a, y = mid + 1, z = a;
  while(x <= mid and y <= b) {
    if(arr[x] > arr[y]) {
      cnt += b - y + 1;
      tmp[z++] = arr[x++];
    } 
    else {
      tmp[z++] = arr[y++];
    }
  }
  while(x <= mid) tmp[z++] = arr[x++];
  while(y <= b) tmp[z++] = arr[y++];
  for(int i = a; i <= b; i++) arr[i] = tmp[i];
}

int main(void) {
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &bin);
    num[bin] = i;
  }
  for(int i = 0; i < N; i++) {
    scanf("%d", &bin);
    arr[i] = num[bin];
  }
  merge(0, N - 1);
  printf("%lld", cnt);
  return 0;
}