#include <iostream>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  int p;
  cin >> n;
  float total = n * 100;
  float count = 0;
  float input;
  while (n > 0) {
    cin >> input;
    count += input;
    n--;
  }
  LOG(100 * count / total);
  return 0;
}