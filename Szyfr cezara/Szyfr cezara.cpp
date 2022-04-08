#include<iostream>  //aby kod zadziałał trzeba napisać wyraz z dużych liter
#define STOP '\n'
using namespace std;
int main() {
   
    int a = 0;
    int b = 0;
    int znacznik = 0;
    char c;
    char tab[19];
    char tab2[19];
    char alfabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    int l_znak = 0;
    cout << "Podaj wyraz:" << '\n';
    while ((c = getchar()) != STOP) {
        tab[l_znak] = c;
        l_znak++;
    }

    if (l_znak <= 20) {
        for (int i = 0; i != l_znak; i++) {
            for (int x = 0; x != 23; x++) {
                if (tab[i] == alfabet[x]) {
                    b = x;
                    a = x;
                    a = a + 3;
                    tab2[i] = alfabet[a];

                }
                if (tab[i] == ' ') {
                    tab2[i] = ' ';
                }


            }

            for (int x = 23; x != 26; x++) {
                a = 0;
                if (tab[i] == alfabet[x]) {
                    a = x - 23;
                    tab2[i] = alfabet[a];
                }
            }

        }
        cout << "Zaszyfrowany wyraz: ";
        for (int i = 0; i != l_znak; i++) {
            cout << tab2[i];
        }
        cout << '\n';
        system("Pause");
    }
    

}