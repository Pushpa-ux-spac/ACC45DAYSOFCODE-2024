#include <stdio.h>

int main() {
	
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d \n",((4*x)+y));
        t--;
    }
	// your code goes here
	return 0;
}



