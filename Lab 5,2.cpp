#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

class Coordinate {
    float x, y;
public:
    void set(float a, float b) {
        x = a;
        y = b;
    }

    bool operator==(const Coordinate& other) const {
        return (x == other.x) && (y == other.y);
    }

    Coordinate& operator++() {
        ++x;
        ++y;
        return *this;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Coordinate coords[SIZE];
    string labels[SIZE];

    cout << "Enter information for " << SIZE << " coordinates:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEntry " << i + 1 << " label: ";
        getline(cin, labels[i]);

        float x, y;
        cout << "Enter coordinates (x y): ";
        cin >> x >> y;
        coords[i].set(x, y);
        cin.ignore();
    }

    cout << "\n\n--- Stored Coordinates ---\n";
    for (int i = 0; i < SIZE; i++) {
        string label = labels[i];
        label[0] = toupper(label[0]);
        cout << "Label: " << label << " (Length: " << labels[i].size() << ")\n";
        cout << "Coordinate: ";
        coords[i].display();
        cout << "\n\n";
    }

    if (coords[0] == coords[1]) {
        cout << "The first and second coordinates are equal.\n";
    } else {
        cout << "The first and second coordinates are different.\n";
    }

    ++coords[2];
    cout << "After incrementing third coordinate: ";
    coords[2].display();
    cout << endl;

    return 0;
}