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
int arr[1001];
int n;
long long ans;
long long sum_of_arry(int i){
	if(i==n)
		return ans;
	ans+=arr[i];
	return sum_of_arry(i+1);
	
}
int main(){ 
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<sum_of_arry(0);

	//system("pause");
	return 0;
}