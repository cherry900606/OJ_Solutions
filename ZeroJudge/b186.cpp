#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a/10>c/2)
		{
			b+=c/2;
		}
		else
		{
			b+=a/10;
		}
		cout<<a<<" �ӻ氮�A"<<b<<" �����J�O�A"<<c<<" �ӳJ�|�C" <<endl;
	}
		
		
	

	
	
	return 0;
}
