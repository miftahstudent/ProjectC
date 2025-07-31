#include<iostream>

using namespace std;
int main ()
{
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
    cout<<"                      <<(  SELAMAT  )>>                 "<<endl;
    cout<<"                      <<(  DATANG   )>>                 "<<endl;
    cout<<"                    <<( DI RESTORAN  )>>                "<<endl;
    cout<<"               <<(  LOS POLLOS HERMANOS  )>>            "<<endl;
    cout<<"========================================================"<<endl;
    cout<<""<<endl;
   
    cout<<"MENU MAKANAN DAN MINUMAN           |        HARGA"<<endl;
    cout<<"===================================|==================="<<endl;
    cout<<"1. MIE GORENG                      | Rp. 10.000"<<endl;
    cout<<"2. NASI GORENG                     | Rp. 12.000"<<endl;
    cout<<"3. MIE PANGSIT                     | Rp. 10.000"<<endl;
    cout<<"4. AYAM BAKAR                      | Rp. 12.000"<<endl;
    cout<<"5. BAKSO                           | Rp. 15.000"<<endl;
    cout<<"6. JUS JERUK                       | Rp.  6.000"<<endl;
    cout<<"7. AIR GELAS                       | Rp.  2.000"<<endl;
    cout<<"8. ES TEH MANIS                    | RP.  5.000"<<endl;
    cout<<"9. KOPI SUSU                       | RP.  6.000"<<endl;
    cout<<"10. KOPI HITAM                     | RP.  5.000"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"MIE GORENG"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"NASI GORENG"<<endl;
            pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"MIE PANGSIT"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"AYAM BAKAR"<<endl;
            pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"BAKSO"<<endl;
            pri=15000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"JUS JERUK"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<'\n'<<"AIR GELAS"<<endl;
            pri=2000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 8:
        cout<<'\n'<<"ES TEH MANIS"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 9:
        cout<<'\n'<<"KOPI SUSU"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 10:
        cout<<'\n'<<"KOPI HITAM"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}
