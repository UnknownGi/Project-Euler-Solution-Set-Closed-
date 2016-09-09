#include<fstream>
#include<iostream>
using namespace std;


int main ( ) {
	ifstream fin("input.txt");
	
	int limit; fin >> limit;
	
	bool found;
	int number = limit;
	
	do { 
		found = true;
		for ( int i=1; i<=limit && found; ++i ) {
			if ( number%i != 0 ) found = false;
		}
		
	    ++number;
	} while ( !found );
	
	cout << "Smallest Number Divisible by all from 1 to " << limit << " is: " << --number << endl;
	
	fin.close();
}

