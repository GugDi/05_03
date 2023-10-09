#include <iostream>
#include "TLogElement.h"

using namespace std;

int main() {
	TLogElement el;
	int A, B;


	cout << " A B !(A&B)" << endl;
	cout << "-------------" << endl;

    for (A = 0; A <= 1; A++) {
        el.FIn1 = A;
        for (B = 0; B <= 1; B++) {
            el.FIn2 = B;
            el.FRes = !(el.FIn1 && el.FIn2);
            cout << " " << A << " " << B << " " << el.FRes << endl;
        }
    }

	return 0;
};