
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
int n;
int t;
cin>>t;
while(t--){
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int count=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<=a[i])
				count++;
		}
	}
	cout<<count<<endl;
}



//system("pause");
	return 0;
}
 