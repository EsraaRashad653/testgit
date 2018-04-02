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
int n,q,x;
int count=0;
while(cin>>n && cin>>q){
	if(n==0 && q==0)
		break;
	count++;
	int y;
	vector<int>a;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin>>y;
		a.push_back(y);
		mp[y]++;
	}
	sort(a.begin(),a.end());
	cout<<"CASE# "<<count<<":"<<endl;
	for(int i=1;i<=q;i++){
		bool m=true;
		int index=0;
		cin>>x;
		if(mp.count(x)){
			m=false;
			int start=0,end=n-1;
			while(start<=end){
				int mid=(start+end)/2;
				if(a[mid]==x){
					index=mid;
					end=mid-1;
				}
				else if(x>a[mid])
					start=mid+1;
				else
					end=mid-1;
			}
		}
		if(m==false){
			cout<<x<<" found at "<<index+1<<endl;
		}
		else
		{
			cout<<x<<" not found"<<endl;
		}
	}
}
//system("pause");
	return 0;
}