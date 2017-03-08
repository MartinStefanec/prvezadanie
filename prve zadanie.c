#include<stdio.h>



short int swap_endianness(short int *cislo){
	unsigned char *cislo1,*cislo2,cislo3;
	
	cislo1=(unsigned char*)cislo;
	cislo2=(unsigned char*)cislo+1;
	
	cislo3=*cislo1;
	*cislo1=*cislo2;
	*cislo2=cislo3;
	return(*cislo);
	
}

main(){
	short int cislo;
	printf("zadajte cislo: ");
	scanf("%d",&cislo);
	swap_endianness(&cislo);
	printf("cislo s prehodenymi bajtami: %d",cislo);
}
