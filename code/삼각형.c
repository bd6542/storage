#include <stdio.h>

int main()
{
	int base, height;
	float size; 
	char check = 'y';
	while(check=='y'||check=='Y')
	{
		printf("�غ��� ����:");
		scanf("%d", &base);
		printf("������ ����:");
		scanf("%d", &height);
		size= (float)(base*height)/2;
		printf("�ﰢ���� ����: %.1f",size);
		fflush(stdin);
		printf("����Ͻðڽ��ϱ�?(Y)\n");
		scanf("%c", &check);
	}	
return 0;
}
