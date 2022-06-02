
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

double func(double x)
{
	return pow(x,3) + 2*x + 4;
}

double derivFunc(double x)
{
	return 3 * (x*x) + 2;
}

void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	int n=0;
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		x = x - h;
		n++;
	}
	

	cout << "Tenglamaning ildiz qiymati : " << x;
	cout << "\nTenglamaning ildizini topishdagi qadamlar soni : " << n;
}


// Driver program to test above
int main()
{
	double x0 = -1; // Initial values assumed
	newtonRaphson(x0);
	return 0;
}
