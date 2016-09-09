#include<math.h>
#include<fstream>
#include<iostream>
using namespace std;

bool ifPrime ( int number ) {
	for ( long long int i=2; i<sqrt(number); ++i ) {
		if ( number%i == 0 ) return false;
	}
	
	return true;
}

int main ( ) {
	ifstream fin("input.txt");
	
	long long int number; fin >> number;
	static long long int largestPrime;
	
	bool found = false;
	for ( long long int i=sqrt(number); i>=0 && !found; i=i-1 ) {
		if ( number%i==0 && ifPrime(i) ) {
			largestPrime = i;
			found = true;
		}
	}
	
	cout << "Largest Prime for " << number << " is: " << largestPrime << endl;
	
	fin.close();
}

