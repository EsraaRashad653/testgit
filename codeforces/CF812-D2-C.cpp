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
long long n,s,ans1=0,ans2=0;
cin>>n>>s;
vector<int>v(n+1);
vector<long long>v2(n+1);
for(int i=1;i<=n;i++)
	cin>>v[i];
long long start=1,end=n,mid;
while(start<=end){
	mid=(start+end)/2;
	long long sum=0;
	for(int i=1;i<=n;i++){
		v2[i]=v[i]+(i*mid);
	}
	sort(v2.begin(),v2.end());
	for(int i=1;i<=mid;i++){
		sum+=v2[i];

	}

	if(sum>s)
		end=mid-1;
	else if(sum<=s){
		start=mid+1;
		ans1=mid;
		ans2=sum;
	}

}
cout<<ans1<<" "<<ans2;
//system("pause");
	return 0;
}
