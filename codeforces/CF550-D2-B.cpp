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
	int n,l,r,x,p;
	int count=0;
	cin>>n>>l>>r>>x;
	vector<int>v;
	for(int i=1;i<=n;i++){
		cin>>p;
		v.push_back(p);
	}
	for(int i=0;i<(1<<n);i++){
		int maxm=INT_MIN;
	    int minm=INT_MAX;
		int sum=0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				sum+=v[j];
				maxm=max(maxm,v[j]);
				minm=min(minm,v[j]);
			}
		}
		if(sum>=l && sum<=r && (maxm-minm)>=x)
			count++;
	}
	cout<<count;
	
//system("pause");
	return 0;
}
