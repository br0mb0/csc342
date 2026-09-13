#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);

	if((a & 0x80000000) >> 31 == 1){
	printf("decimal: -%u\nbinary: %.32b\n",((a^0xFFFFFFFF)+1),a);	
	} else {
	printf("decimal: %u\nbinary: %.32b\n",a,a);
	}
	return(1);

}
