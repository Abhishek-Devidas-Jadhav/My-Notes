#include<stdio.h>
#include<string.h>
#include<stdlib.h>	//for u_int8_t
#include<unistd.h>	//for sleep
int main(){
	char c[20]="m:)\r\n";
	int i=0;
	while (1)
  {
	  char tx[30]="\033[01;3";
	  char test[30]="test";//debug
	  int j=48+(i%8);
	  i++;
	  char b=j+'\0';
	  //strcat(tx,&j);
	  strcat(test,&b);
	  printf("%s\n",test);
	  strcat(tx,c);
	  printf("%s\n",tx);
    /* USER CODE END WHILE */
	 // HAL_UART_Receive(&huart5, (uint8_t *)tx,1, 10);
	  //sleep(50);
	  //HAL_UART_Transmit(&huart5, (uint8_t *)tx,strlen(tx), 10);
	  //bzero(tx,1);
	  sleep(1);
	  //i++;
    /* USER CODE BEGIN 3 */
  }
	return 0;
}
