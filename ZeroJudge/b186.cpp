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
		cout<<a<<" 個餅乾，"<<b<<" 盒巧克力，"<<c<<" 個蛋糕。" <<endl;
	}
		
		
	

	
	
	return 0;
}
