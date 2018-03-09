#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main(){
   int count=0;
   int n,a1,a2,a3,b1,b2,b3;
 cin>>a1>>a2>>a3;
 cin>>b1>>b2>>b3;
 cin>>n;
    int count_c=a1+a2+a3;
    int count_p=b1+b2+b3;
    
    if(count_c%5==0)
    count_c=count_c/5;
    else
    count_c=(count_c/5)+1;
     if(count_p%10==0)
    count_p=count_p/10;
    else
    count_p=(count_p/10)+1;
    count=count_c+count_p;
    if(count<=n)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}