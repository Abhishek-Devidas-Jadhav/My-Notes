#include<stdio.h>
#include<stdlib.h>

#define max_first 50
#define max_second 10


int main(){
	while(1){
		for(int i=0;i<max_first+1;i++){
			for(int j=0;j<max_second+1;j++){
				fflush(stdout);
				printf("\033[%d;%dm%d %d\t",j,i,j,i);
			}
			printf("\n");
		}
		exit(0);
	}
	return 0;
}
