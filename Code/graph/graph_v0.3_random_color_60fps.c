#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
//#include <graphics.h>//not working

#define delay 16000
#define amp 100	//maximum amplitude
#define diff 5//difference from -diff to +diff//must check later

//void rand(void);
int main(){
	int t_diff=0,t_amp,t_prev,t_diff_neg;
	printf("Starting...");
	t_amp=rand()%amp;	//printf("%d",t_amp);//debugging
	while(1){
		t_prev=t_amp;	//printf("%d",t_prev);//debugging
		usleep(delay);

		t_diff=rand()%diff-rand()%diff;	
		t_amp=t_amp+t_diff;
		//controlling overflow from range 0 to amp
		if(t_amp>amp)
			t_amp=2*amp-t_amp;
		else if(t_amp<0)
			t_amp=-t_amp;
		else;		//printf("%d\t%d\n",t_amp,t_diff);/debugging
		
		if(t_prev<t_amp){
			printf("%*s",t_prev,"");	//musty print "" to avoid error
			//void setcolor(int 4);//not working with graphics.h
			for(;t_diff>0;t_diff--)
				printf("\033[1;32m*");
			printf("\n");
		}
		else if(t_prev>t_amp){
			t_diff_neg=t_prev-t_amp;
			printf("%*s",t_amp,"");
			for(;t_diff_neg>0;t_diff_neg--)
				printf("\033[1;31m*");
			printf("\n");
		}
		else
			printf("\033[1;37m%*s",t_amp,"*\n");
	}	
	return 0;
}
