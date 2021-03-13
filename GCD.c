//please follow ne on twitter
//@far_is_man
#include <stdio.h>

int main()
{
  int a,b,c;
  printf("enter the 1st number : ");
  scanf("%d",&a);
  printf("enter the 2nd number : ");
  scanf("%d",&b);
  if(a<b){
    c=a;
    a=b;
    b=c;
  }
  printf("Great Common Divisor of %d and %d is ",a,b);
  do{
    c=a%b;
    if(c==0){
      printf("%d",b);
    }else{
      a=b;
      b=c;
    }
  }while(c!=0);
  return 0;
}
