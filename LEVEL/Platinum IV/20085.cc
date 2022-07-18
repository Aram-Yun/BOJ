#include "molecules.h"

std::vector<int> find_subset(int l, int u, std::vector<int> w) {
  int left = 0, right = 0;
  long long sum = 0;
  while(left <= right and right < w.size()) {
    if(sum < l) sum += w[right], ++right;
    else if(sum > u) sum -= w[left], ++left;
    else {
      std::vector<int> ans;
      for(int i = left; i <= right; ++i) ans.emplace_back(w[i]);
      return ans;
    }
  }
	return std::vector<int>(0);
}
