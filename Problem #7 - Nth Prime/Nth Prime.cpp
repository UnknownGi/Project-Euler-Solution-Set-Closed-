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
	
	int N; fin >> N;
	
	int number = 2;
	static int primeCount;
	while ( primeCount != N ) {
		if ( primeCheck(number) ) ++primeCount; 
		
		++number;
	}
	
	cout << N << "th Prime: " << --number << endl;
	
	fin.close();
}

