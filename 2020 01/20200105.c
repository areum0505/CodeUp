/* 5���� �������� �ִ񰪰� �ּڰ��� ���ϴ� ���α׷��� �ۼ��϶�. */

#include <stdio.h>

int main(void) { 
	int max,min,i,num[5];

   	scanf("%d",&num[0]);
   	max=num[0];
   	min=num[0];

   	for(i=1;i<5;i++){
      		scanf("%d",&num[i]);
     		if(max<num[i]){
         			max=num[i];
		}
      		if(min>num[i]){
         			min=num[i];
		}
   	}

   	printf("%d\n%d", max, min);
}
