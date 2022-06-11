#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v, ans, wer;

int f(int x) {
  int res = 1, sum = 0;
  for(int i = 0; i < N; i++) {
    if(sum + v[i] <= x or sum == 0) sum += v[i];
    else sum = v[i], res++; 
  }
  return res;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;
  v.resize(N), ans.resize(M), wer.resize(M);


  int l = 0, r = 0;
  for(auto& x : v) {cin >> x; l = max(l, x); r += x;}
  while(l < r - 1) {
    int mid = (l + r) / 2;
    if(f(mid) <= M) r = mid;
    else l = mid;
  }


  int flag = 0, sum = 0;
  for(int i = 0; i < N; i++) {
    if(sum + v[i] <= r) sum += v[i];
    else ans[flag++] = sum, sum = v[i];
  }
  ans[flag] = sum;


  int tmp = 0;
  flag = 0;
  for(int i = 0; i < N; i++) {
    tmp += v[i];
    if(tmp == ans[flag]) wer[flag++] = i + 1, tmp = 0;
  }

  for(int j = 0; j < M - 1; j++) {
    if(wer[j] == 0) {
      if(ans[j - 1] > ans[j + 1]) ans[j - 1] -= v[wer[j - 1] - 1], ans[j] += v[wer[j - 1] - 1], wer[j] += wer[j - 1], wer[j - 1]--;
      else wer[j] += ans[j + 1] -= v[wer[j + 1] - 1], ans[j] += v[wer[j + 1] - 1], wer[j + 1], wer[j - 1]++;
    }
  }
  if(wer[M - 1] == 0) ans[M - 2] -= v[wer[M - 2] - 1], ans[M - 1] += v[wer[M - 2] - 1], wer[M - 1] += wer[M - 2], wer[M - 2]--;
  for(int j = 0; j < M; j++) for(int i = 0; i < M - 1; i++) {
    if(wer[i] == wer[i + 1]) ans[i] -= v[wer[i] - 1], ans[i + 1] += v[wer[i] - 1], wer[i]--;
  }
  
  int answer = 0;
  for(int i = 0; i < M; i++) answer = max(answer, ans[i]);

  cout << answer << endl;

  cout << wer[0] << ' ';
  for(int i = 1; i < M; i++) cout << wer[i] - wer[i - 1] << ' ';
  return 0;
}
