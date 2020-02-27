#include <stdio.h>
int main(){
	int price, person, person2;
	int result, result2;
	printf("총 금액을 입력해 주세요: ");
	scanf("%d", &price);
	printf("인원수를  입력해 주세요:");
	scanf("%d", &person);

	
	result=price/person;
	result2=price/person+(price%result);
	
	
	printf("%d명이 각각 %d원씩 지불, %d명 %d원 지불.",person-1,result,1,result2);
	return 0;
}
