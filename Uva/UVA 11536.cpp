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
	int t,n,m,k;
	cin>>t;
	for(int p=1;p<=t;p++){
		cin>>n>>m>>k;
		vector<int>v(n);
		map<int,int>mp;
		v[0]=1;
	    v[1]=2;
	   	v[2]=3;
		int x;
		for(int i=3;i<n;i++){
			x=((v[i-3]+v[i-2]+v[i-1])%m)+1;
			v[i]=x;	
		}
		int l=0,r=0;
		int ans=n+1,count=0;
		while(l<n){
			while(r<n && mp.size()<k){
				if(v[r]<=k){
					mp[v[r]]++;
				}
				r++;

				
			}
			//cout<<mp.size()<<endl;
			//cout<<r<<endl;
			if(mp.size()==k)
				ans=min(ans,abs(r-l));
			if(mp[v[l]]<=1)
				mp.erase(v[l]);
			
			else
				mp[v[l]]--;
			l++;
		}
		if(ans==n+1)
			cout<<"Case "<<p<<": "<<"sequence nai"<<endl;
		else
		cout<<"Case "<<p<<": "<<ans<<endl;	

	}
//system("pause");
	return 0;
}