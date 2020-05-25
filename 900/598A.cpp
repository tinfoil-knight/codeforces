#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
typedef long long ll;
// The output is coming out wrong for large numbers. I have no clue as to why.
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    // Number of terms in GP
    int x = floor(log2(n) + 1);
    ll sumOfAP = (n * (n + 1)) / 2;
    ll sumOfGP = pow(2, x) - 1;
    LOG(sumOfAP - 2 * sumOfGP);
  }
  return 0;
}