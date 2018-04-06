#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<functional>
using namespace std;
int main(){
	int n;
cin>>n;
for(int t=0;t<n;t++){
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i]))
			cout<<s[i];
		else if(s[i]==')' ){
			if(! st.empty()){
				cout<<st.top();
				st.pop();
			}
		}
		else if(s[i]!='(')
			st.push(s[i]);
	}
	while(! st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}
	
	

//system("pause");
	return 0;
}
