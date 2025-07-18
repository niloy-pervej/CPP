#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

class Complex {
    float real, imag;
public:
    void set(float r, float i) {
        real = r;
        imag = i;
    }
    void display() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex numbers[SIZE];
    string labels[SIZE];

    cout << "Enter information for " << SIZE << " complex numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEntry " << i + 1 << " label: ";
        getline(cin, labels[i]);

        float realPart, imagPart;
        cout << "Enter complex number (real imag): ";
        cin >> realPart >> imagPart;
        numbers[i].set(realPart, imagPart);

        cin.ignore();
    }

    cout << "\n\n--- Stored Complex Numbers ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Label: " << labels[i] << "\n";
        cout << "Complex: ";
        numbers[i].display();
        cout << "\n\n";
    }

    return 0;
}