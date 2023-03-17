#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

long long int stepen(int a,int m)
{
int s=1;
int j;
for (j=0; j<m; j++)
{
s=s*a;
}
return s;
}

int main()
{
int m,n,p;
int a,b,c;
ofstream myfile;
myfile.open ("example.txt");
////////////////////////////////
for (m=3; m<21; m++)
{
for (n=3; n<21; n++)
{
for (p=3; p<21; p++)
{
for (a=1; a<50; a++)
{
for (b=1; b<50; b++)
{
for (c=1; c<50; c++)
{
if (stepen(a,m)+stepen(b,n)==stepen(c,p))
{
cout << a << "na" << m << "plus" << b << "na" << n << "jednako" << c << "na" << p <<"!!!";
cout << stepen(a,m) << stepen(b,n) << stepen(c,p) << "\n";

myfile << a << "na" << m << "plus" << b << "na" << n << "jednako" << c << "na" << p << "!!!";
myfile << stepen(a,m) << stepen(b,n) << stepen(c,p) << "\n";
}
else
{
cout << a << "na" << m << "plus" << b << "na" << n << " " << c << "na" << p << "Nista..." << "\n";
cout << stepen(a,m) << stepen(b,n) << stepen(c,p) << "\n";

}
}
}
}
}
}
}
system("PAUSE");
myfile.close();
}
