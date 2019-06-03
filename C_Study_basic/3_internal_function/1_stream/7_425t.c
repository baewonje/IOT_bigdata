#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[7];

		// get의 반환값은 읽어들인 문자열을 반환한다.
		// str에 call by reference로 값이 반환되므로 같은 결과이다.
		// printf("%s", gets(str));
		gets(str);
		puts(str);
		// 수행결과 1
		// aa bb <- 입력 : 공백문자를 포함하여 입력을 받는다.
		// aa bb <- 출력
	
		//수행결과 2
		// hello world! <- 입력
		// 런타임 에러 발생(str의 사이즈보다 큰 문자열을 입력받는것을 시도하였기 때문)

}

