#include<iostream>

using namespace std;

int main()
{
	int i;
	char str[15]= "ABHINAV ShARMA", *a=str;
	for(i=0; i<15; i++)
		cout << str[i];
	for(i=0; i<15; i++)
	{
		cout << *a;
		a++;
	}	
	return 0;
}
