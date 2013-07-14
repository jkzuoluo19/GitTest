#include <iostream>
#include <string>
#include <string.h>  // for memset


using namespace std;

int main()
{
	string str;
	cout << "input a string->" << endl;
	cin >> str;
	
	int len=str.length();
	//cout << "len=" << len << endl;

	bool * luarray = new bool[128];
	memset(luarray, false, 128);
	
	int i;
	for (i=0; i<len; ++i)
		luarray[str[i]]=true; ////////////////
	
	for (i=97; i<123; ++i)
		cout << "luarray[" << i << "]=" << luarray[i] << endl;
		


	return 0;

}
