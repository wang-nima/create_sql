#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	freopen("tramstops.txt","r",stdin);
	freopen("out2.txt","w",stdout);
	string tid,x,y,r;
	int x_num;
	int y_num;
	int r_num;
	while(cin >> tid >> x >> y >> r)
	{
		//去掉逗号
		tid.resize(tid.size() - 1);
		x.resize(x.size() - 1);
		y.resize(y.size() - 1);
		x_num = atoi( x.c_str() );
		y_num = atoi( y.c_str() );
		r_num = atoi( r.c_str() );
		//cout << tid << " " << x_num << " " << y_num << " " << r_num;
		cout << "insert into tramstops values(" << endl;
		cout << "\'" <<tid << "\'" <<",\n";
		cout << "SDO_GEOMETRY(\n";
		cout << "2003,\n";
		cout << "NULL,\n";
		cout << "NULL,\n";
		cout << "SDO_ELEM_INFO_ARRAY(1,1003,4),\n"; 
		printf("SDO_ORDINATE_ARRAY(%d,%d,%d,%d,%d,%d)));\n",x_num, y_num - r_num, x_num + r_num, y_num, x_num, y_num + r_num);
		cout << endl;
	}
	return 0;
}