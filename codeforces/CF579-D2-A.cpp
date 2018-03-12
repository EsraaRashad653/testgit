#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	while(n){
		ans+=n%2;
		n/=2;
	}
	cout<<ans;

//system("pause");
return 0;
}