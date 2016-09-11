#include<math.h>
#include<fstream>
#include<iostream>
using namespace std;

bool primeCheck ( int number ) { 
	for ( int i=2; i<=sqrt(number); ++i ) {
		if ( number%i == 0 ) return false;
	}
	
	return true;
}

int main ( ) {
	ifstream fin("input.txt");
	
	int limit; fin >> limit;
	
	static long long int sum;
	for ( int i=2; i<limit; ++i ) {
		if ( primeCheck(i) ) sum += i;
	}
	
	cout << "Summation of Prime Number Below " << limit << " is: " << sum << endl;
	
	fin.close();
}

