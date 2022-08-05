#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int kode, pri, jml, tot, byr, kbl;
char mad;

do{
   cout<<"              KANTIN          "<<endl;
   cout<<"             *SKANIFO*         "<<endl;
   cout<<"      Aplikasi Kasir Kantin      "<<endl;
   cout<<"================================"<<endl;
   cout<<""<<endl;
   cout<<"MENU MAKANAN          HARGA"<<endl;
   cout<<"1. NASI GORENG        Rp. 10.000"<<endl;
   cout<<"2. SOTO AYAM          Rp. 8.000"<<endl;
   cout<<"3. MIE GORENG         Rp. 8.000"<<endl;
   cout<<"4. MIE REBUS          Rp. 8.000"<<endl;
   cout<<"4. NASI RAMES         Rp. 8.000"<<endl;
   cout<<"5. ES TEH             Rp. 3.000"<<endl;
   cout<<"6. ES JERUK           Rp. 5.000\n"<<endl;
   cout<<"================================="<<endl;
   cout<<"MASUKKAN PESANAN ANDA : ";
   cin>>kode;
   switch(kode){
   case 1 :
    cout<<"NASI GORENG"<<endl;
    pri=10000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 2 :
    cout<<"SOTO AYAM"<<endl;
    pri=8000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 3 :
    cout<<"MIE GORENG"<<endl;
    pri=8000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 4 :
    cout<<"MIE REBUS"<<endl;
    pri=8000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 5 :
    cout<<"NASI RAMES"<<endl;
    pri=8000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 6 :
    cout<<"ES TEH"<<endl;
    pri=3000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    cout<<""<<endl;
    break;
   case 7 :
    cout<<'n'<<"ES JERUK"<<endl;
    pri=5000;
    cout<<"MASUKKAN JUMLAH PESANAN : ";
    cin>>jml;
    tot=pri*jml;
    cout<<"TOTAL HARGA : Rp. "<<tot<<endl;
    cout<<"DIBAYAR : Rp. ";
    cin>>byr;
    kbl=byr-tot;
    cout<<"KEMBALIAN : Rp. "<<kbl<<endl;
    cout<<"MASIH ADA PESANAN LAGI(Y/T) : ";
    cin>>mad;
    break;

   default:
    cout<<"KODE YANG ANDA MASUKKAN TIDAK ADA";
    getch();
   }
}
while(mad/='Y');
cout<<"Terima Kasih Atas Kunjungan Anda di KANTIN SKANIFO";
getch();
}
