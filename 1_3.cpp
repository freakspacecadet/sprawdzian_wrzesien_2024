#include <iostream>
using namespace std;

int main() {
	string rozgrywka;
	cin >> rozgrywka;
	
	int passa_A = 1;
	int passa_B = 1;
	int ile_pass = 0;
	int max = 0;
	char punkt = rozgrywka[0];
	char druzyna = ' ';
	
	for (int i = 1; i < rozgrywka.length(); i++) {
		if (rozgrywka[i] == punkt) {
			if (punkt == 'A') {
				passa_A++;
			}
			if (punkt == 'B') {
				passa_B++;
			}
		}
		else {
			if (rozgrywka[i] == 'A') {
				if (passa_A >= 10) {
					ile_pass++;
					
					if (passa_A > max) {
						max = passa_A;
						druzyna = 'A';
					}
				}
				passa_A = 1;
			}
			if (rozgrywka[i] == 'B') {
				if (passa_B >= 10) {
					ile_pass++;
					
					if (passa_B > max) {
						max = passa_B;
						druzyna = 'B';
					}
				}
				passa_B = 1;
			}
		}
		punkt = rozgrywka[i];
	}
	
	cout << ile_pass << " " << druzyna << " " << max;
	return 0;
}
