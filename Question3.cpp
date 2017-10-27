#include<iostream>

using namespace std;

int main()
{
	int i;
	float x[10] , *X=x;
	cout << " Enter elements:	";
	for( i=0; i<10; i++)
		cin >> x[i];
	for( i=0; i<10; i++)
		cout << x[i] << endl;
	for( i=0; i<10; i++)
	{
		cout << *X << endl;
		X++;
	}
	return 0;
} 
