#include <iostream>

using namespace std;

typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} days;

/* prefix operator */
days& operator++ (days& d) {
    return d = static_cast<days>((static_cast<int>(d) + 1) % 7);
}

/* suffix operator, add extra parameter to distinguish from prefix parameter */
days operator++ (days& d, int) {
    days tmp = d;
    d = static_cast<days>((static_cast<int>(d) + 1) % 7);
    return tmp;
}

ostream &operator<< (ostream& out, const days& d) {

    switch(d) {
        case MONDAY    : out << "Monday"    ; break ;
        case TUESDAY   : out << "Tuesday"   ; break ;
        case WEDNESDAY : out << "Wednesday" ; break ;
        case THURSDAY  : out << "Thursday"  ; break ;
        case FRIDAY    : out << "Friday"    ; break ;
        case SATURDAY  : out << "Saturday"  ; break ;
        case SUNDAY    : out << "Sunday"    ; break ;
    }

    return out;
}

int main() {

    for(days d = MONDAY; d != SUNDAY; d++) {
        cout << d << "    ";
    }
    cout << endl;

    return 0;
}
