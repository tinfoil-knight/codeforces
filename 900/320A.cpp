#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11

using namespace std;

int main() {
  string n;
  cin >> n;
  n = regex_replace(n, regex("144"), ".");
  n = regex_replace(n, regex("14"), ".");
  n = regex_replace(n, regex("1"), ".");
  if (regex_search(n, regex("\\d"))) {
    LOG("NO");
  } else {
    LOG("YES");
  }
  return 0;
}