#include <stdio.h>


int licz_silnia_iteracyjnie (int n);

int main(){
    int silnia;
    int n;
    printf("podaj liczbe :\n");
    scanf("%d",&n);

    silnia = licz_silnia_iteracyjnie(n);
    printf("silnia iteracyjnie : %d\n", silnia);

    silnia = licz_silnia_rekurencyjnie(n);
    printf("silnia rekurencyjnie: %d", silnia);

    return 0;



}
int licz_silnia_rekurencyjnie(int n){
    if(n<2){ return 1;}
    else {return n*licz_silnia_rekurencyjnie(n-1);}
}

int licz_silnia_iteracyjnie(int n){
    int wynik =1,i;
    for (i=2; i<=n; ++i){
        wynik*=i;
    }
    return wynik;
}