#include<vector>
#include<sstream>
#include<fstream>
#include<iostream>
using namespace std;

vector<int> toVector ( int number ) { 
	vector<int> vector;
	
	while ( number != 0 ) {
		int remainder = number%10;
		number = (number-remainder)/10;
		
		vector.push_back(remainder);
	}
	
	return vector;
}

bool PalindromeCheck ( vector<int> vector ) { 
	for ( int i=0, j=vector.size()-1; i<vector.size()/2; ++i, --j ) {
		if ( vector[i] != vector[j] ) return false;
	}
	
	if ( vector.size() == 0 ) return false;
	else return true;
}

int main ( ) {
	ifstream fin("input.txt");
	
	int digit; fin >> digit;
	
	string numberString;
	for ( int i=0; i<digit; ++i ) numberString += '9';
	
	int number;
	stringstream(numberString) >> number;
	
	static int result;
	for ( int i=number; i>=0; --i ) {
		for ( int j=number; j>=0; --j ) {
			int product = i*j;
			
			vector<int> vector = toVector(product);
			if ( i*j > result && PalindromeCheck(vector) ) result = i*j;
		}
	}
	
	cout << "Largest Palindrome of " << digit << " Digit Multiplication is: " << result << endl;
	
	fin.close();
}

