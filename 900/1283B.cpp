#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
// Incorrect
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a, b;
    a = n / k;
    b = n - k * (n / k);
    if (b <= a + 1 && b <= k / 2) {
      LOG(n);
    } else {
      LOG(k * (n / k));
    }
  }
  return 0;
}