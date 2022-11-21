#include <iostream>
using namespace std;

int main()
{
    //* 1. membedakan genap ganjil
    int a1;
    cout << "Masukkan Angka : ";
    cin >> a1;
    a1 % 2 == 0 ? cout << "Genap" : cout << "Ganjil";
    cout << "\n==================================" << endl
         << endl;

    //* 2. session
    string username, password;
    cout << "Masukkan username : ";
    cin >> username;
    cout << "Masukkan password : ";
    cin >> password;
    if (username == "admin" && password == "admin123")
    {
        cout << "Username dan password sesuai, Login Berhasil" << endl;
    }
    else if (username == "admin" && password != "admin123")
    {
        cout << "Username sesuai, password tidak sesuai!" << endl;
    }
    else if (username != "admin" && password == "admin123")
    {
        cout << "Username tidak sesuai, password sesuai!" << endl;
    }
    else if (username != "admin" && password != "admin123")
    {
        cout << "Username dan password tidak sesuai !" << endl;
    }
    else
    {
        cout << "Error!";
    }

    cout << "\n==================================" << endl
         << endl;

    //* 3. memeriksa apakah tahun kabisat atau bukan
    int tahun;

    cout << "Masukkan Tahun : ";
    cin >> tahun;

    if (tahun % 400 == 0)
    {
        cout << tahun << " adalah tahun kabisat";
    }
    else if (tahun % 100 == 0)
    {
        cout << tahun << " bukan tahun kabisat";
    }
    else if (tahun % 4 == 0)
    {
        cout << tahun << " adalah tahun kabisat";
    }
    else
    {
        cout << tahun << " bukan tahun kabisat";
    }

    cout << "\n==================================" << endl
         << endl;

    //* 4.
    int a4;
    string no1 = "1. Nasi Goreng Informatika    Rp. 5.000,-\n",
           no2 = "2. Nasi Soto Ayam Internet    Rp. 7.000,-\n",
           no3 = "3. Gado-gado Disket           Rp. 4.500,-\n",
           no4 = "4. Bubur Ayam LAN             Rp. 4.000,-\n";
    cout << "Menu Restaurant Mc'Yahud" << endl;
    cout << "==============================================" << endl;
    cout << no1;
    cout << no2;
    cout << no3;
    cout << no4;
    cout << "==============================================" << endl;
    cout << "Masukkan Pilihan Anda... : ";
    cin >> a4;
    switch (a4)
    {
    case 1:
        cout << "Pilihan No " << no1;
        break;
    case 2:
        cout << "Pilihan No " << no2;
        break;
    case 3:
        cout << "Pilihan No " << no3;
        break;
    case 4:
        cout << "Pilihan No " << no4;
        break;

    default:
        cout << "Error!";
        break;
    }

    cout << "\n==================================" << endl
         << endl;

    //* 5.
    int kodeSusu, jmlPembelian;
    float totalPembelian;
    string ukuran;

    cout << " ----------------------------------------------------" << endl;
    cout << "| Kode Susu | Nama Produk | Ukuran    | Harga        |" << endl;
    cout << " ----------------------------------------------------" << endl;
    cout << "| 1         | Dancow      | (B)Besar  | Rp. 10.000   |" << endl;
    cout << "|           |             | (S)Sedang | Rp. 4.250    |" << endl;
    cout << "|           |             | (K)Kecil  | Rp. 2.100    |" << endl;
    cout << " ----------------------------------------------------" << endl;
    cout << "| 2         | Indomilk    | (B)Besar  | Rp. 8.500    |" << endl;
    cout << "|           |             | (S)Sedang | Rp. 4.000    |" << endl;
    cout << "|           |             | (K)Kecil  | Rp. 2.025    |" << endl;
    cout << " ----------------------------------------------------" << endl;
    cout << "| 3         | Sustacal    | (B)Besar  | Rp. 17.000   |" << endl;
    cout << "|           |             | (S)Sedang | Rp. 14.500   |" << endl;
    cout << "|           |             | (K)Kecil  | Rp. 8.300    |" << endl;
    cout << " ----------------------------------------------------" << endl;

    cout << "Masukkan Kode Susu(1-3) : ";
    cin >> kodeSusu;
    cout << "Masukkan Jumlah Pembelian : ";
    cin >> jmlPembelian;
    cout << "Masukkan Ukuran (B/S/K) : ";
    cin >> ukuran;

    if (kodeSusu == 1)
    {
        if (ukuran == "B")
        {
            totalPembelian = jmlPembelian * 10;
            cout << "Susu Dancow\nHarga Susu Rp. 10.000 "
                 << "Jumlah Pembelian Rp. " << totalPembelian << ".000.00";
        }
        else if (ukuran == "S")
        {
            totalPembelian = jmlPembelian * 4250;
            cout << "Susu Dancow\nHarga Susu Rp. 4.250 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else if (ukuran == "K")
        {
            totalPembelian = jmlPembelian * 2100;
            cout << "Susu Dancow\nHarga Susu Rp. 2.100 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else
        {
            cout << "Error!";
        }
    }
    else if (kodeSusu == 2)
    {
        if (ukuran == "B")
        {
            totalPembelian = jmlPembelian * 8500;
            cout << "Susu Indomilk\nHarga Susu Rp. 8.500 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else if (ukuran == "S")
        {
            totalPembelian = jmlPembelian * 4;
            cout << "Susu Indomilk\nHarga Susu Rp. 4.000 "
                 << "Jumlah Pembelian Rp. " << totalPembelian << ".000.00";
        }
        else if (ukuran == "K")
        {
            totalPembelian = jmlPembelian * 2025;
            cout << "Susu Indomilk\nHarga Susu Rp. 2.025 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else
        {
            cout << "Error!";
        }
    }
    else if (kodeSusu == 3)
    {
        if (ukuran == "B")
        {
            totalPembelian = jmlPembelian * 17;
            cout << "Susu Sustacal\nHarga Susu Rp. 17.000 "
                 << "Jumlah Pembelian Rp. " << totalPembelian << ".000.00";
        }
        else if (ukuran == "S")
        {
            totalPembelian = jmlPembelian * 14500;
            cout << "Susu Sustacal\nHarga Susu Rp. 14.500 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else if (ukuran == "K")
        {
            totalPembelian = jmlPembelian * 8300;
            cout << "Susu Sustacal\nHarga Susu Rp. 8.300 "
                 << "Jumlah Pembelian Rp. " << totalPembelian;
        }
        else
        {
            cout << "Error!";
        }
    }
    else
    {
        cout << "Error!";
    }
}