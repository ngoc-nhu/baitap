#include<iostream>
using namespace std;
void tim_max(int n) {
	int min, max, a, i;
	max = 1;
	min = 1000000;
	for (i = 1; i <= n; i++) {
		cout << " nhap phan thu  " << i << " = ";
		cin >> a;
		if (max < a) {
			max = a;
		}
		if (min > a) {
			min = a;
		}

	}
	cout << " so lon nhat la ";
	cout << max << endl;
	cout << " so nho nhat la ";
	cout << min;

}
int main() {
	int n;
	cout << " nhap n = ";
	cin >> n;
	tim_max(n);

}
