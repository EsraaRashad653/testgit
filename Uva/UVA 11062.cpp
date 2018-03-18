#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
	string s,a="";
	set<string>v;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			if(isalpha(s[i]) && s[i]<97)
				s[i]+=32;
			if( !(isalpha(s[i])) && s[i]!='-'){
				if(a!=""){
					v.insert(a);
					a="";
				}

			}
			else if(i==s.length()-1 && isalpha(s[i]) ){
				a+=s[i];
				if(a!=""){
					v.insert(a);
					a="";
				}
					
			}
			
			else if(isalpha(s[i]) || (s[i]=='-' && i!=s.length()-1))
				a+=s[i];
		}
		//if(s[s.length()-1]=='?')
			//break;
	}
	if(a!="")
		v.insert(a);
	set<string>::iterator it;
	it=v.begin();
	for(it;it!=v.end();it++)
		cout<<*it<<endl;

	
//system("pause");
	return 0;
}