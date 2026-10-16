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
	
	int i,k,a=0,c=0,y,x,l;
	
	do{
		printf("1-crear tanque\n");
		printf("2-buscar tanque\n");
		printf("3-tanques con menor nivel(requiere minimo 2 tanques)\n");
		printf("4-cambiar nivel\n");
		
	scanf("%d",&opcion);

	switch(opcion){
	case 1:
		crear_tanque(a);
		a=a+1;
		
		break;
	case 2:
		
		buscar_tanque(a);
		
		break;
	case 3:
		
		menor_tanque(a);
		
		
		break;	
		case 4:
			printf("sector\n");
			scanf("%s",&bus);
			printf("nombre\n");
			scanf("%s",&busa);
			cambiar_nivel(a,bus,busa);
			break;
		
	default:;
		
	
	}
	}
	while(opcion!=5);
		  
	
	
}
void crear_tanque(int a){

	int i=0;
	tan[a].nivel=(int*)malloc(sizeof(int));
	
	printf("sector\n");
	scanf("%s",&tan[a].sector);
	printf("nombre de tanque\n");
	scanf("%s",&tan[a].nombretanque);
	do{
		printf("nivel\n");
		scanf("%d",&*tan[a].nivel);
	}
	while(100<*tan[a].nivel||0>*tan[a].nivel);
	
}
	void buscar_tanque(int a){
		int i=0;
		char bus[10],busa[10];
		int com,coma;
		printf("sector\n");
		scanf("%s",&bus);
		printf("nombre\n");
		scanf("%s",&busa);
		for(i=0;i<a;i++){
			
			com=strcmp(bus,tan[i].sector);
			
			coma=strcmp(busa,tan[i].nombretanque);
			
			
			if(com==0&&coma==0){
				printf("sector:%s\n",tan[i].sector);
				printf("tanque:%s\n",tan[i].nombretanque);
				printf("nivel:%d\n",*tan[i].nivel);
				i=20;
			}
			
		}
	}
void menor_tanque(int a){
	int i,y,k,c=0,x;
	for(i=0;i<100;i++){
		
		
		
		for(k=0;k<a;k++){
			
			if(*tan[k].nivel==i){
				
				
				if(c==0){
					y=k;
					
				}
				if(c==1){
					x=k;
					printf("sector:%s\n",tan[y].sector);
					printf("nombre:%s\n",tan[y].nombretanque);
					printf("nivel:%d\n",*tan[y].nivel);
					printf("sector:%s\n",tan[x].sector);
					printf("tanque:%s\n",tan[x].nombretanque);
					printf("nivel:%d\n",*tan[x].nivel);
				}
				
				c=c+1;
			}
		}
	}
	c=0;
}
void cambiar_nivel(int a,char bus[10],char busa[10]){
	
	int i;
		int com,coma;
	for(i=0;i<a;i++){
		
		com=strcmp(bus,tan[i].sector);
		
		coma=strcmp(busa,tan[i].nombretanque);
		
		
		if(com==0&&coma==0){
			printf("sector:%s\n",tan[i].sector);
			printf("tanque:%s\n",tan[i].nombretanque);
			printf("nuevo nivel:");
			tan[i].nivel=(int*)realloc(tan[i].nivel,sizeof(int));
			do{
				scanf("%d",&*tan[i].nivel);
				printf("nivel:%d\n",*tan[i].nivel);
			}
			while(100<*tan[i].nivel||0>*tan[i].nivel);
			i=20;
		}
		
	}
}
