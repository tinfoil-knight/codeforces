#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  unordered_map<string, int> kv(n);
  for (int i = 0; i < n - 1; i++) {
    string sub = s.substr(i, 2);
    kv[sub] += 1;
  }
  auto lambda = [](const pair<string, int>& p1, const pair<string, int>& p2) {
    return p1.second < p2.second;
  };
  unordered_map<string, int>::iterator itr =
      max_element(kv.begin(), kv.end(), lambda);
  LOG(itr->first);

  return 0;
}
