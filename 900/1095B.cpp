#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int oldMin = arr[0];
  int oldMax = arr[arr.size() - 1];
  arr.erase(arr.begin());
  arr.erase(arr.end() - 1);
  int newMin = arr[0];
  int newMax = arr[arr.size() - 1];
  int ans = min(abs(newMax - oldMin), abs(oldMax - newMin));
  LOG(ans);
  return 0;
}