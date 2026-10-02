#include <stdio.h>
#include <stdlib.h>

int main() {
	int o;
	int com,coma;
	char bus[10],busa[10];
	struct tanque{
		char sector[10];
		char nombretanque[10];
		int *nivel;
	}tan[10];
	int i,k,a=0,c=0,y,x,l;
	
	do{
		printf("1-crear tanque\n");
		printf("2-buscar tanque\n");
		printf("3-tanques con menor nivel(requiere minimo 2 tanques)\n");
		printf("4-cambiar nivel\n");
		
	scanf("%d",&o);

	switch(o){
	case 1:
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
		a=a+1;
		
		break;
	case 2:
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
		
		break;
	case 3:
		
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
		break;	
		case 4:
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
			
			break;
		
	default:;
		
	
	}
	}
	while(o!=5);
		  
	
	
	

}

