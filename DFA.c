#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
	int i, j, k = 0;
	int trans_table[5][2] = {{1,3},{1,2},{1,2},{4,3},{4,3}};
	
	printf("Transition Table\n   \t(0)    \t(1)   \n");
	for(i=0;i<5;i++){
		printf("q(%d)\t", i);
		for(j=0;j<2;j++){
			printf("%d\t", trans_table[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter the string to be tested : ");
	char s[MAX];
	scanf("%s", &s);
	int curr = 0;  
	int limit = strlen(s);
	printf("\n");
	for(i=0;i<limit;i++){
		printf("q(%d)->",curr);
		int ele = (int)(s[i]-'0'); //converting string to integer value
		curr=trans_table[curr][ele];
	}
	printf("Stop\n\nThe entered string is ");
	if(curr == 1 || curr == 3)
		printf("Accepted");
	else
		printf("Rejected");
	printf("\n");
	return 0;
	
}	 	  	  	  	      	   	      	 	
