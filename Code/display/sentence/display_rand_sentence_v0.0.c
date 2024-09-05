#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h>

#define max 128
#define offset 33
#define max_length 500

int main(){
	while(1){
		for(int i=rand()%max_length;i>0;i++){
			fflush(stdout);
			printf("%c",(rand()%(max-offset))+offset);
		usleep(16*1000);
		}
		printf("\n");
	}
	return 0;
}
