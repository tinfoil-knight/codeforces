#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  pair<vector<int>::iterator, vector<int>::iterator> mnmx =
      minmax_element(arr.begin(), arr.end());
  int minEl = arr[mnmx.first - arr.begin()];
  int maxEl = arr[mnmx.second - arr.begin()];
  int count = count_if(arr.begin(), arr.end(), [minEl, maxEl](int x) {
    return x > minEl && x < maxEl;
  });
  LOG(count);
  return 0;
}