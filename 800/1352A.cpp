#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int i = 1;
    vector<int> arr;
    while (n > 0) {
      int digit = n % 10;
      if (digit) {
        arr.push_back((n % 10) * i);
      }
      n /= 10;
      i *= 10;
    }
    LOG(arr.size());
    for (int j : arr) {
      cout << j << ' ';
    }
    cout << '\n';
  }
  return 0;
}