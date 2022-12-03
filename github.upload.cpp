#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d %d %d",&x,&y,&z);
	  if(x>y*z)
      printf("Yes\n");
    else
       printf("No\n");
	}
	return 0;
}
