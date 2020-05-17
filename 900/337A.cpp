#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, m;
  int f;
  vector<int> arr;
  cin >> n >> m;
  while (m--) {
    cin >> f;
    arr.push_back(f);
  }

  sort(arr.begin(), arr.end());
  m = arr.size();
  // Setting diff to greatest element
  int diff = arr[m - 1];

  for (int i = n - 1; i < m; i++) {
    diff = min(diff, arr[i] - arr[i - n + 1]);
  }
  LOG(diff);
  return 0;
}