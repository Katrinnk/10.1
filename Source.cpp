#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ProcessTXT1(char* fname) 
{
	ifstream fin(fname); 
	string s; 
	int k = 0; 
	while (getline(fin, s)) 
	{ 
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == 'B' || s[i] == 'A' || s[i] == 'S' || s[i]=='I' || s[i]=='C')
				k++;
	}
	return k;
}
int main()
{
	char fname[100];
	cout << "enter file name 1: "; cin >> fname;
	cout << "k(+-=) = " << ProcessTXT1(fname) << endl;
	return 0;
}