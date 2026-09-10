#include <stdio.h>

int main()
{
	unsigned int a;
	scanf("%d",&a);

	if((a & 0x80000000) >> 31 == 1){
	printf("decimal: -%d\nbinary: %.32b\n",((a^0xFFFFFFFF)+1),a);	
	} else {
	printf("decimal: %d\nbinary: %.32b\n",a,a);
	}
	return(1);

}
