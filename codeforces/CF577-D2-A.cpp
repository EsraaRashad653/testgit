#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
long long n,m,count=0;
cin>>n>>m;
for(int i=1;i<=n;i++){
	long long res=m/i;
	if(m%i==0 && res<=n)
		count++;

}
cout<<count;
//system("pause");
	return 0;
}