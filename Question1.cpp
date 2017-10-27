#include<iostream>

using namespace std;

int main()
{
	int a;
	unsigned int b;
	short int c;
	unsigned short int d;
	long int e;
	unsigned long int f;
	long long int g;
	unsigned long long int h;
	char i;
	unsigned char j;
	float k;
	double l;
	long double m;
	wchar_t n;
	int* A = &a;
        unsigned int* B = &b;
        short int* C = &c;
        unsigned short int* D = &d;
        long int* E =  &e;
        unsigned long int* F = &f;
        long long int* G = &g;
        unsigned long long int* H = &h;
        char* I = &i;
        unsigned char* J = &j;
        float* K= &k;
        double* L= &l;
        long double* M= &m;
        wchar_t* N = &n;
	cout << "Size of int = " << sizeof(a) << ". Size of int* = " << sizeof(A) << endl; 
	cout << "Size of unsigned int = " << sizeof(b) << ". Size of unsigned int* = " << sizeof(B) << endl;
	cout << "Size of short int = " << sizeof(c) << ". Size of short int* = " << sizeof(C) << endl;
	cout << "Size of unsigned short int = " << sizeof(d) << ". Size of unsigned short int* = " << sizeof(D) << endl;
	cout << "Size of long int = " << sizeof(e) << ". Size of long int* = " << sizeof(E) << endl;
	cout << "Size of unsigned long int = " << sizeof(f) << ". Size of unsigned long int* = " << sizeof(F) << endl;
	cout << "Size of long long int = " << sizeof(g) << ". Size of long long int* = " << sizeof(G) << endl;
	cout << "Size of unsigned long long int = " << sizeof(h) << ". Size of unsigned long long int* = " << sizeof(H) << endl;
	cout << "Size of char = " << sizeof(i) << ". Size of char* = " << sizeof(I) << endl;
	cout << "Size of unsigned char = " << sizeof(j) << ". Size of unsigned char* = " << sizeof(J) << endl;
	cout << "Size of float = " << sizeof(k) << ". Size of float* = " << sizeof(K) << endl;
	cout << "Size of double = " << sizeof(l) << ". Size of double* = " << sizeof(L) << endl;
	cout << "Size of long double = " << sizeof(m) << ". Size of long double* = " << sizeof(M) << endl;
	cout << "Size of wchar_t = " << sizeof(n) << ". Size of wchar_t* = " << sizeof(N);
	return 0;
}
