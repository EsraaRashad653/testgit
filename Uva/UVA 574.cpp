
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
	int n,t;
	while(cin>>n>>t){
		if(!n && !t)
			break;
		vector<int>a(t);
		vector<int>b;
		set<vector<int>>c;
		for(int i=0;i<t;i++)
			cin>>a[i];
		int sum1=0,sum2=0;
		for(int i=0;i<(1<<t);i++){
			sum1=0;
			for(int j=0;j<t;j++){
				if(i&(1<<j)){
					sum1+=a[j];
					b.push_back(a[j]);

				}

			}
			if(sum1==n){
				c.insert(b);
			}
			b.clear();
		}
		cout<<"Sums of "<<n<<":\n";
		if(!c.size())
			cout<<"NONE"<<endl;
	     else{
			 std::set<vector<int>>::reverse_iterator rit;
			 rit=c.rbegin();
			 for(rit;rit!=c.rend();++rit){
				 vector<int>v=*rit;
		     	for(int j=0;j<v.size()-1;j++)
			    	cout<<v[j]<<"+";
			   cout<<v[v.size()-1]<<endl;

		}
	    }
			


	}
	
//system("pause");
	return 0;
}
 