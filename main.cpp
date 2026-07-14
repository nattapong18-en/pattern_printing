#include <iostream>

using namespace std;

void printTriangle(int n) {

  for (int i = 1; i <= n; ++i) {

    for (int j = 0; j < (n - i); ++j) {
      cout << " ";
    }

    for (int k = 0; k < (2 * i - 1); ++k) {
      cout << "*";
    }
    cout << "\n";
  }
}

int main() {
  printTriangle(5);
  return 0;
}
