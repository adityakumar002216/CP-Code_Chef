#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main() {
	// your code goes here
	    int n;
	    cin>>n;
	    cpp_int fact=1;
	    for(int i=n;i>0;i--)
	     fact=fact*i;
	    cout<<fact<<endl; 
	return 0;
}
