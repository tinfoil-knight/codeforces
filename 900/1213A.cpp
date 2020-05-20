#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  int n, chip;
  // Chips with odd coordinate
  int cnto = 0;
  cin >> n;
  vector<int> locs;
  int m = n;
  while (n--) {
    cin >> chip;
    cnto += chip % 2;
  }
  LOG(min(cnto, m - cnto));

  return 0;
}