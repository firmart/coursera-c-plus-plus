#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int a = 0, b = 1;
    cout << "a ="   << a
         << ", b =" << b << endl;
    swap(a, b);
    cout << "a ="   << a
         << ", b =" << b << endl;
    return 0;
}

inline void swap (int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
