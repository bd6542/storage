#include <stdio.h>

int main()
{
	int ap_price=500;
	int ba_price=1000;
	int ap_num, ba_num, change, pay;
	char check;
	printf("����� � �����Ͻðڽ��ϱ�?\n");
	scanf("%d", &ap_num);
	printf("�ٳ����� � �����Ͻðڽ��ϱ�?\n");
	scanf("%d", &ba_num); 
	printf("��� %d�� �ٳ��� %d�� �� %d���Դϴ�\n", ap_num, ba_num, (ap_num*ap_price)+(ba_num*ba_price));
	int sum_price= (ap_num*ap_price)+(ba_num*ba_price);
	printf("�󸶸� ���ðڽ��ϱ�?\n");
	scanf("%d", &pay);
	while(pay<sum_price)
	{
		printf("���� %d�� ���ڶ��ϴ�\n", sum_price-pay);
		printf("���� �ٽ� �����Ͻðڽ��ϱ�?(Y/N)\n");
		scanf("%c", &check);
		if(check=='Y')
		{
		printf("�󸶸� ���ðڽ��ϱ�?\n");
		scanf("%d", &pay);
		if(pay>=sum_price)
		{
			printf("�Ž������� %d���Դϴٱ������ּż� ����帳�ϴ�", pay-sum_price); 
			return 0;
		}
		}
		else if(check=='N')
		{
			printf("������������ ����");
			return 0;
		}
		scanf("%d\n", &pay) ;
	}
	if(pay>=sum_price)
	{
		printf("�Ž������� %d���Դϴٱ������ּż� ����帳�ϴ�", pay-sum_price); 
	}
	return 0;
	}
	

