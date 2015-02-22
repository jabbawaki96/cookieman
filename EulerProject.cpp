// EulerProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Multiples.h"
#include <iostream>
using namespace std;

int main()
{
	Multiples mults = Multiples();
	cout << "Sum of Multiples of 3 and 5 up to 10: " << mults.findMultiple(3, 5, 1000) << endl;
	system("pause");
	return 0;
}
