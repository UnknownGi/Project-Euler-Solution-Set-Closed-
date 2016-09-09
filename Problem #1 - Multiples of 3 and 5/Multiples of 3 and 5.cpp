#include<fstream>
#include<iostream>
using namespace std;

int main ( ) {
	ifstream fin("input.txt");
	
	int limit; fin >> limit;
	
	static int total;
	for ( int i=0; i<limit; ++i ) { 
		if ( i%3==0 || i%5==0 ) total += i;
	}
	
	cout << "Sum of Multiples of 3 and 5 below " << limit << " is: " << total;
	fin.close();
}

