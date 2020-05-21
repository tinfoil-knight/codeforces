#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  LOG(m % (int)pow(2, n));
  return 0;
}