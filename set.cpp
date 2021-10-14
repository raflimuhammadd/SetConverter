#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    char kondisi;
    bool quit;

    do {
    int dataA[50], dataB[50];//data setiap himpunan
    int a, b;//banyak data anggota
    cout << "Masukan Banyak Data A = ";
    cin >> a;

    cout << "Masukan Banyak Data B = ";
    cin >> b;

    for (int i = 0; i < a; i++) {
        cout << "Masukan anggota A ke - " << i << " = ";
        cin >> dataA[i];
    }

    for (int i = 0; i < b; i++) {
        cout << "Masukan anggota B ke - " << i << " = ";
        cin >> dataB[i];
    }

    cout << "Himpunan A = {";
    for (int i = 0; i < a; i++) {
        cout << dataA[i] << ",";
    }
    cout << "}" << endl << endl;

    cout << "Himpunan B = {";
    for (int i = 0; i < b; i++) {
        cout << dataB[i] << ",";
    }
    cout << "}" << endl << endl;

    cout << endl << "A irisan B = { ";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (dataA[i] == dataB[j]) {
                cout << dataA[i] << ",";
            }
        }
    }
    cout << "}" << endl;

    cout << "A gabungan B = {";
    for (int i = 0; i < a; i++) {
        cout << dataA[i] << ",";
    }
    for (int i = 0; i < b; i++) {
        cout << dataB[i] << ",";
    }
    cout << "}" << endl;

        bool quitQuestion;
        do {
            cout << "Mencoba Lagi (1 = ya, 2 = tidak) = ";
            cin >> kondisi;
            if (kondisi == '1' || kondisi == 'y') {
                quit = false;
                quitQuestion = true;
                system("CLS");
            }
            else if (kondisi == '2' || kondisi == 'n') {
                quit = true;
                quitQuestion = true;
            }
            else {
                cout << "Input salah\n";
                quitQuestion = false;
            }
        } while (!quitQuestion);
    }while (!quit);
    system("pause");

    return 0;
}
