#include <iostream>
#define LOG(x) cout << x << "\n"
// Incorrect
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
//   int days = n + (n / m) + (n / m >= m ? (n / m) / m : 0);
  LOG(days);
  return 0;
}