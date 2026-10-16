#include <stdio.h>
#include <stdlib.h>

struct tanque{
	char sector[10];
	char nombretanque[10];
	int *nivel;
}tan[10];

void crear_tanque(int);

void buscar_tanque(int);

void menor_tanque(int);

void cambiar_nivel(int,char[10],char[10]);
int main() {
	int opcion;
	char bus[10],busa[10];
	
	int k,cant_tanques=0,c=0,y,x,l;
	
	do{
		printf("1-crear tanque\n");
		printf("2-buscar tanque\n");
		printf("3-tanques con menor nivel(requiere minimo 2 tanques)\n");
		printf("4-cambiar nivel\n");
		
	scanf("%d",&opcion);

	switch(opcion){
	case 1:
		crear_tanque(cant_tanques);
		cant_tanques=cant_tanques+1;
		
		break;
	case 2:
		
		buscar_tanque(cant_tanques);
		
		break;
	case 3:
		
		menor_tanque(cant_tanques);
		
		
		break;	
		case 4:
			printf("sector\n");
			scanf("%s",&bus);
			printf("nombre\n");
			scanf("%s",&busa);
			cambiar_nivel(cant_tanques,bus,busa);
			break;
		
	default:;
		
	
	}
	}
	while(opcion!=5);
		  
	
	
}
void crear_tanque(int cant_tanques){

	int repe=0;
	tan[cant_tanques].nivel=(int*)malloc(sizeof(int));
	
	printf("sector\n");
	scanf("%s",&tan[cant_tanques].sector);
	printf("nombre de tanque\n");
	scanf("%s",&tan[cant_tanques].nombretanque);
	do{
		printf("nivel\n");
		scanf("%d",&*tan[cant_tanques].nivel);
	}
	while(100<*tan[cant_tanques].nivel||0>*tan[cant_tanques].nivel);
	
}
	void buscar_tanque(int cant_tanques){
		int repe=0;
		char bus[10],busa[10];
		int com,coma;
		printf("sector\n");
		scanf("%s",&bus);
		printf("nombre\n");
		scanf("%s",&busa);
		for(repe=0;repe<cant_tanques;repe++){
			
			com=strcmp(bus,tan[repe].sector);
			
			coma=strcmp(busa,tan[repe].nombretanque);
			
			
			if(com==0&&coma==0){
				printf("sector:%s\n",tan[repe].sector);
				printf("tanque:%s\n",tan[repe].nombretanque);
				printf("nivel:%d\n",*tan[repe].nivel);
				repe=20;
			}
			
		}
	}
void menor_tanque(int cant_tanques){
	int repe,menor1,repe1,conta=0,menor2;
	for(repe=0;repe<100;repe++){
		
		
		
		for(repe1=0;repe1<cant_tanques;repe1++){
			
			if(*tan[repe1].nivel==repe){
				
				
				if(conta==0){
					menor1=repe1;
					
				}
				if(conta==1){
				menor2=repe1;
					printf("sector:%s\n",tan[menor1].sector);
					printf("nombre:%s\n",tan[menor1].nombretanque);
					printf("nivel:%d\n",*tan[menor1].nivel);
					printf("sector:%s\n",tan[menor2].sector);
					printf("tanque:%s\n",tan[menor2].nombretanque);
					printf("nivel:%d\n",*tan[menor2].nivel);
				}
				
				conta=conta+1;
			}
		}
	}
	conta=0;
}
void cambiar_nivel(int Cant_tanques,char bus[10],char busa[10]){
	
	int repe;
		int com,coma;
	for(repe=0;repe<Cant_tanques;repe++){
		
		com=strcmp(bus,tan[repe].sector);
		
		coma=strcmp(busa,tan[repe].nombretanque);
		
		
		if(com==0&&coma==0){
			printf("sector:%s\n",tan[repe].sector);
			printf("tanque:%s\n",tan[repe].nombretanque);
			printf("nuevo nivel:");
			tan[repe].nivel=(int*)realloc(tan[repe].nivel,sizeof(int));
			do{
				scanf("%d",&*tan[repe].nivel);
				printf("nivel:%d\n",*tan[repe].nivel);
			}
			while(100<*tan[repe].nivel||0>*tan[repe].nivel);
			repe=20;
		}
		
	}
}
