// BP6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void perf(int n)
{
	int i, m, s = 0;


	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			//cout << i << endl;
			s += i;
			if (s == n) {
				m = s;
			}
			m = s;
		}
	}
	if (s == n) {
		m = s;
		if (n % m == 0)
		{
			cout << n << " - perf" << endl;
		}
	}
	else {
		cout << "NOPE" << endl;
	}
}


int main()
{
	int n;
	cin >> n;

	perf(n);
}