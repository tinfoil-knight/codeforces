#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  string dub;
  cin >> dub;
  dub = regex_replace(dub, regex("WUB"), " ");
  // Removing leading whitespace
  dub = regex_replace(dub, regex("^\\s+"), string(""));
  // Removing unnecessary whitespace in between
  dub = regex_replace(dub, regex("\\s+"), " ");
  LOG(dub);
  return 0;
}