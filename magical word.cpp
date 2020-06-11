#include<bits/stdc++.h>
using namespace std;
#define dheeru freopen("C:\\Users\\DELL\\Desktop\\CPP\\inout\\in.txt", "r", stdin); freopen("C:\\Users\\DELL\\Desktop\\CPP\\inout\\out1.txt", "w", stdout);


#define mahibhai ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

#define ll long long
#define pb push_back
int main()
{
	mahibhai
#ifndef ONLINE_JUDGE 
	dheeru
	#endif
int t;
cin >> t;
while (t--)
{
int n;
string s;
cin >> n;
cin >> s;

for (int i = 0; i < s.length(); i++)
{

if (int(s[i]) <= 126 && int(s[i]) >= 112)
cout << char(113);

else if ((int(s[i]) <= 69))
cout << char(67);

else if (int(s[i]) <= 72 && int(s[i]) >= 70)
cout << char(71);

else if (int(s[i]) <= 76 && int(s[i]) >= 73)
cout << char(73);

else if (int(s[i]) <= 81 && int(s[i]) >= 77)
cout << char(79);

else if (int(s[i]) <= 86 && int(s[i]) >= 82)
cout << char(83);

else if (int(s[i]) <= 93 && int(s[i]) >= 87)
cout << char(89);

else if (int(s[i]) <= 99 && int(s[i]) >= 94)
cout << char(97);

else if (int(s[i]) <= 102 && int(s[i]) >= 100)
cout << char(101);

else if (int(s[i]) <= 105 && int(s[i]) >= 103)
cout << char(103);

else if (int(s[i]) <= 108 && int(s[i]) >= 106)
cout << char(107);

else
cout << char(109);
}

cout << endl;
}

return 0;
}