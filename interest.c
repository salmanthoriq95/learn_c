/*sorry for my english, this is for counting 
interest p.a that will pay in every month*/ 
/*jika ada kesalahan dalam bahasa inggris 
mohon di koreksi*/
/*bisa dihubungi di @far_is_man di twitter*/
/*program penghitungan bunga tabungan pertahun, 
yang di bayarkan setiap bulan mengukuti saldo akhir*/

#include <stdio.h>

void bungaperbulan (float bunga, float *tabungan){
  *tabungan = *tabungan+(*tabungan*bunga/100/12);
}

int main()
{
  int i,n;
  float x,a;
  printf("|--------COUNTING INTEREST P.A---------|\n");
  printf("________________________________________\n");
  printf("saving balance ($)      : ");
  scanf(" %f",&a);
  printf("Interest of a year (%) : ");
  scanf("%f",&x);
  printf("How many month(s)       : ");
  scanf("%d",&n);
  printf("________________________________________\n");
  for (i=1; i<=n; i++){
    bungaperbulan(x,&a);
  }
  printf ("Your last balance is    : $ %.2f \n",a);
  return 0;
}

