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
	long long  n,m,ans;
while(cin>>n>>m){
	 ans=0;
	vector<int>v(n);
	    long long  sum;
		long  count;
	for(int i=0;i<n;i++)
		cin>>v[i];
long long start=1,end=1e9;
long long mid;
 // cout<<v[0]<<" "<<v[2];
	while(start<=end){
		mid=(start+end)/2;
		//cout<<mid<<endl;
		 sum=0;
		 count=0;
		 bool f=true;
		for(int i=0;i<n;i++){
			if(v[i]>mid){
				f=false;
				break;

			}
			sum+=v[i];
			if(sum<mid)
				continue;
			else if(sum>mid){
				i--;
				count++;
				sum=0;
			}
			else if(sum==mid){
				count++;
				sum=0;
			}
			
		}
	
		if(sum)
			count++;
		
		if(count<=m && f){
			ans=mid;
			end=mid-1;
		}
		
		else 
		 start=mid+1;
		//cout<<end<<" "<<start<<endl;
	}
	
	cout<<ans<<endl;
}

//system("pause");
	return 0;
}