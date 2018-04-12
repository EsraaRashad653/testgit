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
#include<functional>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
int start=1,end=n;
long long mid;
long long ans=0;
while(start<=end){
	long long b=k;
	mid=(start+end)/2;
	long long sum=mid,a=mid;
	while((a/b)){
		sum+=(a/b);
		
		b*=k;

	}
	if(sum>=n){
		ans=mid;
		end=mid-1;
		
	}
	else
		start=mid+1;
	
}
cout<<ans;
//system("pause");
	return 0;
}
