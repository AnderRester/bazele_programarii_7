// BP7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void num(int k) {
    if (k >= 100 && k <= 9999999) {
        if (k % 10 > 0) {
            if (k % 100 > 0) {
                if (k % 1000 > 0) {
                    if (k % 10000 > 0) {
                        if (k % 100000 > 0) {
                            if (k % 1000000 > 0) {
                                cout << k << "It's working";
                            }
                            else cout << "Error" << endl;
                        }
                        else cout << "Error" << endl;
                    }
                    else cout << "Error" << endl;
                }
                else cout << "Error" << endl;
            }
            else cout << "Error" << endl;
        }
        else cout << "Error" << endl;
    }
    else
        cout << "Error" << endl;
}

int main()
{
    int k;
    cin >> k;

    num(k);

    return(0);
}