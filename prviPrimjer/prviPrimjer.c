#include <stdio.h> // biblioteka za ispis i upis podataka (STANDARD INPUT & OUTPUT.header file)

int main() { // glavna funkcija (jos se naziva i metoda, nisu nam trenutno bitne) u kojoj se izvrsavaju sve instrukcije (linije koda)

    // ISPIS U KONZOLU & ESCAPE SEQUENCE:

    printf("Ovo je prvi zadatak.\nDan mi je bio\t dobar."); // ispis (printf("poruka");) i escape sequence - formatiranje ispisa ( \n, \t...).

    // -----------------------------------------------------------------------------------------------------------------------------------------

    // KOMENTARI:

    // a ovo je u jednoj liniji komentar

    /*
        ovo je viselinijski komentar
    */

    // DEKLARACIJA VARIJABLI:

    // int varijabla; - deklarišemo varijablu koja nema vrijednost (NULL je nacin da se opise odsustvo vrijednosti)

    // varijabla = 15; - varijabla inicijalizirana i sadrzi vrijednost 15

    // umjesto da pisemo kod kao navedeno iznad, mozemo sastaviti te dvije linije koda u jednu:

    //int (<- TIP PODATKA) imeVarijable (<- NAZIV) = (<- OPERATOR DODJELJIVANJA VRIJEDNOSTI) 15 (<- INICIJALNA VRIJEDNOST)

    // -----------------------------------------------------------------------------------------------------------------------------------------

    // TIPOVI PODATAKA I VARIJABLE:

    // mogu se koristiti za spremanje podataka i daljnju upotrebu istih (ispis, neke operacije itd.) takodjer mogu sadrzati 4 default podrzana
    // tipa podataka (int, float, double i char):

    int varijabla = 15; // integer je za cijele brojeve (int), formater je %d
    float varijabla_decimalni_zarez = 15.5746; // float je za brojeve sa decimalnim zarezom do 6 decimala (float), formater je %fl
    double varijabla_decimalni_zarez_dupla = 15.921903809; // double je za brojeve sa decimalnim zarezom do 12 decimala (double), formater je %lf
    char jedno_slovo = 'a'; // char za jedan karakter ili slovo

    int a = 4; // primjer loseg naziva varijable

    // ! IMENA VARIJABLI NE SMIJU POCINJATI POSEBNIM KARAKTERIMA, BROJEVIMA I KLJUCNIM RIJECIMA (return, include...)

    // -----------------------------------------------------------------------------------------------------------------------------------------

    // ISPIS INICIJALIZIRANIH VARIJABLI (sadrze vrijednost) POMOCU FORMATERA I PRINTF

    printf("\n%d", a); // %d je formater za cijele brojeve
    printf("\n%d", varijabla); // nazivi varijabla nisu bitni, ali u siroj slici pomaze da se varijable nazivaju po svojoj svrsi ili po podatku koji sadrze
    // a je losa praksa, dok je varijabla_cijeli_broj dobra praksa, moze se jos nazvati i kao varijablaCijeliBroj ili cijeliBroj.
    printf("\n%f", varijabla_decimalni_zarez); // %f je formater za brojeve sa decimalnim zarezom (6 mjesta)
    printf("\n%lf", varijabla_decimalni_zarez_dupla); // %lf je formater za brojeve sa dvostrukom preciznoscu poslije dec. zareza (12 mjesta)
    printf("\n%c", jedno_slovo); // %c je za karaktere odnosno bilo sta specificirano medju jednostrukim navodnicima: 'a', '1', '+'

    // formater oznacava gdje i kog tipa ce se vrijednost neke varijable ispisati u konzolu pomocu printf

    /*
        VISE O FORMATERIMA NA:
                                https://www.tutorialspoint.com/format-specifiers-in-c
    */

    // -----------------------------------------------------------------------------------------------------------------------------------------

    return 0; // return VRIJEDNOST (za kraj main funkcije generalno najbolje napisati 0) prekida program. (PROCESS RETURNED 0 U KONZOLI!).
} // VITICASTE ZAGRADE OPISUJU ODAKLE DOKLE SE PROSTIRE MAIN FUNKCIJA IL GLAVNI DIO PROGRAMA.


// NE PISATI KOD IZVAN VITICASTIH ZAGRADA, DESIT CE SE GRESKA (greske su normalna stvar)
