#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 가위바위보 결과 결정 함수
int determineWinner(int userChoice, int mirrorChoice) {   
    if (userChoice == mirrorChoice) {
        return 0; // 무승부
    }
    else if ((userChoice == 0 && mirrorChoice == 2) ||
        (userChoice == 1 && mirrorChoice == 0) ||
        (userChoice == 2 && mirrorChoice == 1)) {
        return 1; // 나의 승리
    }
    else if (userChoice == 3) {
        return 2; // 거울 깨기 - 나의 승리
    }
    else {
        return -1; // 나의 패배 
    }
}

int main() {
    srand(time(0)); // 난수 초기화

    printf("가위(0), 바위(1), 보(2), 거울을 깨기(3) 중 선택하세요.\n");

    int userChoice, mirrorChoice, result;

    do {
        printf("\n선택: ");
        scanf_s("%d", &userChoice);

        // 입력 유효성 검사
        if (userChoice < 0 || userChoice > 3) {
            printf("잘못된 입력입니다. 0, 1, 2, 3 중에서 선택하세요.\n");
            continue;
        }

        mirrorChoice = rand() % 3; // 거울의 선택 (랜덤)

        result = determineWinner(userChoice, mirrorChoice);

        if (result == 2) {
            printf("\n거울을 깼습니다! 자신을 이겼습니다! 게임 종료!\n");
            break;
        }
        else if (result == 1) {
            printf("\n아직 승부가 안 났습니다. 계속해서 도전하세요!\n");
        }
        else if (result == 0) {
            printf("\n무승부입니다. 계속해서 경기를 이어나가세요!\n");
        }
        else {
            printf("\n잘못된 입력입니다. 다시 선택하세요.\n");
        }
    } while (result != 2);

    return 0;
}
