#include<iostream>
using namespace std;
void hoan_vi(int& a, int& b) {
	int tam = a;
	a = b;
	b = tam;
}
int main() {
	int a, b;
	cout << " nhap a = ";
	cin >> a;
	cout << " nhap b = ";
	cin >> b;
	hoan_vi(a, b);
	cout << " sau khi hoan vi ";
	cout << a << " " << b;
}