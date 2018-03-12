#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
int n;
cin>>n;
vector<int>a(n+1);
for(int i=1;i<=n;i++)
	cin>>a[i];
int cum[100001]={0};
int q,l,r;
cin>>q;
for(int i=1;i<=q;i++){
	cin>>l>>r;
	cum[l]+=1;
	cum[r+1]-=1;
}
int count=0;
for(int i=1;i<=n;i++){
	cum[i]=cum[i]+cum[i-1];
	if(cum[i]==0)
	
		count++;
}
cout<<count<<endl;
for(int i=1;i<=n;i++)
	if(cum[i]==0)
		cout<<a[i]<<" ";


//system("pause");
	return 0;
}