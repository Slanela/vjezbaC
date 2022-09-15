#include <stdio.h> // standardna biblioteka za ispis i unos podataka
#include <math.h> // biblioteku za predefinisane matematicke funkcije


int main() {

    /* OPERATORI:
        a) aritmeticki operatori
            + - * / %
    */

    // primjer aritmeticki operatori:

    int brojA = 5; // int brojA = 5, brojB = 3;
    int brojB = 3; // = operator dodjele

    brojB /*6 = 3 + 3*/ = brojB /*3*/ + 3;

    /* 3 + 3 = 6 */
    brojB += 3;

    float kolicnik = (float)brojA / (float)brojB; // smjestamo rezultat u memoriju FLOAT KORISTITI ZA DIJELJENJE, INT ZA SVE OSTALO.

    // (float), (int) - cast operator koji mijenja tip podatka neke varijable kako bi mogli vrsiti razlicite aritm. operacije.

    printf("%.3f\n\nDrugi zadatak:\n", kolicnik); // prikazivanje rezultata

    // %.3f nam sluzi da se prikazu 3 decimale


    // mali kalkulator:

    int broj1, broj2; // unosimo dva broja

    printf("Prvi broj = "); // ispisujemo korisniku da unese prvi broj
    scanf("%i", &broj1); // korisnik unosi prvi broj

    printf("Drugi broj = "); // ispisujemo korisniku da unese drugi broj
    scanf("%i", &broj2); // korisnik unosi drugi broj

    int sumaDvaBroja = broj1 + broj2; // sumaDvaBroja varijabla dobija vrijednost prvog broja plus drugog broja

    printf("%i + %i = %i\n\n", broj1, broj2, sumaDvaBroja); // eye-candy efekat, da lijepo izgleda ispis

    //      5 + 3 = 8       5, 3, 8; objasnjenje ispisa

    // ispisati kvadrat unesenog broja.

    int nekiBroj; // nekiBroj varijabla

    int stepen = 2; // stepen na koji ce se broj stepenovat

    printf("Unesite broj koji ce se kvadrirati: "); // poruka korisniku
    scanf("%i", &nekiBroj); // pokupi vrijednost od korisnika i smjesti je u varijablu nekiBroj

    int kvadratNekogBroja = pow(nekiBroj, stepen); // kvadratNekogBroja = nekiBroj * nekiBroj

    printf("%i * %i = %i", nekiBroj, nekiBroj, kvadratNekogBroja); // opet eye-candy

    //      5  *  5 = 25 ,     5   ,    5    ,      5^2 / 5*5 = 25

    return 0; // zavrsavamo program
}

