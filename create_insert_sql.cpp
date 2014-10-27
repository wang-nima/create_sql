#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	freopen("stu.txt","r",stdin);
	freopen("out.txt","w",stdout);
	string sid, x, y;
	while(cin >> sid >> x >> y)
	{
		sid.resize(sid.size() - 1);
		x.resize(x.size() - 1);
		cout << sid << " " << x << " " << y << endl;
	}
	return 0;
}