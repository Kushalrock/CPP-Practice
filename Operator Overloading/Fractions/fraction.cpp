#include <iostream>
using namespace std;

#include<iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction() {

		}

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const {
			return numerator;
		}

		int getDenominator() const {
			return denominator;
		}

		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		void add(Fraction const &f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();
		}

		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}

        // Operator Overloads

        // Pre Operator

        /* 
        Return by reference is used because if we try chaining the operator. Such as something like this 
        Fraction f3 = ++(++f1); Considering f1 is a fraction
        The first block inside the brackets will return a temporary memory and not the actual f1 variable.
        And the next ++ operation will occur on temporary memory instead of the actual f1 variable and will get stored
        inside f3 variable. Thus the f1 variable will be one step behind the f3 variable. To tackle this we are returning
        by reference. So that no temporary buffer memory will be created. 
        */
        Fraction& operator++(){                  
            numerator = numerator + denominator;
            simplify();

            return *this;
        }

        // Post operator

        // This function doesn't support chaining. Thus, no need of return by reference

        Fraction operator++(int){
            Fraction fnew(numerator, denominator);
            numerator = numerator + denominator;
            simplify();
            fnew.simplify();

            return fnew;
        }

        // += operator Return by reference
        Fraction& operator+=(Fraction &f2){
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + y * f2.numerator;
            numerator = num;
            denominator = lcm;
            simplify();
            return *this;
        }

};


int main() {
    Fraction f1(10,5);
    Fraction f2(15,4);

    Fraction const f3;
    cout<<f3.getNumerator()<<" "<<f3.getDenominator();
	return 0;
}

