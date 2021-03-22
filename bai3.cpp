#include<iostream>
using namespace std;
void xl_hoc_luc(int dtb) {
	if (dtb >= 9 && dtb <= 10) {
		cout << " GIIOI " << endl;
	}
	else if (dtb >= 7 && dtb <= 8) {
		cout << " KHA " << endl;
	}
	else if (dtb >= 4 && dtb <= 6) {
		cout << " TRUNG BINH " << endl;
	}
	else {
		cout << " YEU " << endl;
	}
}
int main() {
	int dtb;
	do {
		cout << " nhap diem trung binh = ";
		cin >> dtb;

	} while (dtb > 10 || dtb < 0);
	cout << " xep loai hoc luc la ";
	xl_hoc_luc(dtb);
}