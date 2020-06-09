#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
  string s;
  cin >> s;
  string copy = s;
  int upper = 0;
  REP(i, 0, copy.length()) {
    if (isupper(copy[i])) {
      upper++;
      copy[i] = tolower(copy[i]);
    }
  }
  if (upper == copy.length()) {
    LOG(copy);
  } else if (upper == copy.length() - 1 && islower(s[0])) {
    copy[0] = toupper(copy[0]);
    LOG(copy);
  } else {
    LOG(s);
  }

  return 0;
}