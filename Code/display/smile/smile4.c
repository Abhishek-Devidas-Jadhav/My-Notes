#include<stdio.h>
#include<string.h>
#include<stdlib.h>	//for u_int8_t
#include<unistd.h>	//for sleep
int main(){
	char tx[30]="\033[01;3";
	char c[20]="m:)\r\n";
	int i=0;
	int j;
	char b;
	printf("Simplicity is key!\n");
	while (1){
	 	j=48+(i%8);
	  	i++;
	  	b=j+'\0';
	  	printf("%s%c%s",tx,b,c);
	  	sleep(1);
  	}
	return 0;
}
