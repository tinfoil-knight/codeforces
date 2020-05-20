#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (n % m == 0) {
    int ans = n / m;
    while (m--) {
      cout << ans << ' ';
    }
  } else {
    vector<int> arr(m, n / m);
    int inc = n - m * (n / m);
    for (int i = arr.size() - 1; i > arr.size() - inc - 1; i--) {
      arr[i] += 1;
    }
    for (int i : arr) {
      cout << i << ' ';
    }
  }
  cout << "\n";

  return 0;
}