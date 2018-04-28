
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
int fun(int x){
	int sum=0;
	while(x){
		sum+=x%10;
		x/=10;
	}
	return sum;
}

int main(){
long long   n,ans=0;

cin>>n;
bool m=true;
for(int i=1;i<153;i++){
	long long y=sqrt(double (n));
	long long start=1,end=y,mid;
	long long sum;
while(start<=end){
	mid=(end+start)/2;;
	int x=mid,z=0;
	 sum=mid*mid + mid*i;
	if(sum==n && i==fun(mid)){
		m=false;
		ans=mid;
		break;
	}
	else if(n<sum)
		end=mid-1;
	else
		start=mid+1;

}
if(!m)
	break;
}
if(!m)
	cout<<ans<<endl;
else
	cout<<"-1"<<endl;
	


//system("pause");
	return 0;
}
 