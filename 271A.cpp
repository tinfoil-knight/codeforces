#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

bool distinct(int x) {
  string s = to_string(x);
  set<char> t(s.begin(), s.end());
  return (s.size() == t.size());
}
int main() {
  int year;
  cin >> year;
  year++;
  while (true) {
    if (distinct(year)) {
      LOG(year);
      break;
    }
    year++;
  }
  return 0;
}