#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int add(char s[])
{
	int len=0;
	for(int i=0;s[i]!='\0';i++,len++);
	
	if(len==0)
		return 0;

	int ans=0,res=0;
	for(int i=0; i<len; i++)
	{
		
		if(s[i] >= '0' && s[i] <= '9')
			ans = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'z')
			ans = s[i] - 'a' + 1;
		
		
		res = res + ans;	
	}
	return res;

}

int main()
{
	char s[] ={'1','2','3','a','b','c','z'};
	
	int result = add(s);
	cout<<result;
}
