#include<iostream>

using namespace std;

int main()
{
        int a , b;
        int* p = &a;
        b = *p;
        cout<< "Part a "<< endl << a << endl << b << endl << *p << endl;
	a = 2;
	b = 3;
	cout<< "Part b "<< endl << a << endl << b << endl << *p << endl;
	p = &b;
	cout<< "Part c " << endl << a << endl << b << endl << *p << endl;
        return 0;
}
