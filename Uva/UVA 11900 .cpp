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
int n,p,q,t;
cin>>t;
for(int k=1;k<=t;k++){
	cin>>n>>p>>q;
	vector<int>v(n+1);
	for(int i=1;i<=n;i++)
		cin>>v[i];
	int x=min(n,p);
	int sum=0,count=0;
	for(int i=1;i<=x;i++){
		sum+=v[i];
		if(sum<=q){
			count++;
		}
		else
			break;
	}
	cout<<"Case "<<k<<": "<<count<<endl;
	
}

//system("pause");
	return 0;
}