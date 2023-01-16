#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    string s;
	    string t;
	    string k;
	    cin>>s>>t;
	    for(int i=0;i<s.length();i++){
	        if(s[i]==t[i])
	    {
	        s[i]='G';
	       
	    }
	    else{
	        s[i]='B';

	        
	    }
	}
	for(int i=0;i<t.length();i++)
	cout<<s[i];
	cout<<"\n";
	}
	return 0;
}
