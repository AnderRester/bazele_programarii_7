// BP8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int i,n;

    cin >>  n;
    
    vector<char> A;
    A.resize(n);

    for (i = 0; i < n; i++) {
        cin >> A[i];

        if (i%2 != 0)
        {
            cout << A[i] << " - par" << endl;
        }
    }
    for (i = 0; i < n; i++) {

        if (i % 2 == 0)
        {
            cout << A[i] << " - nepar" << endl;
        }
    }
}

