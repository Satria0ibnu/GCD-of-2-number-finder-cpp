#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	cout << "Welcome to Greatest Common Divisor Finder!" << endl;
	cout << "Enter 2 number please!" << endl;
	int n1, n2;
	cin >> n1 >> n2;
	
	int gcd = 1; //min gcd is 1
	int k = 1 ; // while counter
	
	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0  &&  n2 % k == 0)
			gcd = k;
		k++;
	}
	
	cout << "GCD of " << n1 << " and " << n2 << " is " << gcd << endl;


	return 0;
}