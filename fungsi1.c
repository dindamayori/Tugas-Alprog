#include <stdio.h>
int main(){
    int sisi, Volume;

    //Input Variabel
    printf("Program Menghitung Volume kubus\n\n");
    printf("Input sisi\t: ");
    scanf("%d", &sisi);


    //Menghitung Volume
    Volume = 4*sisi ;
    printf("Volume kubus \t: %d cm^3\n", Volume);
    fflush(stdin) ;
printf("\n\n") ;

 return 0;

}
