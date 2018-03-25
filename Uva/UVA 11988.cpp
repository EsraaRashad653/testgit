#include<iostream>
#define _CRT_SFCURE_NO_WARNINGS
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main(){ 
string s;
while(getline(cin,s)){
	bool last=1;
	string a="",x="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			if(a!="")
				x=a+x;
			a="";
			last=0;
			continue;

		}
		if(s[i]==']'){
			if(a!="")
				x=a+x;
			a="";
			last=1;
			continue;

		}
		if(last)
			x+=s[i];
		else
			a+=s[i];
	}
	if(a!="")
	x=a+x;
	a="";
	cout<<x<<endl;
}

 //system("pause");
	return 0;
}
