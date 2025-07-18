#include <iostream>
#include <string>
using namespace std;

class ttime12 {
private:
    int hr, mint, AMPM; // 0 → AM, 1 → PM
    static int count;
public:
    ttime12() : hr(0), mint(0), AMPM(0) { ++count; }

    ttime12(int h, int m, int ap) : hr(h), mint(m), AMPM(ap) { ++count; }

    void display() const {
        cout << "Duration (12-hour): ";
        cout << hr << ":" << (mint < 10 ? "0" : "") << mint;
        cout << (AMPM == 0 ? " AM" : " PM") << endl;
    }
};
int ttime12::count = 0;

class ttime24 {
private:
    int hr, mint;
    static int count;
public:
    ttime24() : hr(0), mint(0) { ++count; }

    ttime24(int h, int m) : hr(h), mint(m) { ++count; }

    void input() {
        cout << "Hour: "; cin >> hr;
        cout << "Minute: "; cin >> mint;
    }

    int convert2mint() const {
        return hr * 60 + mint;
    }

    ttime24 operator - (ttime24 enT) {
        ttime24 diff;
        int dur = this->convert2mint() - enT.convert2mint();
        if (dur < 0) dur += 24 * 60; // handle midnight wraparound
        diff.hr = dur / 60;
        diff.mint = dur % 60;
        return diff;
    }

    void display() const {
        cout << "Duration (24-hour): ";
        cout << hr << ":" << (mint < 10 ? "0" : "") << mint << endl;
    }

    operator ttime12() {
        int h = hr;
        int ap = 0; // AM
        if (h >= 12) {
            ap = 1;
            if (h > 12) h -= 12;
        }
        if (h == 0) h = 12;
        return ttime12(h, mint, ap);
    }
};
int ttime24::count = 0;

int main() {
    const int SESSIONS = 3;
    ttime24 entryT[SESSIONS] = { {9, 0}, {13, 45}, {18, 15} };
    ttime24 exitT[SESSIONS]  = { {11, 30}, {16, 50}, {21, 10} };
    ttime24 duration24[SESSIONS];
    ttime12 duration12[SESSIONS];
    string labels[SESSIONS] = { "Morning Shift", "Afternoon Shift", "Evening Shift" };

    for (int i = 0; i < SESSIONS; ++i) {
        duration24[i] = exitT[i] - entryT[i];
        duration12[i] = duration24[i];

        cout << "\n--- " << labels[i] << " ---\n";
        duration24[i].display();
        duration12[i].display();
    }

    return 0;
}