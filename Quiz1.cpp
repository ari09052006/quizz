#include <iostream>
using namespace std;

void hitungEK(double massa, double kecepatan) {
	double energiKinetik = 0.5 * massa * kecepatan * kecepatan;
	cout << "energi kinetik EK : " << energiKinetik << "joule" << endl;

}


int main() {
	double massa, kecepatan;

	// input masa dalam kg
	cout << "masukkan massa (kg):" ;
	cin >> massa;

	// input kecepatan m/s
	cout << "masukan kecepatan (m/s):";
	cin >> kecepatan;

	// memanggil fungsi u/ menghitung energi kinetik
	hitungEK(massa, kecepatan);

	return 0;
}