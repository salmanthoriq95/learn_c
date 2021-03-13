//make star pyramid
//follow me on twitter @far_is_man
#include <stdio.h>

main(){
  int m, i, x, n;
  
  printf ("Please enter number of height : ");
  scanf ("%d",&n);
  for (i=1; i<=n; i++){
    for(m=n;m>=i;m--){
      printf(" ");
    }
    printf ("* ");
    for (x=1; x<i; x++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
