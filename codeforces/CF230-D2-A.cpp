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
//pair<int,int>p;
int s,n,x,y;
cin>>s>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
	cin>>x>>y;
	v[i].first=x;
	v[i].second=y;

}
bool m=true;
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
	if(s<=v[i].first){
		m=false;
		break;
	}
	else{
		s+=v[i].second;
	}

}
if(m)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;


//system("pause");
	return 0;
}
