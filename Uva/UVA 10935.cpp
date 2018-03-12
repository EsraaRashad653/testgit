#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
int n;
while(cin>>n){
	
	if(n==0)
		break;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		v[i]=i+1;
	vector<int>v2;
	while(v.size()>=1){
		if(v.size()==1)
			break;
		int y=v[0];
		int x=v[1];
		v.erase(v.begin(),v.begin()+2);
		v.push_back(x);
		v2.push_back(y);
	}
	if(n==1)
		cout<<"Discarded cards:";
	else
		cout<<"Discarded cards:"<<" ";
	
	for(int i=0;i<n-1;i++){
		if(i==n-2)
			cout<<v2[i];
		else
			cout<<v2[i]<<", ";
	}
	cout<<endl;
	cout<<"Remaining card:"<<" "<<v[0]<<endl;

}

//system("pause");
	return 0;
}
