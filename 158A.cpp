#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b;
  int input;
  int count = 0;
  vector<int> arr;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++) {
    cin >> input;
    arr.push_back(input);
  }
  int num = arr.at(b - 1);
  for (int i : arr) {
    if (i >= num && i > 0) {
      count += 1;
    }
  }
  cout << count;
}
