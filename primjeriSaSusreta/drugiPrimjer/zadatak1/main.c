#include <stdio.h>

// unesite koliko korisnik ima godina i ispisite u konzolu. (scanf, printf & varijable)

int main () {

    int brojGodina = 0;                             // varijabla za unos cijelih brojeva

    printf("Unesite koliko ste stari: ");           // poruka korisniku

    scanf("%i", &brojGodina);                       // radi obrnuto od printf-a, prima podatak od korisnika umjesto da ga ispisuje.
    printf("Korisnik ima %i godina", brojGodina);   // ispisujemo podatak koji je korisnik unio u vidu poruke.

    return 0;
}
