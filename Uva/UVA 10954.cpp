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
		if(n==0)
			break;
		multiset<int>s;
		int a;
		for(int i=1;i<=n;i++){
			cin>>a;
			s.insert(a);
		}
		//multiset<int>::iterator it;
		//it=s.begin();
		int sum=0;
		while(s.size()>1){
			int res=*(s.begin());
			s.erase(s.begin());
			res+=*(s.begin());
			s.erase(s.begin());
			s.insert(res);
				sum+=res;
		}
		//sum+=*(s.begin());
		cout<<sum<<endl;
	}


//system("pause");
	return 0;
}