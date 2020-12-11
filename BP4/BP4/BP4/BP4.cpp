// BP4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int i,j;

    for (i = 0; i <= 9; i++) {
        cin >> num[i];
    }
    int s = 0;
    for (j = 0; j <= 9; j++) {
        if (num[j] > 0) {
            s = (s + num[j]);
            cout << num[j] << " - elem " << j << " - number" << endl;
        }
    }
    cout << s << " - summ" << endl;
}