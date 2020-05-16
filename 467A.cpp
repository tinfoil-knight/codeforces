#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int rooms;
  int p, q;
  int count = 0;
  cin >> rooms;
  while (rooms > 0) {
    cin >> p >> q;
    if (q - p >= 2) {
      count++;
    }
    rooms--;
  }
  LOG(count);
  return 0;
}