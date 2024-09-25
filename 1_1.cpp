#include <iostream>
using namespace std;

int main() {
	string rozgrywka;
	cin >> rozgrywka;
	char poprzedni_punkt = rozgrywka[0];
	int wygrala_inna = 0;
	
	for (int i = 1; i < rozgrywka.length(); i++) {
		if (poprzedni_punkt != rozgrywka[i]) {
			wygrala_inna++;
		}
		poprzedni_punkt = rozgrywka[i];
	}
	
	cout << wygrala_inna;
	return 0;
}
