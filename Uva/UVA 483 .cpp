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
		string a="",st="";
		for(int i=0;i<s.length();i++){
			if(s[i]==' ' ){
				reverse(st.begin(),st.end());
				a+=st;
				a+=s[i];
				st="";
			}
			else{
				st+=s[i];
			}

		}
		reverse(st.begin(),st.end());
				a+=st;
		cout<<a<<endl;

	}
	
	//system("pause");
	return 0;
}