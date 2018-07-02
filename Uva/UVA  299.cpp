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
int cur[10001];
int main(){
int t,n;
cin>>t;
while(t--){
	int count=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				count++;

			}
		}
	}
	cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
}
		
	//system("pause");
	return 0;
}
