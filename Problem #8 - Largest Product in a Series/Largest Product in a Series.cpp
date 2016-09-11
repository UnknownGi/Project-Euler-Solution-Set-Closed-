#include<vector>
#include<fstream>
#include<iostream>
using namespace std;

int main ( ) {
	ifstream fin("Series.txt");
	
	char digit;
	vector<int> vector;
	while ( fin >> digit ) vector.push_back(digit - '0');
	
	fin.close();
	fin.open("input.txt");
	
	int multiplier; fin >> multiplier;
	
	static long long int product;
	for ( int i=0; i<vector.size()-multiplier; ++i ) {
		long long int result = 1;
	
		for ( int j=i; j<i+multiplier; ++j ) 
			result *= vector[j];
		
		if ( result > product ) product = result;
	}
	
	cout << "Product of " << multiplier << " Adjacent Number in Series is: " << product << endl;
	
	
	fin.close();
}

