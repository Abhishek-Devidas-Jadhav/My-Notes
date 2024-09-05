#include<stdio.h>
#include<unistd.h>
#define delay 1
#define amp 100	//maximum amplitude
#define diff 10	//difference from -diff to +diff//must check later


int main(){
	int t_diff=0,t_amp;
	printf("Starting...");
	t_amp=rand()%amp;
	while(1){
		usleep(delay);
		t_diff=rand()%diff-rand()%diff;	
		t_amp=t_amp+t_diff;

		//controlling overflow from range 0 to amp
		if(t_amp>amp)
			t_amp=2*amp-t_amp;
		else if(t_amp<0)
			t_amp=-t_amp;
		else;		//printf("%d\t%d\n",t_amp,t_diff);/debugging
		
		printf("%*s",t_amp,"*");
	}	
	return 0;
}
