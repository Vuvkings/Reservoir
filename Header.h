#pragma once
#include <iostream>
using namespace std;

class resrvoir {
private:
	int a;
	int b;
	int h;
public: resrvoir(int a, int b, int h) : a{ a }, b{ b }, h{ h } {


}
	  
	  int square() {
		  int S = a * b;
		  return S;
	  }
	  int Volume() {
		  int V = a * b * h;
		  return V;
	  }
};

