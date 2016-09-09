#include<fstream>
#include<iostream>
using namespace std;

int main ( ) {
	ifstream fin("input.txt");
	
	int limit; fin >> limit;
	
	static int total; 
	int currentNumber = 0, previousNumber = 1;
	
	while ( currentNumber < limit ) {
		if ( currentNumber%2 == 0 ) total += currentNumber;
		
		int temp = currentNumber;
		currentNumber = previousNumber;
		previousNumber += temp;
	}
	
	cout << "Sum of Even Numbers in Fibonacci Series below " << limit << " is: " << total << endl;
	
	fin.close();
}

