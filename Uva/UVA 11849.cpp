#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
	int n,m;
	while(cin){
		cin>>n>>m;
		if(n==0 && m==0)
			break;
		vector<int>v(10000001,0);
		int a;
		for(int i=1;i<=n;i++){
			cin>>a;
			v[a]++;

		}
		int count=0;
		for(int i=1;i<=m;i++){
			cin>>a;
			if(v[a]!=0){
				count++;
				v[a]=0;
			}

		}
		cout<<count<<endl;
	}
	
	
//system("pause");
	return 0;
}