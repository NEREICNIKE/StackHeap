/*
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctime>//Zaman fonk içeren C kütüphanesi
#include <cstdlib>
#include "windows.h"
*/
#include <iostream>
using namespace std;

int x=5, y=10, z=15;	//Global



int main()
{
	cout<<"x="<<x<<" >> adresi "<<&x<<endl;
	cout<<"y="<<y<<" >> adresi "<<&y<<endl;
	cout<<"z="<<z<<" >> adresi "<<&z<<endl;
	cout<<"x-y-z Global degiskenler ve adresleri HEAP'ten alir \n"<<endl;
	
	int a=10, b=20, c=30;  //local
	
	cout<<"a="<<a<<" >> adresi "<<&a<<endl;
	cout<<"b="<<b<<" >> adresi "<<&b<<endl;
	cout<<"c="<<c<<" >> adresi "<<&c<<endl;
	cout<<"a-b-c LOCAL degiskenler ve adresleri STACK'ten alinir... \n"<<endl;
	
	int *d = &a;
	int *e = &b;
	int *f = &c;
	
	cout<<"d="<<d<<" >> adresi "<<&d<<endl;
	cout<<"e="<<e<<" >> adresi "<<&e<<endl;
	cout<<"f="<<f<<" >> adresi "<<&f<<endl<<endl;
	
	int *m = new int(100);
	int *n = new int(200);
	int *g = new int(300);
	
	cout<<"m="<<m<<" >> m' nin kendi adresi "<<&m<<endl;
	cout<<"n="<<n<<" >> n' nin kendi adresi "<<&n<<endl;
	cout<<"g="<<g<<" >> g' nin kendi adresi "<<&g<<endl<<endl;
	

	system("PAUSE");
	return 0;
}

