#include <stdio.h>
#include <stdlib.h>

/* FERAMÝZ KILIÇ 24103091060 */

int main(int argc, char *argv[]) {
	
	
	
	
	
	int ort;
	
    printf("Lutfen ortalamanizi giriniz: ");
    scanf("%d", &ort);
    
    switch(ort){
	
	case 0 ... 49: printf("FF");break;
	case 50 ... 57: printf("DD");break;
	case 58 ... 66: printf("DC");break;
	case 67 ... 74: printf("CC");break;
	case 75 ... 79: printf("CB");break;
	case 80 ... 84: printf("BB");break;
	case 85 ... 91: printf("BA");break;
	case 92 ... 100:printf("AA");break;
	
	default : printf("Gecersiz ortalama");
	break;
	
	
	
}
	
	return 0;
}
