#include <stdio.h>

int main()
{
	int base, height;
	float size; 
	char check = 'y';
	while(check=='y'||check=='Y')
	{
		printf("밑변의 길이:");
		scanf("%d", &base);
		printf("높이의 길이:");
		scanf("%d", &height);
		size= (float)(base*height)/2;
		printf("삼각형의 넓이: %.1f",size);
		fflush(stdin);
		printf("계속하시겠습니까?(Y)\n");
		scanf("%c", &check);
	}	
return 0;
}
