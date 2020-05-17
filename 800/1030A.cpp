#include <iostream>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  int op;
  cin >> n;
  while (n > 0) {
    cin >> op;
    if (op == 1) {
      LOG("HARD");
      return 0;
    }
    n--;
  }
  LOG("EASY");
  return 0;
}