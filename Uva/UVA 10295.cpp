#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main(){ 
int m,n;
cin>>m>>n;
map<string ,int>mp;
string s;
int a;
for(int i=1;i<=m;i++){
	cin>>s>>a;
	mp[s]=a;
}
for(int i=1;i<=n;i++){
	int sum=0;
	string d,v="";
	while(getline(cin,d)){
		for(int k=0;k<d.length();k++){
			if(d[k]==' '){
				if(mp[v]!=0)
					sum+=mp[v];
				v="";
			}
			else{
				v+=d[k];
			}

		}
		sum+=mp[v];
		v="";
		int c=count(d.begin(),d.end(),'.');
		if(c)
			break;
	}
	cout<<sum<<endl;
}


	
//system("pause");
	return 0;
}