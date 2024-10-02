#include <stdio.h>

int main() {
	
	int T,B1,B2,B3,total;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d %d",&B1,&B2,&B3);
	    total=B1+B2+B3;
	    if(total>1)
	    {
	        printf("\nNot now");
	    }
	    else
	    {
	        printf("\nWater filling time");
	    }
    
	    
	}
	return 0;
}



