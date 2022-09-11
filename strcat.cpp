#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[80], str2[80];
	
	strcpy(str1, "boa");
	strcpy(str2, "tarde");
	
	strcat(str1, str2);
	printf("\n%s", str1);
	
	
}
