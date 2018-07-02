
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
		vector<int>a(t);
		vector<int>b;
		vector<int>c;
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
			if(sum1<=n && sum2<sum1){
				sum2=sum1;
				c.clear();
				c=b;
			}
			else if(sum2==sum1 && c.size()<b.size() && sum1<=n){
				c.clear();
				c=b;
			}
			b.clear();
							


		}
		//cout<<c[0];
		for(int i=0;i<c.size();i++)
			cout<<c[i]<<" ";
		cout<<"sum:"<<sum2<<endl;


	}
	
	

//system("pause");
	return 0;
}