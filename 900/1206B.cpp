#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
typedef long long ll;

using namespace std;

int main() {
  int n, a;
  ll count = 0;
  int zeros = 0;
  int sign = 1;
  cin >> n;
  while (n--) {
    cin >> a;
    if (a > 0) {
      count += a - 1;
    } else if (a < 0) {
      count += abs(a + 1);
      sign *= -1;
    } else {
      zeros += 1;
      count += 1;
    }
  }
  if (zeros == 0 && sign != 1) {
    count += 2;
  }

  LOG(count);
  return 0;
}