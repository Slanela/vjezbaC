#include <stdio.h>

int main(){
    printf("Ovo je prvi zadatak.\nDan mi je bio\t dobar."); // ispis (printf("poruka");) i escape sequence - formatiranje ispisa ( \n, \t...).

    // a ovo je u jednoj liniji komentar

    /*
        ovo je viselinijski komentar
    */
    // int varijabla; // deklarišemo varijablu

    // varijabla = 15; // varijabla inicijalizirana i sadrzi vrijednost 15

    // varijable:

    int varijabla = 15; // integer je za cijele brojeve (int), formater je %d
    float varijabla_decimalni_zarez = 15.5746; // float je za brojeve sa decimalnim zarezom do 6 decimala (float), formater je %fl
    double varijabla_decimalni_zarez_dupla = 15.921903809; // double je za brojeve sa decimalnim zarezom do 12 decimala (double), formater je %lf
    char jedno_slovo = 'a'; // char za jedan karakter ili slovo

    int a = 4;

    printf("\n%d", a); // %d je formater za cijele brojeve

    // varijable se mogu koristiti za spremanje podataka i daljnju upotrebu
    return 0;
}
