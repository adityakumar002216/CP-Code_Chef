#include<iostream>
using namespace std;
int main(){
    
        int n;
        cin>>n;
        int ans=0;
        while(n)
        {
            ans=ans*10+n%10;
            n/=10;

        }
        cout<<ans<<endl;
    return 0;
}
