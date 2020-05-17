#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  LOG((min(n, m) % 2 == 0 ? "Malvika" : "Akshat"));
  return 0;
}