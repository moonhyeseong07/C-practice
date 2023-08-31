#include <stdio.h>
#include <string.h>

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases); // 테스트 케이스의 개수를 입력 받음
    
    while (num_test_cases--) {
        char result[81]; // 입력 문자열을 저장할 배열
        scanf("%s", result); // OX퀴즈 결과를 입력 받음
        
        int score = 0; // 점수 초기화
        int combo = 0; // 연속된 O의 개수를 나타내는 변수
        
        // 각 문제 결과에 대해 점수 계산
        for (int i = 0; i <= strlen(result); i++) {
            if (result[i] == 'O') {
                combo++;
                score += combo;
            } else {
                combo = 0;
            }
        }
        
        // 테스트 케이스마다 점수 출력
        printf("%d\n", score);
    }
    
    return 0;
}