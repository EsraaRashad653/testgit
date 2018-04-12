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
using namespace std;
int main(){
string s,t;
while(cin>>s>>t){
	bool m=true;
	int index=-1;
	if(s==t)
		m=true;
	else if(s.size()==t.size() && s!=t)
		m=false;
	else{
		for(int i=0;i<s.size();i++){
			int x=t.find(s[i]);
			if(t.size()>=x &&(t[x]==s[i]) ){
				t.erase(t.begin(),t.begin()+x+1);
				continue;
			}
			else{
				m=false;
				break;
			}
		}
			
	}
	if(m)
		cout<<"Yes"<<endl;
	else{
		cout<<"No"<<endl;
	}	
}


//system("pause");
	return 0;
}
