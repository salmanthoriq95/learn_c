// please follow me on twitter
//@far_is_man

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a,b,i,j;
  printf("enter 1st number : ");
  scanf("%d",&a);
  printf("enter 2nd number : ");
  scanf("%d",&b);
  if (a==b) {
      printf("least common multiple of %d and %d is %d",a,b,a);
  } else if(b<a) {
    j=b;
    b=a;
    a=j;
    printf("least common multiple of %d and %d is ",b,a);
  } else {
    printf("least common multiple of %d and %d is ",a,b);
  }
  i=a;
  j=b;
  while(a<b){
    a=a+i;
    if (a==b) {
      printf("%d",a);
    } else if (a>b) {
      b=b+j;
    }
  }
  return 0;
}
