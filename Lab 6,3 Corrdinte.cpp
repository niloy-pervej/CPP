#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

class Coordinate {
protected:
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

class LabeledCoordinate : public Coordinate {
    string label;
public:
    void setLabeledCoordinate(const string& lbl, float a, float b) {
        label = lbl;
        set(a, b);
    }

    string getLabel() const {
        return label;
    }

    void show() const {
        string formattedLabel = label;
        formattedLabel[0] = toupper(formattedLabel[0]);
        cout << "Label: " << formattedLabel << " (Length: " << label.size() << ")\n";
        cout << "Coordinate: ";
        display();
        cout << "\n\n";
    }
};

int main() {
    LabeledCoordinate coords[SIZE];

    cout << "Enter information for " << SIZE << " coordinates:\n";
    for (int i = 0; i < SIZE; i++) {
        string lbl;
        float x, y;
        cout << "\nEntry " << i + 1 << " label: ";
        getline(cin, lbl);
        cout << "Enter coordinates (x y): ";
        cin >> x >> y;
        cin.ignore();
        coords[i].setLabeledCoordinate(lbl, x, y);
    }

    cout << "\n\n--- Stored Coordinates ---\n";
    for (int i = 0; i < SIZE; i++) {
        coords[i].show();
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