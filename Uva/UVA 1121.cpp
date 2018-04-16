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
	long long n,s;
	while(cin>>n>>s){
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		int sum=0,r=0,l=0;
	int ans=1e9;
		while(l<n){
			while(r<n && sum<s){
				sum+=v[r];
				r++;
			}
			if(sum>=s)
				ans=min(ans,abs(r-l));
			sum-=v[l];
			l++;
		}
		if(ans==1e9)
			ans=0;
		cout<<ans<<endl;
	}
//system("pause");
	return 0;
}	