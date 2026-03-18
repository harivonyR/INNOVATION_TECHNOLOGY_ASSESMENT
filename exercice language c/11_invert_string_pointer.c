/*
algorithm : inverser une chaine de charactère grace à un pointer

début
    fonction invert_string(str)
        i = 0
        j = longueur de str - 1

        tant que i < j
            temp = str[i]
            str[i] = str[j]
            str[j] = temp

            i++
            j--

*/

#include <stdio.h>
#include <string.h>

void invert(char chaine[]){
    int len = strlen(chaine);
    char tmp = 'c';

    for(int i=len-1;i>0;i--){
        tmp = chaine[i];
        chaine[i] = chaine[len-1-i];
        chaine[len-1-i] = tmp;
    }
}

void print_string(char chaine[]){
    for(int i=0;chaine[i] != '\0';i++){
        printf("%c",chaine[i]);
    }
    printf("\n");
}

int main(){
    char chaine[] = "Hello World!";
    
    printf("La chaine originale : ");
    print_string(chaine);

    invert(chaine);

    printf("La chaine inversée : ");
    print_string(chaine);

    return 0;
}