#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int l;string s;
	while(cin>>l){
		if(l==0)
			break;
		cin>>s;
		vector<int>d;
		vector<int>r;
		bool m=true;
		for(int i=0;i<l;i++){
			if(s[i]=='R')
				r.push_back(i+1);
			else if(s[i]=='D')
				d.push_back(i+1);
			else if(s[i]=='Z'){
				m=false;
				break;
			}

		}
		int ans,min_=2000000;
		if(m==false){
			min_=0;
		}
	
		else{
			for(int i=0;i<d.size();i++){
				for(int j=0;j<r.size();j++){
					int res=abs(d[i]-r[j]);
					if(res<min_)
						min_=res;
				}
			}
		}
		ans=min_;
		cout<<ans<<endl;
	}
	
//system("pause");
	return 0;
}