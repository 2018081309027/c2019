#include<stdio.h>
#include<iostream>
using namespace std;

int t = 0;
void AtoB(int x);
void BtoC(int x);
void CtoB(int x);
void BtoA(int x);
void CtoA(int x);

int AtoC(int x)
{
	if (x == 2)
	{
		cout << "A��B\nA��C\nB��C" << endl;
		t = t + 3;
	}
	else
	{
		AtoB(x - 1);
		cout <<  "A��C" << endl;
		BtoC(x - 1);
		t++;
	}
	return t;
}

void AtoB(int x)
{
	if (x == 2)
	{
		cout << "A��C\nA��B\nC��B" << endl;
		t = t + 3;
	}
	else
	{
		AtoC(x - 1);
		cout << "A��B" << endl;
		CtoB(x - 1);
		t++;
	}
	return;
}

void BtoC(int x)
{
	if (x == 2)
	{
		cout << "B��A\nB��C\nA��C" << endl;
		t = t + 3;
	}
	else
	{
		BtoA(x - 1);
		cout << "B��C" << endl;
		AtoC(x - 1);
		t++;
	}
	return;
}

void CtoB(int x)
{
	if (x == 2)
	{
		cout << "C��A\nC��B\nA��B" << endl;
		t = t + 3;
	}
	else
	{
		CtoA(x - 1);
		cout <<  "C��B" <<endl;
		AtoB(x - 1);
		t++;
	}
	return;
}

void BtoA(int x)
{
	if (x == 2)
	{
		cout << "B��C\nB��A\nC��A" << endl;
		t = t + 3;
	}
	else
	{
		BtoC(x - 1);
		cout << "B��A" << endl;
		CtoA(x - 1);
		t++;
	}
	return;
}

void CtoA(int x)
{
	if (x == 2)
	{
		cout << "C��B\nC��A\nB��A" << endl;
		t = t + 3;
	}
	else
	{
		CtoB(x - 1);
		cout << "C��A" << endl;
		BtoA(x - 1);
		t++;
	}
	return;
}