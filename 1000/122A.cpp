#include <iostream>
#define LOG(x) cout << x << "\n"

using namespace std;

int almostLucky(int);

int main() {
  // 1 <= n <= 1000
  int n;
  cin >> n;
  almostLucky(n) ? LOG("NO") : LOG("YES");
  return 0;
}

int almostLucky(int x) {
  // [4,7,44,47,74,77,444,447,474,477,777,774,747,744]
  int lucky[] = {4, 7, 47, 74, 447, 474, 477, 774, 747};
  for (int i : lucky) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}