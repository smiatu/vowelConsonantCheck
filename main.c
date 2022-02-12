//Napisz program w C,
// który wydrukuje czy wczytana litera jest samogłoską, czy spółgłoską.
//lab8 zad2

#include <stdio.h>

int main()
{
    char ch;
    int malaSamogloska, duzaSamogloska;
    printf("Wpisz litere: ");
    scanf("%c",&ch);

    malaSamogloska = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    duzaSamogloska = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if(malaSamogloska||duzaSamogloska){
            printf("Wpisana litera %c jest samogloska",ch);
        } else {
            printf("Wpisana litera %c nie jest samogloska",ch);
        }
    }
    else{
        printf("Wpisany symbol nie jest litera");
    }
    return 0;
}