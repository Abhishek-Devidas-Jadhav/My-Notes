#include<stdio.h>
#include<string.h>
#include<stdlib.h>	//for u_int8_t
#include<unistd.h>	//for sleep
int main(){
	char c[20]="m:)\r\n";
	int i=0;
	int j;
	char b;
	while (1){
	 	char tx[30]="\033[01;3";
	 	j=48+(i%8);
	  	i++;
		//printf("%d\n",j);
	  	b=j+'\0';
		//printf("%c\n",b);
	  	strcat(tx,&b);
	  	strcat(tx,c);
	  	printf("%s\n",tx);
	  	sleep(1);
		//free(tx);
  	}
	return 0;
}
