#include <iostream>
#include <string>

using namespace std;

int main() {
    string alamat;
    int belanja, diskon, diskon1, diskon2, bayar, status;
    
    cout << "masukkan total belanja" << endl;
    cin >> belanja;
    if (belanja >= 1102019) {
        cout << "masukkan status anda" << endl;
        cout << "1. menikah dan memiliki anak" << endl;
        cout << "2. menikah tapi belum memiliki anak" << endl;
        cout << "3. belum menikah dan memiliki kartu anggota" << endl;
        cout << "4. sudah menikah tapi belum memiliki kartu anggota" << endl;
        cin >> status;
        if (status == 1) {
            diskon = belanja * 0.75;
            bayar = belanja - diskon;
            cout << "anda mendapatkan diskon sebanyak 75%" << endl;
            cout << "total yang anda bayar sementara adalah" << endl;
            cout << bayar << endl;
            cout << "masukkan alamat KTP anda untuk mendapatkan diskon tambahan" << endl;
            cin >> alamat;
            if (alamat == "makassar") {
                cout << "total yang anda harus bayar" << endl;
                cout << bayar << endl;
                cout << "anda tidak mendapatkan tambahan diskon" << endl;
            } else {
                cout << "selamat anda mendapatkan diskon tambahan" << endl;
                diskon1 = belanja * 0.1;
                diskon2 = bayar - diskon1;
                cout << "total yang harus anda bayar adalah" << endl;
                cout << diskon2 << endl;
            }
        } else {
            if (status == 2) {
                diskon = belanja * 0.5;
                bayar = belanja - diskon;
                cout << "anda mendapatkan diskon sebanyak 50%" << endl;
                cout << "total yang anda bayar sementara adalah" << endl;
                cout << bayar << endl;
                cout << "masukkan alamat KTP anda untuk mendapatkan diskon tambahan" << endl;
                cin >> alamat;
                if (alamat == "makassar") {
                    cout << "total yang anda harus bayar" << endl;
                    cout << bayar << endl;
                    cout << "anda tidak mendapatkan tambahan diskon" << endl;
                } else {
                    cout << "selamat anda mendapatkan diskon tambahan" << endl;
                    diskon1 = belanja * 0.1;
                    diskon2 = bayar - diskon1;
                    cout << "total yang harus anda bayar adalah" << endl;
                    cout << diskon2 << endl;
                }
            } else {
                if (status == 3) {
                    diskon = belanja * 0.25;
                    bayar = belanja - diskon;
                    cout << "anda mendapatkan diskon sebanyak 25%" << endl;
                    cout << "total yang anda bayar sementara adalah" << endl;
                    cout << bayar << endl;
                    cout << "masukkan alamat KTP anda untuk mendapatkan diskon tambahan" << endl;
                    cin >> alamat;
                    if (alamat == "makassar") {
                        cout << "total yang anda harus bayar" << endl;
                        cout << bayar << endl;
                        cout << "anda tidak mendapatkan tambahan diskon" << endl;
                    } else {
                        cout << "selamat anda mendapatkan diskon tambahan" << endl;
                        diskon1 = belanja * 0.1;
                        diskon2 = bayar - diskon1;
                        cout << "total yang anda harus bayar adalah" << endl;
                        cout << diskon2 << endl;
                    }
                } else {
                    if (status == 4) {
                        diskon = belanja * 0.1;
                        bayar = belanja - diskon;
                        cout << "anda mendapatkan diskon sebanyak 10%" << endl;
                        cout << "total yang anda bayar sementara adalah" << endl;
                        cout << bayar << endl;
                        cout << "masukkan alamat KTP anda untuk mendapatkan diskon tambahan" << endl;
                        cin >> alamat;
                        if (alamat == "makassar") {
                            cout << "total yang anda harus bayar" << endl;
                            cout << bayar << endl;
                            cout << "anda tidak mendapatkan tambahan diskon" << endl;
                        } else {
                            cout << "selamat anda mendapatkan diskon tambahan" << endl;
                            diskon1 = belanja * 0.1;
                            diskon2 = bayar - diskon1;
                            cout << "total yang anda harus bayar adalah" << endl;
                            cout << diskon2 << endl;
                        }
                    } else {
                        cout << "tidak ada dalam pilihan" << endl;
                    }
                }
            }
        }
    } else {
        cout << "anda tidak mendapatkan diskon" << endl;
    }
    return 0;
}

