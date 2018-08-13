#include <iostream>
#include <complex>

using namespace std;

template <class T> T sum (T arr[], int count);

int main(int argc, char *argv[]) {

    int arr_int[4] = {0, 3, -1, 2};

    for (int i = 0; i < 4; ++i) {
        cout << "arr_int[" << i << "] = " << arr_int[i] << endl;
    }

    int sum_int = sum(arr_int, 4);
    cout << "sum = " << sum_int << endl << endl ;

    double arr_double[4] = {0.34, 3.1, -1.32, 2.2};

    for (int i = 0; i < 4; ++i) {
        cout << "arr_double[" << i << "] = " << arr_double[i] << endl;
    }

    double sum_double = sum(arr_double, 4);
    cout << "sum = " << sum_double << endl << endl;


    complex<double> arr_complex[4] = {complex<double>(0.34, 3), complex<double>(3.1, 34), complex<double>(343, -1.32), complex<double>(2.2, 3)};

    for (int i = 0; i < 4; ++i) {
        cout << "arr_complex[" << i << "] = " << arr_complex[i] << endl;
    }

    complex<double> sum_complex = sum(arr_complex, 4);
    cout << "sum = " << sum_complex << endl << endl;
    return 0;
}

template <class T>
T sum (T arr[], int count) {
    T sum = 0;

    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }

    return sum;
}
