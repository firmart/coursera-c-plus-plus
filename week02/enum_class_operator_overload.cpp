#include <iostream>

using namespace std;

enum class WeekDay : int {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

/* prefix operator */
WeekDay& operator++ (WeekDay &d) {
    return d = static_cast<WeekDay>((static_cast<int>(d) + 1) % 7);
}

/* suffix operator, add extra parameter to distinguish from prefix parameter */
WeekDay operator++ (WeekDay &d, int) {
    WeekDay tmp = d;
    d = static_cast<WeekDay>((static_cast<int>(d) + 1) % 7);
    return tmp;
}

ostream &operator<< (ostream &out, const WeekDay &d) {

    switch (d) {
        case WeekDay::MONDAY    : out << "Monday"; break;
        case WeekDay::TUESDAY   : out << "Tuesday"; break;
        case WeekDay::WEDNESDAY : out << "Wednesday"; break;
        case WeekDay::THURSDAY  : out << "Thursday"; break;
        case WeekDay::FRIDAY    : out << "Friday"; break;
        case WeekDay::SATURDAY  : out << "Saturday"; break;
        case WeekDay::SUNDAY    : out << "Sunday"; break;
    }

    return out;
}

int main() {

    for(WeekDay d = WeekDay::MONDAY; d != WeekDay::SUNDAY; d++) {
        cout << d << "    ";
    }
    cout << endl;

    return 0;
}
