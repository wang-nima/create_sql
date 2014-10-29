#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	freopen("building.txt","r",stdin);
	freopen("out3.txt","w",stdout);
	string line;
	char* p;
	const char* split = ",";
	vector<char*> v;
	char* bid;			
	char* bname;
	int i;
	int num;
	char* temp;

	while(getline(cin,line))			//read a line to temp
	{
		//string to char*
		char *temp = new char[line.length() + 1];
		strcpy(temp,line.c_str());
		//printf("%s\n", temp);
		p = strtok(temp,split);
		i = 0;
		v.clear();
		while(p != NULL)
		{
			if(i == 0)
			{
				bid = p;
			}
			else if(i == 1)
			{
				bname = p;
			}
			else if(i == 2)
			{
				num = atoi(p);
			}
			else
			{
				v.push_back(p);
			}
			p = strtok(NULL,split);
			i++;
		}
		cout << "insert into buildings values(" << endl;
		cout << "\'" <<bid << "\'" <<",\n";
		cout << "\'" << bname+1 << "\'" <<",\n";
		cout << "SDO_GEOMETRY(\n";
		cout << "2003,\n";
		cout << "NULL,\n";
		cout << "NULL,\n";
		cout << "SDO_ELEM_INFO_ARRAY(1,1003,1),\n"; 
		cout << "SDO_ORDINATE_ARRAY(";

		temp = v[num * 2 - 1];
		temp[strlen(temp) - 1] = '\0';
		v[num * 2 - 1] = temp;

		for (i = 0; i < num * 2; i++)
		{
			cout << v[i] << ",";
		}
		cout << v[0] << "," << v[1];
		cout << ")));" << endl << endl;
	}
	return 0;
}