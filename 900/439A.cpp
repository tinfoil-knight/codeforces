#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, d, t;
  cin >> n >> d;
  int count = 0;
  while (n--) {
    cin >> t;
    d -= t;
    count++;
  }

  d -= (count - 1) * 10;
  if (d >= 0) {
    LOG(2 * (count - 1) + (d / 5));
  } else {
    LOG(-1);
  }

  return 0;
}