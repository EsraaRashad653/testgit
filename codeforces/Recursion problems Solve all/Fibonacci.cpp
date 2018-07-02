#include<iostream>
#include<stack>
#include<queue>
#include<cmath>
#include<string>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
using namespace std;
int vis[1000];
int cur[1000];
int fib(int n){
	if(n<=1)
		return 1;
	return fib(n-1) + fib(n-2);
	
}
int main(){
	int n; 
	cin>>n;
	if(n==0)
		cout<<"0";
	else

	cout<<fib(n-1);

	//system("pause");
	return 0;
}