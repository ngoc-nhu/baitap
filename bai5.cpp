#include<iostream>
using namespace std;
int tinh_nam_sinh(int n) {
	return 2021 - n;
}
int main() {
	int n;
	cout << " nhap tuoi ";
	cin >> n;
	int namsinh = tinh_nam_sinh(n);
	cout << " nam sinh la ";
	cout << namsinh;
}