#include<stdio.h>
//#include<conio.h>

#define max_x 200
#define max_y 200
#define clear_all printf("\033[H\033[J")
#define goto(x,y) printf("\033[%d;%dH",(x),(y))

int main(){
	int x,y,x1,y1;
	while(1){
		printf("x= ");
		scanf("%d",&x);
		printf("y= ");
		scanf("%d",&y);
		if(x<0||y<0)
			break;
		goto(x,y);
		printf("*");
	}
	clear_all;
	

	return 0;
}
