#include <stdio.h>

int main()
{
	int a=0;
	int b=1;
	int c;
	int index;
	printf("Podaj index w ciagu Fibonacciego: ");
	scanf("%d" ,&index);
    for (int i=0;i<index;++i){
	
		c=a+b;
		a=b;
		b=c;
		
	}
		printf("F(%d) = %d \n",index, a);
		return 0;
		
}
	
	

