#include <bits/stdc++.h>
#include "addition.cpp"

using namespace std;

string multiply(string str1,string str2){
	int n = str1.length();
	int m = str2.length();
	if(n<m){
		swap(str1,str2);
		n = str1.length();
		m = str2.length();
	}

	string out = "";
	char temp;
	
	for(int j =m-1;j>=0;j--){
		string tempStr = "";
		int carry = 0;
		for(int i =n-1;i>=0;i--){
			int mul = ((str1[i] - '0') * (str2[j] -'0')) + carry ;
			carry = mul/10;
			mul = mul%10;
			temp = mul + '0';
			tempStr = temp + tempStr;
		}

		if(carry != 0){
			temp = carry + '0';
			tempStr = temp + tempStr;		
		}		

		if(j==m-1)
			out = tempStr;
		else
			out = add(tempStr+'0',out);
	}

 	return out;
}

int main(){
	cout<<multiply("98","999")<<endl;
	return 0;
}