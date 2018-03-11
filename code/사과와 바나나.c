#include <stdio.h>

int main()
{
	int ap_price=500;
	int ba_price=1000;
	int ap_num, ba_num, change, pay;
	char check;
	printf("사과를 몇개 구입하시겠습니까?\n");
	scanf("%d", &ap_num);
	printf("바나나를 몇개 구입하시겠습니까?\n");
	scanf("%d", &ba_num); 
	printf("사과 %d개 바나나 %d개 총 %d원입니다\n", ap_num, ba_num, (ap_num*ap_price)+(ba_num*ba_price));
	int sum_price= (ap_num*ap_price)+(ba_num*ba_price);
	printf("얼마를 내시겠습니까?\n");
	scanf("%d", &pay);
	while(pay<sum_price)
	{
		printf("돈이 %d원 모자랍니다\n", sum_price-pay);
		printf("돈을 다시 지불하시겠습니까?(Y/N)\n");
		scanf("%c", &check);
		if(check=='Y')
		{
		printf("얼마를 내시겠습니까?\n");
		scanf("%d", &pay);
		if(pay>=sum_price)
		{
			printf("거스름돈은 %d원입니다구입해주셔서 감사드립니다", pay-sum_price); 
			return 0;
		}
		}
		else if(check=='N')
		{
			printf("돈더들고오세요 ㅎㅎ");
			return 0;
		}
		scanf("%d\n", &pay) ;
	}
	if(pay>=sum_price)
	{
		printf("거스름돈은 %d원입니다구입해주셔서 감사드립니다", pay-sum_price); 
	}
	return 0;
	}
	

