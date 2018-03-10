#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
string s;
while(getline(cin,s)){
	if(s=="DONE")
		break;
	for(int i=0;i<s.length();i++){
		if(!(isalpha(s[i]))){
			s.erase(i,1);
			i--;
		}
		else{
			if(s[i]<97)
				s[i]+=32;
		}
	}
	string a=s;
	//cout<<s<<endl;
reverse(s.begin(),s.end());
if(a==s)
	cout<<"You won't be eaten!"<<endl;
else
	cout<<"Uh oh.."<<endl;
}


	//system("pause");
	return 0;
}