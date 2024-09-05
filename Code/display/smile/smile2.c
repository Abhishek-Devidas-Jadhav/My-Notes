#include<stdio.h>
#include<string.h>
#include<stdlib.h>	//for u_int8_t
#include<unistd.h>	//for sleep
int main(){
	char c[20]="m:)\r\n";
	int i=0;
	while (1){
	 	char tx[30]="\033[01;3";
	 	int j=48+(i%8);
	  	i++;
	  	char b=j+'\0';
	  	strcat(tx,&b);
	  	strcat(tx,c);
	  	printf("%s\n",tx);
	  	sleep(1);
  	}
	return 0;
}
