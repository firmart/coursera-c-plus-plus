#include <iostream>

using namespace std;

typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} days;

inline days operator++ (days d) {
    return static_cast<days>((static_cast<int>(d) + 1) % 7);
}

ostream &operator<< (ostream& out, const days& d) {

    switch(d) {
        case MONDAY    : out << "Monday"; break;
        case TUESDAY   : out << "Tuesday"; break;
        case WEDNESDAY : out << "Wednesday"; break;
        case THURSDAY  : out << "Thursday"; break;
        case FRIDAY    : out << "Friday"; break;
        case SATURDAY  : out << "Saturday"; break;
        case SUNDAY    : out << "Sunday"; break;
    }

    return out;
}

int main() {

    days d = MONDAY, e;
    e = ++d;
    
    cout << d << "\t" << e << endl;

    return 0;
}
