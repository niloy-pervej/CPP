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

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
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
        cout << "Complex: " << numbers[i] << "\n\n";
    }

    Complex sum = numbers[0] + numbers[1];
    cout << "Sum of first two complex numbers: " << sum << endl;

    return 0;
}