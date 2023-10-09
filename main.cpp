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
    }

	return 0;
};