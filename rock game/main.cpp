#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ���������� ��� ���� �Լ�
int determineWinner(int userChoice, int mirrorChoice) {   
    if (userChoice == mirrorChoice) {
        return 0; // ���º�
    }
    else if ((userChoice == 0 && mirrorChoice == 2) ||
        (userChoice == 1 && mirrorChoice == 0) ||
        (userChoice == 2 && mirrorChoice == 1)) {
        return 1; // ���� �¸�
    }
    else if (userChoice == 3) {
        return 2; // �ſ� ���� - ���� �¸�
    }
    else {
        return -1; // ���� �й� 
    }
}

int main() {
    srand(time(0)); // ���� �ʱ�ȭ

    printf("����(0), ����(1), ��(2), �ſ��� ����(3) �� �����ϼ���.\n");

    int userChoice, mirrorChoice, result;

    do {
        printf("\n����: ");
        scanf_s("%d", &userChoice);

        // �Է� ��ȿ�� �˻�
        if (userChoice < 0 || userChoice > 3) {
            printf("�߸��� �Է��Դϴ�. 0, 1, 2, 3 �߿��� �����ϼ���.\n");
            continue;
        }

        mirrorChoice = rand() % 3; // �ſ��� ���� (����)

        result = determineWinner(userChoice, mirrorChoice);

        if (result == 2) {
            printf("\n�ſ��� �����ϴ�! �ڽ��� �̰���ϴ�! ���� ����!\n");
            break;
        }
        else if (result == 1) {
            printf("\n���� �ºΰ� �� �����ϴ�. ����ؼ� �����ϼ���!\n");
        }
        else if (result == 0) {
            printf("\n���º��Դϴ�. ����ؼ� ��⸦ �̾������!\n");
        }
        else {
            printf("\n�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
        }
    } while (result != 2);

    return 0;
}
