#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	char Name[30]="Cheng-wei Xin";
	printf("Hello,word\n");
	printf("%d\n", 2+3);
	printf("%f\n", 3.14+52.879);
	printf("%f\n", sin(3.0*M_PI/2.0));
	printf("%s\n", Name);
	printf("%c\n", Name[5]);
	printf("%s\n", Name+3);
	printf("%u\n", Name);
	printf("%u\n", Name+3);
	for(i=0;i<50;++i)
	{
		printf("%d : %c - %u\n", i,Name[i],Name[i]);
	 } 
	return 123;
}
