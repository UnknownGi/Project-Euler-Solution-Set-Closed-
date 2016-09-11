#include<math.h>
#include<iostream>
using namespace std;

int main ( ) {
	bool found = false;
	for ( int a=1; a<=1000 && !found; ++a ) {
		for ( int b=1; b<=1000 && !found; ++b ) { 
			for ( int c=1; c<=1000 && !found; ++c ) {
				if ( a<b && b<c && a+b+c == 1000 ) {
					if ( ((a*a)+(b*b)) == (c*c) ) {
						found = true;
						cout << "Pythagorean Triplet Product: " << a*b*c << endl;
						cout << "Pythagorean Triplet for a: " << a << " b: " << b << " c: " << c << endl;
					}
				}
			}
		}
	}
}

