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
map<string,int>mp;
int main(){
	int count=0;
for(char i='a';i<='z';i++){
	string s="";
	s=i;
	count++;
	mp[s]=count;
}

for(char i='a';i<='z';i++){
	for(char j=i+1;j<='z';j++){
		string sm="";
		count++;
		sm+=i;
		sm+=j;
		mp[sm]=count;
	}
}
for(char i='a';i<='z';i++){
	for(char j=i+1;j<='z';j++){
		for(char k=j+1;k<='z';k++){
		  string sr="";
		  count++;
		  sr+=i;
		  sr+=j;
		  sr+=k;
		  mp[sr]=count;
		}
	}
}
for(char i='a';i<='z';i++){
	for(char j=i+1;j<='z';j++){
		for(char k=j+1;k<='z';k++){
			for(char m=k+1;m<='z';m++){
		      string sl="";
		      count++;
		      sl+=i;
		      sl+=j;
		      sl+=k;
			  sl+=m;
		      mp[sl]=count;
			}
		}
	}
}

for(char i='a';i<='z';i++){
	for(char j=i+1;j<='z';j++){
		for(char k=j+1;k<='z';k++){
			for(char m=k+1;m<='z';m++){
				for(char d=m+1;d<='z';d++){
		           string st="";
		           count++;
		           st+=i;
		           st+=j;
		           st+=k;
			       st+=m;
				   st+=d;
			      mp[st]=count;
				}
			}
		}
	}
}
	string n;
while(cin>>n){
		
	cout<<mp[n]<<endl;
}
//system("pause");
	return 0;
}