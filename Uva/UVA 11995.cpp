#include<iostream>
#define _CRT_SFCURE_NO_WARNINGS
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main(){ 
int n;
while(cin>>n){
 
	vector <int> v1;
	vector <int> v2;
	vector<int> v3;
	vector<int> v4;
	int a,b;
	bool q=true,s=true,p=true;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>a>>b;

		if(a==1){
			v1.push_back(b);
			v3.push_back(b);
			v4.push_back(b);
		}
		else{
			v2.push_back(b);
	    while(v1.size()>k && v2.size()>k){
			sort(v3.begin(),v3.end());
			int last=v4.size()-1;
			int last1=v3.size()-1;
		if(v1[k]!=v2[k])
			q=false;
		if(b!=v4[last]){
			s=false;
		}
		else{
			if(v4.size()>=1)
			v4.pop_back();
		}
 
		if(v2[k]!=v3[last1])
				p=false;
		else{
			if(v3.size()>=1)
			v3.pop_back();
		}
 
		k++;
 
	}
    }
	}

	if(v2.size()>v1.size())
		cout<<"impossible"<<endl;
	else{
	if((q==true && p==true)||(q==true && s==true)||(p==true && s==true))
		cout<<"not sure"<<endl;
	else if(q==true)
		cout<<"queue"<<endl;
	else if(s==true)
		cout<<"stack"<<endl;
	else if(p==true)
		cout<<"priority queue"<<endl;
	else
		cout<<"impossible"<<endl;
	q=true;s=true;p=true;
	}
 
 
 
}
 //system("pause");
	return 0;
}
