#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 

int a[26];
	string s;
	cin>>s;
	for(int i=0;i<26;i++)
		cin>>a[i];
	bool m=true;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			m=false;
			break;
		}
	}
	if(m==true){
		
		for(int i=0;i<s.length();i++)
			s[i]='a';
	}
	//_____________________________________________________________________
	else{ 
		int start=0,last=0;
		for(int i=0;i<s.length();i++){
			int start=last=0;
			char v;
			if(!(isalpha(s[i]))){
				if(i!=0)
					start=i-1;
				
				for(int k=i+1;k<s.length();k++){
					if(isalpha(s[k])){
						last=k;
						i+=(k-i);
						break;
					}
				}
				int x,y,min=100000,index=0;
				 x=s[start]-97,y=s[last]-97;
			if(s[start]=='?' )
				x=s[last]-97;	
			if(last==0)
				y=s[start]-97;	
				for(int t=0;t<26;t++){
					int res=abs(a[x]-a[t]) + abs(a[y]-a[t]);
						if(res<min){
							min=res;
							index=t;
						}
						v=(97+index);
				}		
			int t=start+1;
			if(s[start]=='?')
				t=start;
			for(t;t<s.length();t++){
				if(last==t)
					break;
				s[t]=v;
			}	
			}
			}
		}

	
	long long ans=0;
	if(s.length()==1)
		ans=a[(int)s[0]-97];
	else if(s.length()==2)
		ans=abs(a[(int)s[0]-97]-a[(int)s[1]-97]);
	else
		for(int i=1;i<s.length();i++)
			ans+=abs(a[(int)s[i]-97]-abs(a[(int)s[i-1]-97]));
	cout<<ans<<endl;
	cout<<s<<endl;
	
//system("pause");
	return 0;
}