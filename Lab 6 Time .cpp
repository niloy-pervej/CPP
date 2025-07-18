#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Time {
protected:
    int hours, minutes, seconds;
    static int timeCount;
    const int maxHours;

public:
    Time() : hours(0), minutes(0), seconds(0), maxHours(24) { timeCount++; }

    void input() {
        cout << "Enter hours: "; cin >> hours;
        cout << "Enter minutes: "; cin >> minutes;
        cout << "Enter seconds: "; cin >> seconds;

        if (hours >= maxHours || hours < 0 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
            cout << "Invalid time. Enter again." << endl;
            input();
        }
    }

    void output() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    int toSecond() const {
        return (hours * 3600 + minutes * 60 + seconds);
    }

    static int getTimeCount() {
        return timeCount;
    }

    void compareTime(const Time& t) {
        if (toSecond() > t.toSecond())
            cout << "This time is greater." << endl;
        else if (toSecond() < t.toSecond())
            cout << "The other time is greater." << endl;
        else
            cout << "Both times are equal." << endl;
    }

    void timeDuration(const Time& t1, const Time& t2) {
        int total1 = t1.toSecond();
        int total2 = t2.toSecond();
        int duration = abs(total1 - total2);

        hours = duration / 3600;
        minutes = (duration % 3600) / 60;
        seconds = duration % 60;
    }
};

int Time::timeCount = 0;

class ExtendedTime : public Time {
public:
    string getFormattedTime() const {
        string am_pm = (hours >= 12) ? "PM" : "AM";
        int displayHour = (hours % 12 == 0) ? 12 : hours % 12;
        return to_string(displayHour) + ":" + 
               (minutes < 10 ? "0" : "") + to_string(minutes) + ":" +
               (seconds < 10 ? "0" : "") + to_string(seconds) + " " + am_pm;
    }

    bool isAfternoon() const {
        return hours >= 12;
    }
};

int main() {
    ExtendedTime t1, t2, duration;

    t1.input();
    t2.input();

    duration.timeDuration(t1, t2);

    cout << "\n-- Entered Times --" << endl;
    t1.output();
    t2.output();
    cout << "Formatted Time 1: " << t1.getFormattedTime() << endl;
    cout << "Formatted Time 2: " << t2.getFormattedTime() << endl;

    cout << "\n-- Duration --" << endl;
    duration.output();

    cout << "\nTotal Time objects: " << Time::getTimeCount() << endl;

    t1.compareTime(t2);

    cout << (t1.isAfternoon() ? "First time is in the afternoon." : "First time is in the morning.") << endl;

    return 0;
}