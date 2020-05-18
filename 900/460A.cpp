#include <iostream>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int result = n;
  int days = n;
  int x = 0;
  while (result > 0) {
    x += result;
    result /= m;
  }
  days = days + (x / m);
  if (days % m == 0) {
    LOG(days + 1);
  } else {
    LOG(days);
  }

  return 0;
}