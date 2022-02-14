
#include<bits/stdc++.h>
using namespace std;


string strFirst(string str)
{
	string v = "";

	
	v.push_back(str[0]);
	for (int i=0; i<str.length(); i++)
	{
		
		if (str[i] == ' ')
			{
			v.push_back(str[i+1]);
			
		}
	}

	return v;
}


int main()
{
	string str;
    getline(cin,str);
	
	cout << strFirst(str);
	return 0;
}
