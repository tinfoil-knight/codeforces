#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

// stringHasSubstring
bool sHS(string str, string substr) {
  return str.find(substr) != string::npos ? true : false;
}

int main() {
  string str;
  cin >> str;
  bool truth = sHS(str, "H") || sHS(str, "Q") || sHS(str, "9");
  LOG((truth ? "YES" : "NO"));
  return 0;
}