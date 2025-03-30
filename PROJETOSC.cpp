#include <stdio.h>

float cpu,gpu,pmae,consumo,custo,cua,sc;
int horas,ua;

main(){
	printf("Programa para calcular custo e consumo mensal de um PC");
	printf("\n\nDigite o TDP do seu processador:");
	scanf("%f",&cpu);
	printf("Digite o TDP da sua placa de video:");
	scanf("%f",&gpu);
	printf("Digite o TDP da sua placa mae:");
	scanf("%f",&pmae);
	printf("quantas unidades de armazenamento seu pc possui:");
	scanf("%d",&ua);
	printf("Digite a media de horas diarias em que o PC permanece ligado:");
	scanf("%d",&horas);
	cua = 25*ua;
	sc = gpu+cpu+pmae+cua;
	consumo = sc/1000.0 +horas;
	custo = consumo*0.82;
	printf("o consumo de energia mensal e: %.1fkWh",consumo);
	printf("\no custo mensal do pc e: %.0fR$",custo*30);
}





	

	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


