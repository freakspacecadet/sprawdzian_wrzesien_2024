#include <iostream>
using namespace std;

bool f(int x, int y) {
    while (y != 0) {
       if (x == y) {
          return true;
       }
       y = (y - (y%2))/2;
    }
    return false;
}

int main() {
    int x;
    int y;
	for (int i = 0; i < 1000; i++) {
       cin >> x >> y;
       if (f(x, y) == true) {
          cout << x << " " << y << endl;
       }
    }
	return 0;
}
