//#include <stdio.h> <== standard IO (ex: printf, scanf 를 사용할 때 쓴다.)

void main(){
		int military_serial_number = 1472004818; // military_serial_number : 변수, 1472004818: 상수
		int my_birth_day = 920824;
		// const는 constant(바뀌지 않음)를 의미한다.
		const int ci_military_serial_number = 1472004818; // ci = const int 의미
		const int ci_my_birth_day = 920824; // ci_my_birth_day : const

		// 값이 바뀌지 않고 참조만 하고자하는 성격의 데이터는
		// 값이 바꾸는 행위 자체가 문제를 일으킬 수 있다.
		military_serial_number = 1474567891;
		my_birth_day = 520824;
		my_birth_day++;

		ci_military_serial_number = 1474567891;
		ci_my_birth_day = 520824;
		ci_my_birth_day++;
}
