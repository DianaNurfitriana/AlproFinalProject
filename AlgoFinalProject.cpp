
#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

/* FINAL PROJECT PENGENALAN ALGORITMA & PEMPROGRAMAN
    DIANA NURFITRIANA   (1910631250011)
    DEA SELVIA AMELIA   (1910631250040)
    KELAS 1A SISTEM INFORMASI  */

void pesanan();

main()
{
system("cls");
string user,pass;
char chr;
login:
    cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"\t\t\t~~SELAMAT DATANG DI KASIR CAFE 2D~~"<<endl;
    cout<<"\t\t\t~~~~~~~~~~Silahkan Login~~~~~~~~~~~"<<endl;
    cout<<"\t\t\tNama Pengguna : "; cin >> user;
    cout<<"\t\t\tKata Sandi : "; cin >> pass;
		chr=_getch();
		while(chr != 13)
            {
            pass.push_back(chr);
            cout<<'*';
            chr=_getch();
            }
    home:
	if (user=="kasir" && pass=="kasir")
	{
	    system("cls");
	    pesanan();
        getch();
	}
	else
	{
		system("cls");
		cout<<"\n\n Nama Pengguna atau Kata Sandi Salah, Silahkan Coba Lagi!!"<<endl;
		goto login;
		return (0) ;
	}
}


