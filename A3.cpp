#include<stdio.h>
#include<stdlib.h>
int main(void){
	int input_num=0;
	int bouns; //獎金
	int bouns1,bouns2,bouns4,bouns6,bouns0;
	//主程式
	printf("請輸入收入金額:");
	scanf("%d",&input_num);
	bouns0=100000*0.1;
	bouns1=bouns0+100000*0.075;//0.1%  100k~200k
	bouns2=bouns1+200000*0.05;//0.075 200k~400k
	bouns4=bouns2+200000*0.03;//0.05 400k~600k
	bouns6=bouns4+400000*0.015;//0.015 600k~1000k
	//判斷金額
	if(input_num<100000){
		bouns=input_num*0.1;
	}
	else if(input_num<200000){
		bouns=bouns0+(input_num-100000)*0.075;
	}
	else if(input_num<400000){
		bouns=bouns1+(input_num-200000)*0.05;
	}
	else if(input_num<600000){
		bouns=bouns2+(input_num-400000)*0.03;
	}
	else if(input_num<1000000){
		bouns=bouns4+(input_num-600000)*0.015;
	}
	else{
		bouns=bouns6+(input_num-1000000)*0.01;
	}
	printf("bouns:%d",bouns);
	return 0;
	system("pause");
} 
