#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
	char ary[10000];
	cin>>ary;
		int l=strlen(ary);
	
sort(ary,ary+l);

	for(int i=0;i<l;i++)
	cout<<ary[i]<<" ";

	cout<<"\n";
	}
}
