//follow me on twitter
//@far_is_man

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a,b,c;
  printf("enter a number : ");
  scanf("%d",&a);
  if(a<0){
    a=a*-1;
  }
  printf("Common Divisor of %d is ",a);
  for(c=1;c<=a;c++){
    for(b=1;b<=a;b++){
      if(a==c*b){
        printf("%d,",c);
      }
    }
  }
  return 0;
}
