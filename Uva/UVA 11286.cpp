#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main(){ 
int n;
while(cin>>n){
map<vector<int>,int>mp;
	if(n==0)
		break;
	for(int i=0;i<n;i++){
		vector<int>v;
		int a;
		for(int k=0;k<5;k++){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		mp[v]++;
	}
	map<vector<int>,int>::iterator it;
	int count=0;
	int max=0;
	it=mp.begin();
	for(it;it!=mp.end();it++){
		if(it->second>=max)
		max=it->second;
		
	}
	
	it=mp.begin();
	for(it;it!=mp.end();it++){
		if(it->second==max)
		count++;
		
	}
	int ans=max*count;
	cout<<ans<<endl;
}
	
	
//system("pause");
	return 0;
}