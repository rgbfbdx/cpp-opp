#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;   
    int denominator; 

public:
    Fraction(int n = 0, int d = 1) {
        if (d == 0) {
            cout << "Знаменник не може бути 0!" << endl;
            d = 1;
        }
        numerator = n;
        denominator = d;
    }

    void input() {
        cout << "Введіть чисельник: ";
        cin >> numerator;
        cout << "Введіть знаменник: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Знаменник не може бути 0, замінюю на 1" << endl;
            denominator = 1;
        }
    }

    void print() {
        cout << numerator << "/" << denominator;
    }

    Fraction add(Fraction b) {
        Fraction res;
        res.numerator = numerator * b.denominator + b.numerator * denominator;
        res.denominator = denominator * b.denominator;
        return res;
    }

    Fraction sub(Fraction b) {
        Fraction res;
        res.numerator = numerator * b.denominator - b.numerator * denominator;
        res.denominator = denominator * b.denominator;
        return res;
    }

    Fraction mul(Fraction b) {
        Fraction res;
        res.numerator = numerator * b.numerator;
        res.denominator = denominator * b.denominator;
        return res;
    }

    Fraction div(Fraction b) {
        Fraction res;
        res.numerator = numerator * b.denominator;
        res.denominator = denominator * b.numerator;
        return res;
    }
};

int main() {
    Fraction a, b;
    cout << "Введення першого дробу:\n";
    a.input();
    cout << "Введення другого дробу:\n";
    b.input();

    Fraction sum = a.add(b);
    Fraction diff = a.sub(b);
    Fraction prod = a.mul(b);
    Fraction quot = a.div(b);

    cout << "\nРезультати:\n";
    cout << "a + b = "; sum.print(); cout << endl;
    cout << "a - b = "; diff.print(); cout << endl;
    cout << "a * b = "; prod.print(); cout << endl;
    cout << "a / b = "; quot.print(); cout << endl;

    return 0;
}
