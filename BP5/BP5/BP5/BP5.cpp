// BP5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cin >> n;

    for(i = 0; i < n; i++){
        cout << i << " < n" << endl;
        //cout << "" << endl;
        if (i%(n%10 + n/10) == 0)
        {
            cout << i << " dev" << endl;
        }
    }
}