#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

class Complex {
protected:
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

class LabeledComplex : public Complex {
    string label;
public:
    void setData(const string& lbl, float r, float i) {
        label = lbl;
        set(r, i);
    }

    string getLabel() const {
        return label;
    }

    void display() const {
        cout << "Label: " << label << "\n";
        cout << "Complex: " << *this << "\n\n";
    }

    LabeledComplex operator+(const LabeledComplex& other) const {
        LabeledComplex result;
        result.setData(label + "+" + other.label, real + other.real, imag + other.imag);
        return result;
    }
};

int main() {
    LabeledComplex numbers[SIZE];

    cout << "Enter information for " << SIZE << " complex numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        string lbl;
        float realPart, imagPart;

        cout << "\nEntry " << i + 1 << " label: ";
        getline(cin, lbl);

        cout << "Enter complex number (real imag): ";
        cin >> realPart >> imagPart;
        cin.ignore();

        numbers[i].setData(lbl, realPart, imagPart);
    }

    cout << "\n\n--- Stored Complex Numbers ---\n";
    for (int i = 0; i < SIZE; i++) {
        numbers[i].display();
    }

    LabeledComplex sum = numbers[0] + numbers[1];
    cout << "Sum of first two complex numbers (" << numbers[0].getLabel()
         << " + " << numbers[1].getLabel() << "):\n";
    sum.display();

    return 0;
}