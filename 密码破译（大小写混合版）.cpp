#include<iostream>
#include<cstring>
using namespace std;
char s[999];
int main()
{
	gets(s);
	for(int i=0;i<strlen(s);i++){
	if(s[i]=='A')cout<<"V";
	else if(s[i]=='B')cout<<"W";
	else if(s[i]=='C')cout<<"X";
	else if(s[i]=='D')cout<<"Y";
	else if(s[i]=='E')cout<<"Z";
	else if(s[i]=='F')cout<<"A";
	else if(s[i]=='G')cout<<"B";
	else if(s[i]=='H')cout<<"C";
	else if(s[i]=='I')cout<<"D";
	else if(s[i]=='J')cout<<"E";
	else if(s[i]=='K')cout<<"F";
	else if(s[i]=='L')cout<<"G";
	else if(s[i]=='M')cout<<"H";
	else if(s[i]=='N')cout<<"I";
	else if(s[i]=='O')cout<<"J";
	else if(s[i]=='P')cout<<"K";
	else if(s[i]=='Q')cout<<"L";
	else if(s[i]=='R')cout<<"M";
	else if(s[i]=='S')cout<<"N";
	else if(s[i]=='T')cout<<"O";
	else if(s[i]=='U')cout<<"P";
	else if(s[i]=='V')cout<<"Q";
	else if(s[i]=='W')cout<<"R";
	else if(s[i]=='X')cout<<"S";
	else if(s[i]=='Y')cout<<"T";
	else if(s[i]=='Z')cout<<"U";
	else cout<<s[i];
}

	cout<<endl; 
	
	for(int i=0;i<strlen(s);i++){
	if(s[i]=='a')cout<<"v";
	else if(s[i]=='b')cout<<"w";
	else if(s[i]=='c')cout<<"x";
	else if(s[i]=='d')cout<<"y";
	else if(s[i]=='e')cout<<"z";
	else if(s[i]=='f')cout<<"a";
	else if(s[i]=='g')cout<<"b";
	else if(s[i]=='h')cout<<"c";
	else if(s[i]=='i')cout<<"d";
	else if(s[i]=='j')cout<<"e";
	else if(s[i]=='k')cout<<"f";
	else if(s[i]=='k')cout<<"g";
	else if(s[i]=='m')cout<<"h";
	else if(s[i]=='n')cout<<"i";
	else if(s[i]=='o')cout<<"j";
	else if(s[i]=='p')cout<<"k";
	else if(s[i]=='q')cout<<"l";
	else if(s[i]=='r')cout<<"m";
	else if(s[i]=='s')cout<<"n";
	else if(s[i]=='t')cout<<"o";
	else if(s[i]=='u')cout<<"p";
	else if(s[i]=='v')cout<<"q";
	else if(s[i]=='w')cout<<"r";
	else if(s[i]=='x')cout<<"s";
	else if(s[i]=='y')cout<<"t";
	else if(s[i]=='z')cout<<"u";
	else cout<<s[i];
}
	return 0;
}
