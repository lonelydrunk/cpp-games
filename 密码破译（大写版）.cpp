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
	return 0;
}
