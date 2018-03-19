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
	int t;
	cin>>t;
	string a,b;
	for(int i=1;i<=t;i++){
		map<string,int>mp1;
		map<string,int>mp2;
		cin>>a>>b;
		string ke="";
		int value=0;
		for(int j=0;j<a.length();j++){
			if(a[j]==',' || a[j]=='}'){
				if(ke!=""){
					mp1[ke]=value;
					ke="";
					value=0;
				}

			}
			else if(isdigit(a[j]))
				value=(value*10)+int(a[j]-'0');
			else if(isalpha(a[j]))
				ke+=a[j];
		}
		for(int j=0;j<b.length();j++){
			if(b[j]==',' || b[j]=='}'){
				if(ke!=""){
					mp2[ke]=value;
					ke="";
					value=0;
				}

			}
			else if(isdigit(b[j]))
				value=(value*10)+int(b[j]-'0');
			else if(isalpha(b[j]))
				ke+=b[j];
		}
		vector<string>ch;
		vector<string>in;
		vector<string>re;
		//cout<<mp1[a]<<endl;
		map<string,int>::iterator it;
		it=mp2.begin();
		for(it; it!=mp2.end();it++){
			string q=it->first;
			int va=it->second;
			if(mp1.count(q)==1){
				if(mp1[q]!=va){
					ch.push_back(q);
				}
				mp1.erase(q);
			}
			else{
				in.push_back(q);
			}
		}
		map<string,int>::iterator ii;
		if(mp1.size()>=1){
			for(ii=mp1.begin();ii!=mp1.end();ii++){
				string q=ii->first;
				re.push_back(q);
			}
		}
		if(in.size()==0 && re.size()==0 && ch.size()==0)
			cout<<"No changes"<<endl;
		else{
			if(in.size()>=1){
				cout<<"+";
				for(int k=0;k<in.size();k++){
					if(k==in.size()-1)
						cout<<in[k];
					else
						cout<<in[k]<<",";
					
				}
				cout<<endl;
					
			}
			if(re.size()>=1){
				cout<<"-";
				for(int k=0;k<re.size();k++){
					if(k==re.size()-1)
						cout<<re[k];
					else
						cout<<re[k]<<",";
				}
				cout<<endl;
					
			}
			if(ch.size()>=1){
				cout<<"*";
				for(int k=0;k<ch.size();k++){
					if(k==ch.size()-1)
						cout<<ch[k];
					else
						cout<<ch[k]<<",";
						continue;
				}
				cout<<endl;
					
			}
		
		}
		cout<<endl;

	}


//system("pause");
	return 0;
}