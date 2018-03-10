#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){	
	string s;
	while(getline(cin,s)){
		string a="";
		int count=0;
		for(int i=0;i<s.length();i++){
			if(!(isalpha(s[i]))){
				if(a!=""){
				count++;
				a="";
				}
			}
			else{
				a+=s[i];
			}
		}
		cout<<count<<endl;
	
	}
	//system("pause");
	return 0;
}