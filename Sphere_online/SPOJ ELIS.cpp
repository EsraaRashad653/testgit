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
int main(){
	int n;
	int max=0;
	cin>>n;
	vector<int>v(n);
	vector<int>v2,v3;
	set<int>s;
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				v2.push_back(v[j]);
				s.insert(v[j]);
			}
		}
		
		v3=v2;
		sort(v3.begin(),v3.end());
		if(v3==v2 && v2.size()==s.size()){
			if(v2.size()>max)
				max=v2.size();
		
		}
	
		v2.clear();
		s.clear();
		v3.clear();
	}
	
	cout<<max;
	//system("pause");
	return 0;
}