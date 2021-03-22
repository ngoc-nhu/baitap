#include<iostream>
using namespace std;
int UCLN(int a, int b) {
	if (a > b) {
		for (int i = a; i >= 1; i--) {
			if (a % i == 0 && b % i == 0) {
				return i;
			}
		}
	}
	else
	{
		for (int i = b; i >= 1; i--) {
			if (a % i == 0 && b % i == 0) {
				return i;
			}
		}
	}
}
int BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}
int main() {
	int a, b;
	cout << " nhap a =";
	cin >> a;
	cout << " nhap b = ";
	cin >> b;
	int tim_ucln = UCLN(a, b);
	cout << " uoc chung lon nhat la " << tim_ucln << endl;
	int tim_BCNN = BCNN(a, b);
	cout << " boi chung nho nhat la " << tim_BCNN;
}
