#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
// Seen
using namespace std;

int noOfFactors(int, int);

int main() {
  int n, x;
  cin >> n >> x;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (x % i == 0 && x / i <= n) {
      count++;
    }
  }
  LOG(count);
  return 0;
}