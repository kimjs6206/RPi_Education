#include <stdio.h>
int main(){
	int price, person, person2;
	int result, result2;
	printf("�� �ݾ��� �Է��� �ּ���: ");
	scanf("%d", &price);
	printf("�ο�����  �Է��� �ּ���:");
	scanf("%d", &person);

	
	result=price/person;
	result2=price/person+(price%result);
	
	
	printf("%d���� ���� %d���� ����, %d�� %d�� ����.",person-1,result,1,result2);
	return 0;
}
