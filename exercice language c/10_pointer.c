
#include <stdio.h>


// cette fonction annul les valeurs dans un tableau
void to_null(int tab[], int size){
    for(int i=0; i < size; i++){
        tab[i] = 0;
    }
}

void print_tab(int tab[], int size){
    for(int i=0; i < size; i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int main(){
    int n=6;
    int tab[]={1,2,3,4,5,6};
    
    printf("le tableau original :");
    print_tab(tab,n);

    to_null(tab,n);

    printf("le tableau après transformation :");
    print_tab(tab,n);

    return 0;
}