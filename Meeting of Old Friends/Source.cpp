#include<iostream>
using namespace std;
void main() {
	int l1, r1, l2, r2, k, c = 0;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	int l22;
	l22 = l2;
	for (int i = 0; i < r1; i++) {
		if (l2 <= r1) {
			c++;
			l2++;
		}
		else {
			break;
		}

	}
	if (l22 <= r1) {


		if (k >= l22 && k <= r1) {
			c--;
			cout << c << endl;

		}
		else if (l22 > r1 && l22 < l1) {
			cout << "0" << endl;
		}

		else {
			cout << c << endl;
		}
	}
	else {
		cout << "0" << endl;
	}
	system("pause");
}