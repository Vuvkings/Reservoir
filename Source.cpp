#include <iostream>
#include "Header.h";
using namespace std;

int main() {
	resrvoir pond_1{10,10,5};
	cout <<"Square1:" << pond_1.square() << endl;
	cout << "Volume1:" << pond_1.Volume() << endl;
	cout << endl;
	resrvoir pond_2{ 20,8,10 };
	cout << "Square2:" << pond_2.square() << endl;
	cout << "Volume2:" << pond_2.Volume() << endl;
	if (pond_1.square() > pond_2.square()) {

		cout << "pond_1 > pond_2" ;
	}
	else{ cout << "pond_2 > pond_1"; }

}