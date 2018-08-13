#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int a = 0, b = 1;
    cout << "a ="   << a
         << ", b =" << b << endl;
    swap(a, b);
    cout << "a ="   << a
         << ", b =" << b << endl;

    double c = 0.3, d = 1.7;
    cout << "c ="   << c
         << ", d =" << d << endl;
    swap(c, d);
    cout << "c ="   << c
         << ", d =" << d << endl;
    return 0;
}

inline void swap (int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

inline void swap (double &a, double &b) {
    double tmp = a;
    a = b;
    b = tmp;
}