void pesanan()
{
menu :
    int Pilihan, Minuman, main;
    char pilih, ulang;
    double Porsi, freshmilk, milktea, coffe, capuccino, americano, latte, tea, chocofloat, strawberry, bubble, Total,Total_Minuman,Pembayaran,Kembalian;

    cout<<"\t\t\t~~><~~><~~><~~><~~><~~><~~><~~><~~><~~\n";
    cout<<"\t\t\t~~~~~~SELAMAT DATANG DI CAFE 2D~~~~~~~\n";
    cout<<"\t\t\t~~><~~><~~><~~><~~><~~><~~><~~><~~><~~\n";
    cout<<"\n";
    cout<<"\t\t\t\t~~~~Menu Makanan~~~~\n";
    cout<<"\t\t\t\t -------------------\n";
    cout<<"\t\t\t\t| 1.Pancake Maple   |"<<endl;
    cout<<"\t\t\t\t| 2.Crepes          |"<<endl;
    cout<<"\t\t\t\t| 3.Macaroon        |"<<endl;
    cout<<"\t\t\t\t| 4.French Fries    |"<<endl;
    cout<<"\t\t\t\t| 5.Roti Bakar      |"<<endl;
    cout<<"\t\t\t\t -------------------\n";
    cout<<"\t\t\t\tMasukkan Menu Makanan :  "; cin>>Pilihan;
    cout<<"\t\t\t\t--------------------------\n";
    switch(Pilihan)
    Pilihan :
    {
        case 1:
            cout<<"1.Pancake Maple\n";
            cout<<"---------------\n";
            cout<<"Harga : Rp 15000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  | 1.Brown sugar Boba Fresh Milk  |\n";
            cout<<"\t\t\t  | 2.Brown sugar Boba Milk Tea    |\n";
            cout<<"\t\t\t  | 3.Coffe                        |\n";
            cout<<"\t\t\t  | 4.Capuccino                    |\n";
            cout<<"\t\t\t  | 5.Americano                    |\n";
            cout<<"\t\t\t  | 6.Latte                        |\n";
            cout<<"\t\t\t  | 7.Tea                          |\n";
            cout<<"\t\t\t  | 8.Choco Float                  |\n";
            cout<<"\t\t\t  | 9.Strawberry Float             |\n";
            cout<<"\t\t\t  | 10.Bubble Tea                  |\n";
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  Note : Minuman Hanya Untuk 1 Jenis\n";
            cout<<"\t\t\t  Minuman : ";cin>>Minuman;
            switch(Minuman)
            {
                case 1:
                    cout<<"Brown sugar Boba Fresh Milk\n";
                    cout<<"---------------------------\n";
                    cout<<"Harga : Rp 15.000\n";
                    cout<<"Porsi : ";cin>>freshmilk;
                    Total_Minuman = 15000*freshmilk;
                    break;
                case 2:
                    cout<<"Brown sugar Boba Milk Tea\n";
                    cout<<"-------------------------\n";
                    cout<<"Harga : Rp 18.000\n";
                    cout<<"Porsi : ";cin>>milktea;
                    Total_Minuman = 18000*milktea;
                    break;
                case 3:
                    cout<<"Coffe\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 8.000\n";
                    cout<<"Porsi : ";cin>>coffe;
                    Total_Minuman = 8000*coffe;
                    break;
                case 4:
                    cout<<"Capuccino\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>capuccino;
                    Total_Minuman = 14000*capuccino;
                    break;
                case 5:
                    cout<<"Americano\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>americano;
                    Total_Minuman = 14000*americano;
                    break;
                case 6:
                    cout<<"Latte\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 12.000\n";
                    cout<<"Porsi : ";cin>>latte;
                    Total_Minuman = 12000*latte;
                    break;
                case 7:
                    cout<<"Tea\n";
                    cout<<"---\n";
                    cout<<"Harga : Rp 6.000\n";
                    cout<<"Porsi : ";cin>>tea;
                    Total_Minuman = 6000*tea;
                    break;
                case 8:
                    cout<<"Choco Float\n";
                    cout<<"-----------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>chocofloat;
                    Total_Minuman = 16000*chocofloat;
                    break;
                case 9:
                    cout<<"Strawberry Float\n";
                    cout<<"----------------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>strawberry;
                    Total_Minuman = 16000*strawberry;
                    break;
                case 10:
                    cout<<"Bubble Tea\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>bubble;
                    Total_Minuman = 14000*bubble;
                    break;
                }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_Minuman;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Cafe Kami\n";
        cout<<"Apakah anda ingin memesan kembali? [Y/N]\n";
        cin>>pilih;

        {
            if (pilih=='Y'||pilih=='y')
                goto menu;
                break;
            if (pilih=='N'||pilih=='n')
            getch();
        }

        case 2:
            cout<<"Crepes\n";
            cout<<"------\n";
            cout<<"Harga : Rp 10.000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  | 1.Brown sugar Boba Fresh Milk  |\n";
            cout<<"\t\t\t  | 2.Brown sugar Boba Milk Tea    |\n";
            cout<<"\t\t\t  | 3.Coffe                        |\n";
            cout<<"\t\t\t  | 4.Capuccino                    |\n";
            cout<<"\t\t\t  | 5.Americano                    |\n";
            cout<<"\t\t\t  | 6.Latte                        |\n";
            cout<<"\t\t\t  | 7.Tea                          |\n";
            cout<<"\t\t\t  | 8.Choco Float                  |\n";
            cout<<"\t\t\t  | 9.Strawberry Float             |\n";
            cout<<"\t\t\t  | 10.Bubble Tea                  |\n";
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  Note : Minuman Hanya Untuk 1 Jenis\n";
            cout<<"\t\t\t  Minuman : ";cin>>Minuman;
            switch(Minuman)
            {
                case 1:
                    cout<<"Brown sugar Boba Fresh Milk\n";
                    cout<<"---------------------------\n";
                    cout<<"Harga : Rp 15.000\n";
                    cout<<"Porsi : ";cin>>freshmilk;
                    Total_Minuman = 15000*freshmilk;
                    break;
                case 2:
                    cout<<"Brown sugar Boba Milk Tea\n";
                    cout<<"-------------------------\n";
                    cout<<"Harga : Rp 18.000\n";
                    cout<<"Porsi : ";cin>>milktea;
                    Total_Minuman = 18000*milktea;
                    break;
                case 3:
                    cout<<"Coffe\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 8.000\n";
                    cout<<"Porsi : ";cin>>coffe;
                    Total_Minuman = 5000*coffe;
                    break;
                case 4:
                    cout<<"Capuccino\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>capuccino;
                    Total_Minuman = 14000*capuccino;
                    break;
                case 5:
                    cout<<"Americano\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>americano;
                    Total_Minuman = 14000*americano;
                    break;
                case 6:
                    cout<<"Latte\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 12.000\n";
                    cout<<"Porsi : ";cin>>latte;
                    Total_Minuman = 12000*latte;
                    break;
                case 7:
                    cout<<"Tea\n";
                    cout<<"---\n";
                    cout<<"Harga : Rp 6.000\n";
                    cout<<"Porsi : ";cin>>tea;
                    Total_Minuman = 6000*tea;
                    break;
                case 8:
                    cout<<"Choco Float\n";
                    cout<<"-----------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>chocofloat;
                    Total_Minuman = 16000*chocofloat;
                    break;
                case 9:
                    cout<<"Strawberry Float\n";
                    cout<<"----------------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>strawberry;
                    Total_Minuman = 16000*strawberry;
                    break;
                case 10:
                    cout<<"Bubble Tea\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>bubble;
                    Total_Minuman = 14000*bubble;
                    break;
            }
        cout<<"-----\n";
        Total=(10000*Porsi)+Total_Minuman;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"Apakah anda ingin memesan kembali? [Y/N]\n";
        cin>>pilih;

        {
            if (pilih=='Y'||pilih=='y')
                goto menu;
                break;
            if (pilih=='N'||pilih=='n')
            getch();
        }

        case 3:
            cout<<"Macaroon\n";
            cout<<"-----------\n";
            cout<<"Harga : Rp 20000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  | 1.Brown sugar Boba Fresh Milk  |\n";
            cout<<"\t\t\t  | 2.Brown sugar Boba Milk Tea    |\n";
            cout<<"\t\t\t  | 3.Coffe                        |\n";
            cout<<"\t\t\t  | 4.Capuccino                    |\n";
            cout<<"\t\t\t  | 5.Americano                    |\n";
            cout<<"\t\t\t  | 6.Latte                        |\n";
            cout<<"\t\t\t  | 7.Tea                          |\n";
            cout<<"\t\t\t  | 8.Choco Float                  |\n";
            cout<<"\t\t\t  | 9.Strawberry Float             |\n";
            cout<<"\t\t\t  | 10.Bubble Tea                  |\n";
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  Note : Minuman Hanya Untuk 1 Jenis\n";
            cout<<"\t\t\t  Minuman : ";cin>>Minuman;
            switch(Minuman)
            {
                case 1:
                    cout<<"Brown sugar Boba Fresh Milk\n";
                    cout<<"---------------------------\n";
                    cout<<"Harga : Rp 15.000\n";
                    cout<<"Porsi : ";cin>>freshmilk;
                    Total_Minuman = 15000*freshmilk;
                    break;
                case 2:
                    cout<<"Brown sugar Boba Milk Tea\n";
                    cout<<"-------------------------\n";
                    cout<<"Harga : Rp 18.000\n";
                    cout<<"Porsi : ";cin>>milktea;
                    Total_Minuman = 18000*milktea;
                    break;
                case 3:
                    cout<<"Coffe\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 8.000\n";
                    cout<<"Porsi : ";cin>>coffe;
                    Total_Minuman = 8000*coffe;
                    break;
                case 4:
                    cout<<"Capuccino\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>capuccino;
                    Total_Minuman = 14000*capuccino;
                    break;
                case 5:
                    cout<<"Americano\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>americano;
                    Total_Minuman = 14000*americano;
                    break;
                case 6:
                    cout<<"Latte\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 12.000\n";
                    cout<<"Porsi : ";cin>>latte;
                    Total_Minuman = 12000*latte;
                    break;
                case 7:
                    cout<<"Tea\n";
                    cout<<"---\n";
                    cout<<"Harga : Rp 6.000\n";
                    cout<<"Porsi : ";cin>>tea;
                    Total_Minuman = 6000*tea;
                    break;
                case 8:
                    cout<<"Choco Float\n";
                    cout<<"-----------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>chocofloat;
                    Total_Minuman = 16000*chocofloat;
                    break;
                case 9:
                    cout<<"Strawberry Float\n";
                    cout<<"----------------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>strawberry;
                    Total_Minuman = 16000*strawberry;
                    break;
                case 10:
                    cout<<"Bubble Tea\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>bubble;
                    Total_Minuman = 14000*bubble;
                    break;
                }

        cout<<"-----\n";
        Total=(20000*Porsi)+Total_Minuman;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"Apakah anda ingin memesan kembali? [Y/N]\n";
        cin>>pilih;

        {
            if (pilih=='Y'||pilih=='y')
                goto menu;
                break;
            if (pilih=='N'||pilih=='n')
            getch();
        }

        case 4:
            cout<<"French Fries\n";
            cout<<"------------\n";
            cout<<"Harga : Rp 15000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  | 1.Brown sugar Boba Fresh Milk  |\n";
            cout<<"\t\t\t  | 2.Brown sugar Boba Milk Tea    |\n";
            cout<<"\t\t\t  | 3.Coffe                        |\n";
            cout<<"\t\t\t  | 4.Capuccino                    |\n";
            cout<<"\t\t\t  | 5.Americano                    |\n";
            cout<<"\t\t\t  | 6.Latte                        |\n";
            cout<<"\t\t\t  | 7.Tea                          |\n";
            cout<<"\t\t\t  | 8.Choco Float                  |\n";
            cout<<"\t\t\t  | 9.Strawberry Float             |\n";
            cout<<"\t\t\t  | 10.Bubble Tea                  |\n";
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  Note : Minuman Hanya Untuk 1 Jenis\n";
            cout<<"\t\t\t  Minuman : ";cin>>Minuman;
            switch(Minuman)
            {
                case 1:
                    cout<<"Brown sugar Boba Fresh Milk\n";
                    cout<<"---------------------------\n";
                    cout<<"Harga : Rp 15.000\n";
                    cout<<"Porsi : ";cin>>freshmilk;
                    Total_Minuman = 15000*freshmilk;
                    break;
                case 2:
                    cout<<"Brown sugar Boba Milk Tea\n";
                    cout<<"-------------------------\n";
                    cout<<"Harga : Rp 18.000\n";
                    cout<<"Porsi : ";cin>>milktea;
                    Total_Minuman = 18000*milktea;
                    break;
                case 3:
                    cout<<"Coffe\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 8.000\n";
                    cout<<"Porsi : ";cin>>coffe;
                    Total_Minuman = 8000*coffe;
                    break;
                case 4:
                    cout<<"Capuccino\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>capuccino;
                    Total_Minuman = 14000*capuccino;
                    break;
                case 5:
                    cout<<"Americano\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>americano;
                    Total_Minuman = 14000*americano;
                    break;
                case 6:
                    cout<<"Latte\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 12.000\n";
                    cout<<"Porsi : ";cin>>latte;
                    Total_Minuman = 12000*latte;
                    break;
                case 7:
                    cout<<"Tea\n";
                    cout<<"---\n";
                    cout<<"Harga : Rp 6.000\n";
                    cout<<"Porsi : ";cin>>tea;
                    Total_Minuman = 6000*tea;
                    break;
                case 8:
                    cout<<"Choco Float\n";
                    cout<<"-----------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>chocofloat;
                    Total_Minuman = 16000*chocofloat;
                    break;
                case 9:
                    cout<<"Strawberry Float\n";
                    cout<<"----------------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>strawberry;
                    Total_Minuman = 16000*strawberry;
                    break;
                case 10:
                    cout<<"Bubble Tea\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>bubble;
                    Total_Minuman = 14000*bubble;
                    break;
                }

        cout<<"-----\n";
        Total=(15000*Porsi)+Total_Minuman;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"Apakah anda ingin memesan kembali? [Y/N]\n";
        cin>>pilih;

        {
            if (pilih=='Y'||pilih=='y')
                goto menu;
                break;
            if (pilih=='N'||pilih=='n')
            getch();
        }
        case 5:
            cout<<"Roti Bakar\n";
            cout<<"----------\n";
            cout<<"Harga : Rp 10000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  | 1.Brown sugar Boba Fresh Milk  |\n";
            cout<<"\t\t\t  | 2.Brown sugar Boba Milk Tea    |\n";
            cout<<"\t\t\t  | 3.Coffe                        |\n";
            cout<<"\t\t\t  | 4.Capuccino                    |\n";
            cout<<"\t\t\t  | 5.Americano                    |\n";
            cout<<"\t\t\t  | 6.Latte                        |\n";
            cout<<"\t\t\t  | 7.Tea                          |\n";
            cout<<"\t\t\t  | 8.Choco Float                  |\n";
            cout<<"\t\t\t  | 9.Strawberry Float             |\n";
            cout<<"\t\t\t  | 10.Bubble Tea                  |\n";
            cout<<"\t\t\t   --------------------------------\n";
            cout<<"\t\t\t  Note : Minuman Hanya Untuk 1 Jenis\n";
            cout<<"\t\t\t  Minuman : ";cin>>Minuman;
            switch(Minuman)
            {
                case 1:
                    cout<<"Brown sugar Boba Fresh Milk\n";
                    cout<<"---------------------------\n";
                    cout<<"Harga : Rp 15.000\n";
                    cout<<"Porsi : ";cin>>freshmilk;
                    Total_Minuman = 15000*freshmilk;
                    break;
                case 2:
                    cout<<"Brown sugar Boba Milk Tea\n";
                    cout<<"-------------------------\n";
                    cout<<"Harga : Rp 18.000\n";
                    cout<<"Porsi : ";cin>>milktea;
                    Total_Minuman = 18000*milktea;
                    break;
                case 3:
                    cout<<"Coffe\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 8.000\n";
                    cout<<"Porsi : ";cin>>coffe;
                    Total_Minuman = 8000*coffe;
                    break;
                case 4:
                    cout<<"Capuccino\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>capuccino;
                    Total_Minuman = 14000*capuccino;
                    break;
                case 5:
                    cout<<"Americano\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>americano;
                    Total_Minuman = 14000*americano;
                    break;
                case 6:
                    cout<<"Latte\n";
                    cout<<"-----\n";
                    cout<<"Harga : Rp 12.000\n";
                    cout<<"Porsi : ";cin>>latte;
                    Total_Minuman = 12000*latte;
                    break;
                case 7:
                    cout<<"Tea\n";
                    cout<<"---\n";
                    cout<<"Harga : Rp 6.000\n";
                    cout<<"Porsi : ";cin>>tea;
                    Total_Minuman = 6000*tea;
                    break;
                case 8:
                    cout<<"Choco Float\n";
                    cout<<"-----------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>chocofloat;
                    Total_Minuman = 16000*chocofloat;
                    break;
                case 9:
                    cout<<"Strawberry Float\n";
                    cout<<"----------------\n";
                    cout<<"Harga : Rp 16.000\n";
                    cout<<"Porsi : ";cin>>strawberry;
                    Total_Minuman = 16000*strawberry;
                    break;
                case 10:
                    cout<<"Bubble Tea\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 14.000\n";
                    cout<<"Porsi : ";cin>>bubble;
                    Total_Minuman = 14000*bubble;
                    break;
                }
        cout<<"-----\n";
        Total=(10000*Porsi)+Total_Minuman;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"Apakah anda ingin memesan kembali? [Y/N]\n";
        cin>>pilih;

        {
            if (pilih=='Y'||pilih=='y')
                goto menu;
                break;
            if (pilih=='N'||pilih=='n')
            getch();
        }


        default :
            cout<<"Anda Hanya Bisa Memilih Paket Yang Sudah Tersedia. (Pilih 1-5)!!!\n";
            cin>>ulang;
            goto Pilihan;
            break;
    }
}
