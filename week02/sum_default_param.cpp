#include <iostream>
#include <complex>

using namespace std;

template <class T>
T sum (T arr[], int count, T s = 0) {

    for (int i = 0; i < count; ++i) {
        s += arr[i];
    }

    return s;
}

int main(int argc, char *argv[]) {

    int arr_int[4] = {0, 3, -1, 2};

    cout << "default : s = 0" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "arr_int[" << i << "] = " << arr_int[i] << endl;
    }

    int sum_int = sum(arr_int, 4);
    cout << "sum = " << sum_int << endl << endl ;

    cout << "s = 10" << endl;
    int sum_int2 = sum(arr_int, 4, 10);
    cout << "sum = " << sum_int2 << endl << endl ;

    return 0;
}

