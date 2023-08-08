#include<stdio.h>

void main()
{
	int str[100], *ptr;
	int length;
	
	printf("Enter any string : ");
	gets(str);
	
	ptr = &str;
	length = 0;
	
	strlen(str);
	
	length = strlen(str);
	*ptr = length;
   
    printf("The length of the string is: %d", length);


}


/*
Enter any string : hasti dholakiya
The length of the string is: 15
*/

