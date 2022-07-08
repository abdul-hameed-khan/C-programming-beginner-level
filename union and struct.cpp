#include <stdio.h>
union A
{
	int x;
	float y;
	double z;
	
};
struct B
{
	int x;
	float y;
	double z;
};

main()
{
	A i;
	B j;
	printf("%d\n%d",sizeof(i),sizeof(j));
}
