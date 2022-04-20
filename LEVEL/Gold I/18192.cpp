#include <bits/stdc++.h>
#include "bogoSort.h"

void sort_array(int N) {
  std::vector<int> arr(copy_array());
  std::vector<int> ans(N);
  for(int i = 0; i < N; i++) ans[i] = i;
  int x = 0, y = N - 1;
  while(arr != ans) {
    while(arr[x] != x) {
      for(int i = x; i < N; i++) {
        if(arr[i] == x) {
          y = i;
          break;
        }
      }
      shuffle_array(x, y);
      arr = copy_array();
    }
    x++;
  }
}

