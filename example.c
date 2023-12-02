#include <stdio.h>

int main(void){
	float tutar,bakiye=0.0;
	int x;
	
	do{
		printf("\nBankacilik Islemleri\n");
		printf("1 - Para Yatirma\n");
		printf("2 - Para Cekme\n");
		printf("3 - Bakiye Sorgulama\n");
		printf("4 - Cikis\n");
		printf("Yapmak istediginiz islem: ");
		scanf("%d",&x);
		
		switch(x){
			case 1:
				printf("Yatiralacak tutar: ");
				scanf("%f",&tutar);
				bakiye+=tutar;
				printf("Yeni bakiye: %f\n",bakiye);
				break;
			case 2:
				printf("Cekilecek tutar: ");
				scanf("%f",&tutar);
				if(tutar>bakiye){
					printf("Yetersiz bakiye.Islem yapilamadi.\n");
				}
				else{
					bakiye-=tutar;
					printf("Yeni bakiye: %f\n",bakiye);
				}
				break;
			case 3:
				printf("Bakiye: %f\n",bakiye);
				break;
			case 4:
				printf("Cikis yapiliyor.\n");
				break;
			default:
				printf("Hatali secim yaptiniz.Tekrar deneyiniz.\n");
		}
	}while(x!=4);
	
	
	
	return (0);
}
