#include <iostream>

using namespace std;

template <class T1, class T2>
void copy (const T1 src[], T2 dest[], int size) {

    for (int i = 0; i < size; ++i) {
        dest[i] = static_cast<T2>(src[i]);
    }

}

int main(int argc, char *argv[]) {

    double arr_double[4] = {0.4, 3.6, -1.3, 2.8};

    cout << "double array" << endl;

    for (int i = 0; i < 4; ++i) {
        cout << "arr_double[" << i << "] = " << arr_double[i] << endl;
    }

    cout << endl;

    cout << "copy to int array" << endl;

    int arr_int[4];

    copy(arr_double, arr_int, 4);

    for (int i = 0; i < 4; ++i) {
        cout << "arr_int[" << i << "] = " << arr_int[i] << endl;
    }

    return 0;
}

