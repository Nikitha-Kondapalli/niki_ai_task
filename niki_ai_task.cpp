
#include <iostream>
using namespace std;
#define MAX 1000000007
unsigned long countStrings(unsigned long n)
{
	unsigned long a[n], b[n];
	a[0] = b[0] = 1;
	for (unsigned long i = 1; i < n; i++)
	{
		a[i] = ((a[i-1]%MAX) + (b[i-1]%MAX));
		b[i] = a[i-1];
	}
	return a[n-1] + b[n-1];
}

int main()
{
	unsigned long n;
	cin >>n;
	cout << countStrings(n) << endl;
	return 0;
}

