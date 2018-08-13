#include <iostream>
#include <complex>

using namespace std;

int main(int argc, char *argv[]) {

    int a = 0, b = 1;
    cout << "a = "   << a
         << ", b = " << b << endl;
    swap(a, b);
    cout << "a = "   << a
         << ", b = " << b << endl;

    complex<double> c(0.3, 0.4), d(0.5, -1.3);
    cout << "c = "   << c
         << ", d = " << d << endl;
    swap(c, d);
    cout << "c = "   << c
         << ", d = " << d << endl;
    return 0;
}

template <class T>
inline void swap (T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}
