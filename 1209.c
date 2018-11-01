﻿//다음 100X100의 2차원 배열이 주어질 때, 각 행의 합, 각 열의 합, 각 대각선의 합 중 최댓값을 구하는 프로그램을 작성하여라.
//다음과 같은 5X5 배열에서 최댓값은 29이다.

//[제약 사항]
//총 10개의 테스트 케이스가 주어진다.
//배열의 크기는 100X100으로 동일하다.
//각 행의 합은 integer 범위를 넘어가지 않는다.
//동일한 최댓값이 있을 경우, 하나의 값만 출력한다.

//[입력]
//각 테스트 케이스의 첫 줄에는 테스트 케이스 번호가 주어지고 그 다음 줄부터는 2차원 배열의 각 행 값이 주어진다.

//[출력]
//#부호와 함께 테스트 케이스의 번호를 출력하고, 공백 문자 후 테스트 케이스의 답을 출력한다.

#include <stdio.h>

int main() {
	for (int t = 0; t < 10; t++) {
		int tc;
		scanf("%d", &tc);
		
		int board[100][100];
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				scanf("%d", &board[i][j]);
			}
		}

		int max = 0;
		for (int i = 0; i < 100; i++) {
			int temp = 0;
			for (int j = 0; j < 100; j++) {
				temp += board[i][j];
			}
			if (temp > max) {
				max = temp;
			}
		}

		for (int i = 0; i < 100; i++) {
			int temp = 0;
			for (int j = 0; j < 100; j++) {
				temp += board[j][i];
			}
			if (temp > max) {
				max = temp;
			}
		}

		for (int i = 0; i < 100; i++) {
			int temp = 0;
			temp += board[i][i];
			if (temp > max) {
				max = temp;
			}
		}

		for (int i = 99; i >= 0; i--) {
			int temp = 0;
			temp += board[i][i];
			if (temp > max) {
				max = temp;
			}
		}
		
		printf("#%d %d\n", tc, max);
	}
	return 0;
}