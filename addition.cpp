#include <bits/stdc++.h>

using namespace std;

void swap(string& str1, string& str2){
	string temp = str1;
	str1 = str2;
	str2 = temp;
	return;
}

string add(string str1,string str2){
	int n = str1.length();
	int m = str2.length();
	string out = "";
	int carry = 0;
	if(n<m){
		swap(str1,str2);
		n = str1.length();
		m = str2.length();
	}

	char temp;
	while(m--){
		n--;
		int sum = carry + str1[n] + str2[m] - '0' -'0' ;
		carry = sum/10;
		sum = sum%10;
		temp = sum + '0';
		out = temp + out;
	}

	while(n--){
		int sum = carry + str1[n] -'0' ;
		carry = sum/10;
		sum = sum%10;
		temp = sum + '0';
		out = temp + out;		
	}

	if(carry != 0){
		temp = carry + '0';
		out = temp + out;		
	}	

	return out;
}

// int main(){
// 	cout<<add("1","999")<<endl;
// 	return 0;
// }