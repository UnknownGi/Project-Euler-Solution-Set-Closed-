#include<fstream>
#include<iostream>
using namespace std;


int main ( ) {
	ifstream fin("input.txt");
	
	int max; fin >> max;
	
	static int sumOfSquare, squareOfSum;
	for ( int i=1; i<=max; ++i ) {
		sumOfSquare += (i*i);
		squareOfSum += i;
	}
	
	squareOfSum *= squareOfSum;
	
	cout << "Difference B/w Sq. of Sum and Sum of Sq. from 1 to " << max << " is: " << squareOfSum-sumOfSquare << endl;
	
	fin.close();
}

