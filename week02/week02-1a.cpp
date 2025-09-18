/// week02-1.cpp Part 1
/// SOIT106_ADVANCE_001 Using C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ans=0;
	while(a>0){ ///
		ans=ans*10+a%10;
		a/=10;}
	printf("%d",ans);
}
