#include <iostream>
using namespace std;

int tot(int abc[]); 
int avg(int abc[]);

int main() {

	int a, b, c, d, e = 0;
	cin >> a >> b >> c >> d >> e;

	int abc[5];
	abc[0] = a;
	abc[1] = b;
	abc[2] = c;
	abc[3] = d;
	abc[4] = e;

	int total = abc[0] + abc[1] + abc[2] + abc[3] + abc[4];
	cout << "총합:" << total << endl;
	cout << "평균:" << total / 5 << endl;
	cout << "합계:" << tot(abc) << endl;
	cout << "평균:" << avg(abc) << endl;

	return 0;
}

int tot(int abc[]) {
	int total = 0; 
	for (int i = 0; i < 5; i++) {
		total += abc[i];
	}
	return total;
}

int avg(int abc[]) {
	int total = 0;
	for (int i = 0; i < 5; i++) {
		total += abc[i];
	}
	return total / 5;
}