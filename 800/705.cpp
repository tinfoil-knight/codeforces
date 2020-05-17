#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  // The switch
  int x = 0;
  for (int i = n; i > 0; i--) {
    cout << "I ";
    cout << (x == 0 ? "hate" : "love");
    cout << (i != 1 ? " that " : " it");
    x = !x;
  }
  cout << "\n";
  return 0;
}