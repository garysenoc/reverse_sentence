#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char mark;
	char sentence[100];
	int num=0,i;
	
	printf("Enter a sentence: ");
	gets(sentence);
	
	while(sentence[num] !='\0'){
		num++;
	}
	
	mark = num-1;
	
	for(i=num-2;i>=0;i--)
		printf("%c",sentence[i]);
	printf("\%c",mark);
	
	
	return 0;
}
