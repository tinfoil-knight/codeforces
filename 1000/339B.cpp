#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a = 1;
  int tmp = 1;
  long long count = 0;
  for (int i = 0; i < m; i++) {
    cin >> a;
    if (a >= tmp) {
      count += a - tmp;
    } else {
      count += n - tmp + a;
    }
    tmp = a;
  }
  LOG(count);
  return 0;
}