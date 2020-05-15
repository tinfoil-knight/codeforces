#include <bits/stdc++.h>

using namespace std;

int main() {
  int limak, bob;
  int years = 0;
  cin >> limak >> bob;

  while (limak <= bob) {
    years++;
    limak = 3 * limak;
    bob = 2 * bob;
  }

  cout << years << endl;
  return 0;
}