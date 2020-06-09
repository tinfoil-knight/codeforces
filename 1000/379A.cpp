#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int days = 0;
  while (a) {
    a--;
    days++;
    if (days % b == 0) {
      days++;
    }
  }
  LOG(days);
  return 0;
}