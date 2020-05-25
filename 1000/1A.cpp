#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  long double n, m, a;
  cin >> n >> m >> a;
  printf("%.0Lf\n", ceil(m/a)*ceil(n/a));
  return 0;
}