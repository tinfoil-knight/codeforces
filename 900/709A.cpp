#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, b, d;
  cin >> n >> b >> d;
  int juice = 0;
  int count = 0;
  while (n--) {
    int a;
    cin >> a;
    if (a <= b) {
      juice += a;
    }
    if (juice > d) {
      juice = 0;
      count++;
    }
  }
  LOG(count);

  return 0;
}