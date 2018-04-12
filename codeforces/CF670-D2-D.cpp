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
	long long n,k,ans=0;
	cin>>n>>k;
	vector<int>v1(n+1);
	vector<int>v2(n+1);
	for(int i=1;i<=n;i++)
		cin>>v1[i];
	for(int i=1;i<=n;i++)
		cin>>v2[i];
	long long start=1,end=2000000000,mid;
	while(start<=end){
		mid=(start+end)/2;
		bool m=true;
		long long v=k;
		for(int i=1;i<=n;i++){
			long double x =(long long)((mid* v1[i])-v2[i]);
			long double y=(long long)((v2[i]/v1[i]));
			if(y>=mid){
				m=true;
			}
			else if(v>=x) {
				m=true;
				v=(v-x);
			}
			else {
			  m=false;
			  break;
				
		   }
			//if(i==1)
				//cout<<x<<" "<<k;

	}
		
     /* if(mid==125){
			cout<<m<<endl;
			cout<<index<<endl;
		}*/
		if(m==true){
			ans=mid;
			start=mid+1;

		}
		else{
			end=mid-1;
		}
		m=true;
	}
	cout<<ans;

//system("pause");
	return 0;
}