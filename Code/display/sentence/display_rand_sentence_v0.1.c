#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h>

#define max 126
#define offset 33
#define max_length 500
#define space 20
#define enter 250

int main(){
	while(1){
		fflush(stdout);
		printf("%c",(rand()%(max-offset))+offset);
		if(rand()%space==0)
			printf("%c",32);
		if(rand()%enter==0)
			printf("\n");
		usleep(16*1000);
	}
	return 0;
}
