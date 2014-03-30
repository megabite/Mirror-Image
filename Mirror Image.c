#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j,n;
	
	printf("Entr the Number that u want to get the mirror image........\n");
	scanf("%d",&n);
	
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(j<i) 
        printf("%d*",i);
      else 
        printf("%d",i);
    }
    printf(" \n");
  }
  
   for(i=n;i>=1;i--)
  {
    for(j=i;j>=1;j--){
    
	if(j<i) 
        printf("*%d",i);
      else 
        printf("%d",i);
    }
    printf(" \n");
  }
  getch();
	return 0;
}
