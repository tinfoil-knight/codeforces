#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11
// Seen
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int noOfOnes = count(s.begin(), s.end(), '1');
  int noOfZeros = n - noOfOnes;
  int result = abs(noOfOnes - noOfZeros);
  LOG(result);
  return 0;
}