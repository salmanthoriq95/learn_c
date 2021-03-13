#include <iostream>
using namespace std;
int main()
{   int n,a,i,x;
    float peluang,sampel,k,coba,harapan;
    sampel = 1;
    cout<<"masukan benda yang akan dilempar : ";
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        x=i+1;
        cout<<"masukan banyaknya sisi benda ke-"<<x<<" : ";
        cin>>a;
        arr[n]=a;
        sampel = sampel*arr[n];
    }
    cout<<"banyaknya ruang sampel yang akan dibutuhkan : ";
    cin>>k;
    peluang = k/sampel;
    cout<<"banyaknya percobaan : ";
    cin>>coba;
    harapan = peluang*coba;
    cout<<"banyaknya ruang sampel : "<<sampel<<endl;
    cout<<"peluang munculnya kejadian : "<<peluang<<endl;
    cout<<"peluang tidak munculnya kejadian : "<<1-peluang<<endl;
    cout<<"harapan munculnya dalam "<<coba<<" percobaan adalah "<<harapan<<" kali";
    return 0;

}
