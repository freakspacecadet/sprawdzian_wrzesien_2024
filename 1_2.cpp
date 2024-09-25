#include <iostream>
using namespace std;

int main() {
	string rozgrywka;
	cin >> rozgrywka;
	int A = 0;
	int B = 0;
	
	for (int i = 0; i < rozgrywka.length(); i++) {
		if (rozgrywka[i] == 'A') {
			A++;
		}
		else {
			B++;
		}
		if (A >= 1000 && A - B >= 3) {
			cout << "A " << A << ":" << B;
			break;
		}
		else if (B >= 1000 && B - A >= 3) {
			cout << "B " << B << ":" << A;
			break;
		}
	}
	return 0;
}
