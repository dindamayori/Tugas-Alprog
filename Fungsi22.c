#include <stdio.h>
int main(){
    int sisi,keliling,luas;

    //Input Variabel
    printf("Program Menghitung keliling dan luas persegi\n\n");
    printf("Input sisi\t: ");
    scanf("%d", &sisi);


    //Menghitung Volume
    keliling=4*sisi;
    ;luas=sisi*sisi;
    printf("keliling : %d\n",keliling);
    printf("luas : %d\n",luas);
    fflush(stdin) ;
printf("\n\n") ;
 return 0;

}
