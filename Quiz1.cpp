#include <iostream>
#include <cmath> 
using namespace std;

void hitungEK(double massa, double kecepatan) {
	double energiKinetik = 0.5 * massa * pow(kecepatan,2);
	cout << "energi kinetik EK : " << energiKinetik << "joule" << endl;

}


int main() {
	double massa, kecepatan;


	cout << "masukkan massa (kg):" ;
	cin >> massa;


	cout << "masukan kecepatan (m/s):";
	cin >> kecepatan;

	hitungEK(massa, kecepatan);

	return 0;
}
