#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    double n;
    double k = 2;
    cin >> n;
    int dnr;
    while (true) {
      dnr = (int)pow(2, k) - 1;
      if ((int)n % dnr == 0) {
        break;
      }
      k++;
    }
    LOG(((int)n / dnr));
  }
  return 0;
}