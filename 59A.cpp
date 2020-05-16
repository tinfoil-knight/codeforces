#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  string input;
  int upper = 0;
  int lower = 0;

  cin >> input;
  upper =
      count_if(input.begin(), input.end(), [](char c) { return isupper(c); });
  lower = input.size() - upper;

  if (upper > lower) {
    transform(input.begin(), input.end(), input.begin(), ::toupper);
  }
  if (upper <= lower) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
  }
  LOG(input);
  return 0;
}