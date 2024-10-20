#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[20] = { 11, 23, 43, 14, 55, 61, 27, 58, 19, 19, 15, 33, 12, 78, 40, 35, 67, 90, 4, 8 };
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 10; ++i) {
        sum1 += arr[i];
    }

    for (int i = 10; i < 20; ++i) {
        sum2 += arr[i];
    }

    int difference = sum1 - sum2;

    cout << "Сума першої половини: " << sum1 << endl;
    cout << "Сума другої половини: " << sum2 << endl;
    cout << "Різниця між сумами: " << difference << endl;

    return 0;
}
