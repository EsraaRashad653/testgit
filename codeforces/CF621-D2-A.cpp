#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main(){
    long long res=0,ans=0,x;
    int count=0,n;
    
    cin>>n;
    long long *a=new long long[n];
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0)
        ans+=x;
        else{
            a[count]=x;
            count++;
            res+=x;
        }
        
    }
    sort(a,a+count);
    if(count%2!=0)
    res-=a[0];
    ans=ans+res;
    cout<<ans;
    
    return 0;
}