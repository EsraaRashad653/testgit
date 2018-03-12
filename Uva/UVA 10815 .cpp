#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
	string s;
	set<string> v;
	while(getline(cin,s)){
		string a="";
		for(int i=0;i<s.length();i++){
			if(!(isalpha(s[i])) ){
				if(a.length()){
					v.insert(a);
					a="";
				}
			}
			else{
				if(s[i]<97)
					s[i]+=32;
				a+=s[i];
			}
			
		}
		if(a!="")
			v.insert(a);
		//if(s[s.length()-1]=='.')
			//break;
	
	}
	set<string>::iterator it;
	it=v.begin();
	 for( it;it!=v.end();it++)
		 cout<<*it<<endl;
		
	

system("pause");
	return 0;
}