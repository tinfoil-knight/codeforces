#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11
using namespace std;

int main() {
  int k2, k3, k5, k6;
  int k256, k32;
  cin >> k2 >> k3 >> k5 >> k6;
  k256 = min({k2, k5, k6});
  k2 -= k256;
  k32 = min(k3, k2);
  LOG(k256 * 256 + k32 * 32);
  return 0;
}