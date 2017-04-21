//
//  main.cpp
//  uva_12019
//
//  Created by Tzu-ting on 21/04/2017.
//  Copyright © 2017 Tzu-ting. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

const string weekday[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

const int month_day[] = {
    0,
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31
};

int main(int argc, const char * argv[]) {
    int round;
    cin >> round;
    cin.ignore();

    for (int i=0; i<round; i++){
        int month, day;
        cin >> month >> day;
        cin.ignore();

        int offset = day +5;
        for(int m=0;m<month; m++){
            offset+=month_day[m];
        }

        cout << weekday[offset%7] << endl;
    }

    return 0;
}
