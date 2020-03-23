#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double m, n, a = 0;
	while (cin >> m) {
		for (double i = 0; i < m; i++) {
			cin >> n;
			for (double j = 1; j <= n; j++) {
				if ((int)j % 2 == 1)
					a = a + 1 / j;
				else
					a = a - 1 / j;
			}
			cout <<fixed<<setprecision(2)<< a << endl;
			a = 0;
		}
	}
}
