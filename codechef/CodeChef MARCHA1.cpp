#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<bitset>
using namespace std;

int main(){ 
int n,t,m;
cin>>t;
while(t--){
	cin>>n>>m;
	vector<int>v;
	int a;
	bool f=true;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);

	}
	for(int i=0;i<(1<<n);i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				sum+=v[j];
			}
		}
		if(sum==m){
			f=false;
			break;
		}

	}
	if(f==false)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
//system("pause");
	return 0;
}
