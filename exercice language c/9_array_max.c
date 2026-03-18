/*
Algorithm : trouver le maximum d'un tableau


*/

#include <stdio.h>

int max(int tab[], int size){
    int tmp_max = tab[0];

    for(int i=0; i < size; i++){
        if(tab[i]>tmp_max)
            tmp_max = tab[i];
    }

    return tmp_max;
}

void print_tab(int tab[], int size){
    for(int i=0; i < size; i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int main(){
    int n=0;
    printf("entrer valeur n :");
    scanf("%d",&n);
    //int tab[]={1,2,3,4,5,6};
    
    int tab[n];
    for(int i=0; i < n; i++){
        printf("entrer valeur %d :",i);
        scanf("%d",&tab[i]);
    }

    print_tab(tab,n);
    int m = max(tab,n);
    printf("max of tab : %d",m);

    return 0;
}