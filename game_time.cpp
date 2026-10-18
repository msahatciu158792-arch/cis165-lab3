#include <iostream>
using namespace std;

int main() {
    const int LEVEL_ONE_MINUTES = 78;
    const int LEVEL_TWO_MINUTES = 144;

    int level_one_hours = LEVEL_ONE_MINUTES / 60;
    int level_one_remaining_minutes = LEVEL_ONE_MINUTES % 60;

    int level_two_hours = LEVEL_TWO_MINUTES / 60;
    int level_two_remaining_minutes = LEVEL_TWO_MINUTES % 60;

    int difference_minutes = LEVEL_TWO_MINUTES - LEVEL_ONE_MINUTES;
    int difference_hours = difference_minutes / 60;
    int difference_remaining_minutes = difference_minutes % 60;

    cout << "Level 1 time: " << level_one_hours << " hour(s) and "
         << level_one_remaining_minutes << " minute(s)." << endl;
    cout << "Level 2 time: " << level_two_hours << " hour(s) and "
         << level_two_remaining_minutes << " minute(s)." << endl;
    cout << "Difference (Level 2 - Level 1): " << difference_hours
         << " hour(s) and " << difference_remaining_minutes
         << " minute(s)." << endl;

    return 0;
}
