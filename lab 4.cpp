#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3; // number of entries

// Coordinate class
class Coordinate {
    float x, y;
public:
    void set(float a, float b) { x = a; y = b; }
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

// Time class
class Time {
    int hour, minute, second;
public:
    void set(int h, int m, int s) { hour = h; minute = m; second = s; }
    void display() const {
        cout << hour << ":" << minute << ":" << second;
    }
};

// Complex number class
class Complex {
    float real, imag;
public:
    void set(float r, float i) { real = r; imag = i; }
    void display() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Coordinate coords[SIZE];
    Time times[SIZE];
    Complex numbers[SIZE];
    string labels[SIZE];

    cout << "Enter information for " << SIZE << " entries:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEntry " << i + 1 << " label: ";
        getline(cin, labels[i]);

        float x, y, r, iPart;
        int h, m, s;

        cout << "Enter coordinates (x y): ";
        cin >> x >> y;
        coords[i].set(x, y);

        cout << "Enter time (h m s): ";
        cin >> h >> m >> s;
        times[i].set(h, m, s);

        cout << "Enter complex number (real imag): ";
        cin >> r >> iPart;
        numbers[i].set(r, iPart);

        cin.ignore(); // clear input buffer for next label
    }

    cout << "\n\n--- Stored Entries ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Label: " << labels[i] << "\n";
        cout << "Coordinate: "; coords[i].display(); cout << "\n";
        cout << "Time: "; times[i].display(); cout << "\n";
        cout << "Complex: "; numbers[i].display(); cout << "\n\n";
    }

    return 0;
}