#include<iostream>
#include<cstring>
using namespace std;
char s[999];
int main()
{
	gets(s);
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
