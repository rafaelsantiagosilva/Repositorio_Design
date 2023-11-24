#include<stdio.h>
#include<locale.h>

int i=0;

float verificar_preco(int tipo_cod, float consumo);
float imprimir_dados(int consumidores, int codigo[], float preco[]);
float imprimir_medias(int consumidores, int tipo_cod[], float consumo[]);
float imprimir_total(int consumidores, int tipo_cod[], float consumo[]);

int main(void){
//	VAR
	int consumidores = 0;
	setlocale(LC_ALL, "Portuguese");
	
//	INICIO
	printf("");
	printf("Insira a quantidade de consumidores: ");
	scanf("%d", &consumidores);
	int codigo[consumidores], tipo_codigo[consumidores];
	float consumo[consumidores],  preco[consumidores];
	printf("Ok. Você quer calcular dados de %d consumidores. Gerando...\n\n", consumidores);
	for(i=0; i<consumidores; i++){
		printf("-------------------------------------------\n");
		printf("Digite o código do %dº consumidor: ", i+1);
		scanf("%d", &codigo[i]);
		printf("Digite o consumo(kw/h) do %dº consumidor: ", i+1);
		scanf("%f", &consumo[i]);
		printf("Digite o tipo de c�digo do %d� consumidor: ", i+1);
		scanf("%d", &tipo_codigo[i]);
		printf("-------------------------------------------\n\n");
	}
//	verificando pre�o
	for(i=0; i<consumidores; i++){
		preco[i] = verificar_preco(tipo_codigo[i], consumo[i]);
	}
	imprimir_dados(consumidores, codigo, preco);
	imprimir_medias(consumidores, tipo_codigo, consumo);
	imprimir_total(consumidores, tipo_codigo, consumo);
	return 0;
}

float verificar_preco(int tipo_cod, float consumo){
	float taxa=0;
	switch(tipo_cod){
		case 1:
			taxa=50;
		break;
		
		case 2:
			taxa=61;
		break;
		
		case 3:
			taxa=107;
		break;
		
		default:
			taxa=0;
		break;
	}
	return consumo*taxa;	
}

float imprimir_dados(int consumidores, int codigo[], float preco[]){
	for(i=0; i<consumidores; i++){
		printf("\n-------------------------------------------\n");
		printf("PRE�O DO CONSUMIDOR DE C�DIGO %d", codigo[i]);
		printf("\nR$ %.2f", preco[i]);
		printf("\n-------------------------------------------\n");
	}
	return 0;
}

float imprimir_medias(int consumidores, int tipo_cod[], float consumo[]){
	float media_consumo23=0, media_consumo2=0, media_consumo3=0;
	float tipo2=0, tipo3=0;
	for(i=0; i<consumidores; i++){
		if(tipo_cod[i]==2){
			media_consumo2+=consumo[i];
			tipo2++;
		}
		if(tipo_cod[i]==3){
			media_consumo3+=consumo[i];
			tipo3++;
		}
	}
	media_consumo23=media_consumo2+media_consumo3;
	if(tipo2!=0){
		media_consumo2/=tipo2;
	}else{
		media_consumo2 = 0;
	}
	if(tipo3!=0){
		media_consumo3/=tipo3;
		if(tipo2!=0){
			media_consumo23/=(tipo2+tipo3);
		}else{
			media_consumo23=0;
		}
	}else{
		media_consumo3=0;
	}

	printf("\n---------------------------------------------\n");
	printf("A M�DIA DOS CONSUMOS DOS CONSUMIDORES DE TIPO");
	printf("\n2 E 3 � DE: 2 - %.2fkw/h, 3 - %.2fkw/h.", media_consumo2, media_consumo3);
	printf("\nE A M�DIA DOS DOIS JUNTOS � DE: %.2fkw/h.", media_consumo23);
	printf("\n---------------------------------------------\n");
	return 0;
}

float imprimir_total(int consumidores, int tipo_cod[], float consumo[]){
	float total_consumo123=0, total_consumo1=0, total_consumo2=0, total_consumo3=0;
	for(i=0; i<consumidores; i++){
		switch(tipo_cod[i]){
			case 1:
				total_consumo123+=consumo[i];
				total_consumo1+=consumo[i];
			break;
			
			case 2:
				total_consumo123+=consumo[i];
				total_consumo2+=consumo[i];
			break;
			
			case 3:
				total_consumo123+=consumo[i];
				total_consumo3+=consumo[i];
			break;
			
			default:
			break;
		}
	}
	printf("\n---------------------------------------------\n");
	printf("O TOTAL DE CONSUMO FOI DE:");
	printf("\nTIPO 1: %.2f", total_consumo1);
	printf("\nTIPO 2: %.2f", total_consumo2);
	printf("\nTIPO 3: %.2f", total_consumo3);
	printf("\n---------------------------------------------\n");
	printf("\nTOTAL DOS 3 TIPOS �: %.2f", total_consumo123);
	printf("\n---------------------------------------------\n");
}
