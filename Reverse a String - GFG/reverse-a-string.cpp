//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int len = str.length();
    for(int i = 0;i<len/2;i++){
        char t = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = t;
    }
    return str;
  //Your code here
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends