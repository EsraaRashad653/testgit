#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string a="";
	int index=0;
	for(int i=index;i<s.length();i++){
		if(s[i]!=' ')
			a+=s[i];
	
		else{
			a+=s[i];
			for(int k=i+1;k<s.length();k++){
				if(s[k]==' ')
					i++;
				else
					break;
			}
		
		}
	}
	s="";
	for(int i=0;i<a.length();i++){
		if(isalpha(a[i]))
			s+=a[i];
		else if(a[i]==' ' && (isalpha(a[i+1])))
			s+=a[i];
		else if(a[i]==' ' && !(isalpha(a[i+1]))){
			s+=a[i+1];
			s+=a[i];
			i++;	
		}
		else if(a[i]!=' ' && !(isalpha(a[i]))){
			if(a[i+1]==' '){
			s+=a[i];
			s+=a[i+1];
			i++;
			}
			else{
				s+=a[i];
				s+=' ';
			}
		}
	}
	for(int i=0;i<s.length();i++){
		if(s[i]==' ' && s[i+1]==' '){
			s.erase(i,1);
			i--;
		}
	}
	cout<<s<<endl;

 //system("pause");
	return 0;
}