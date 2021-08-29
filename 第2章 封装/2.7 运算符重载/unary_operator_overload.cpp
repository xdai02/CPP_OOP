#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Time {
public:
    Time(int hour, int minute, int second);
    void display();
    Time operator++();      // ǰ��++
    Time operator++(int);   // ����++

private:
    int hour;
    int minute;
    int second;
};

Time::Time(int hour, int minute, int second) 
    : hour(hour), minute(minute), second(second) {
}

void Time::display() {
    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second << endl;
}

// ǰ��++
Time Time::operator++() {
    second++;
    if(second == 60) {
        second %= 60;
        minute++;
        if(minute == 60) {
            minute %= 60;
            hour++;
            if(hour == 24) {
                hour = 0;
            }
        }
    }
    return Time(hour, minute, second);
}

// ����++
Time Time::operator++(int) {
    // ����ԭʼֵ
    Time time(hour, minute, second);
    second++;
    if(second == 60) {
        second %= 60;
        minute++;
        if(minute == 60) {
            minute %= 60;
            hour++;
            if(hour == 24) {
                hour = 0;
            }
        }
    }
    return time;    // ����ԭʼֵ
}

int main() {
    Time time(9, 21, 58);
    time.display();

    ++time;
    time.display();

    time++;
    time.display();
    return 0;
}