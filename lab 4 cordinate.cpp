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

    return 0;
}