#include <stdio.h>

void my_login(void){
		const int password=1234;
		const unsigned char max_count=3;
		const unsigned char	iot_true=1;
		const unsigned char iot_false=0;		
		int input_password=0;
		int input_count=0;
		// is_의미 <= flag 변수 특정 이벤트가 수행되었는지 확인하는 용도로 사용하는 변수
		int is_verified=iot_false;
		

		for(;input_count<max_count; input_count++){
		printf("패스워드를 입력하세요 : ");
		scanf("%d", &input_password);

		if(password == input_password){
			printf("iot 빅데이터반 입장 가능합니다.\n");
			is_verified = iot_true;
			return; // return을 만나게 되면 함수 자체를 무조건 빠져나온다.
					// 반복문에서 break와 유사하다
			}			
		}

		printf("패스워드 최대 힙력 회수 %d를 초과하였습니다. \n", max_count);
		printf("행정실로 확인절차 부탁합니다.");
		}

void main(){
		my_login();
}

