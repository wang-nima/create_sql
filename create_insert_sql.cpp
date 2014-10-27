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
		cout << "insert into students values(" << endl;
		cout << sid << ",\n";
		cout << "SDO_GEOMETRY(\n";
		cout << "2001,\n";
		cout << "NULL,\n";
		cout << "SDO_POINT_TYPE(" << x << ", " << y <<", NULL),\n";
		cout << "NULL,\n";
		cout << "NULL));\n";
		cout << endl;
	}
	return 0;
}