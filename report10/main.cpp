#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Account              // 계좌 정보를 담는 구조체
{
    int accountNumber;               //계좌의 고유한 식별번호
    double balance;                  //계좌에 현재 남아있는 금액
};


void deposit(struct Account* account, double amount)      // 입금 함수
{
    account->balance += amount;
    printf("입금이 완료되었습니다. 잔액: %.2f\n", account->balance);
}


int withdraw(struct Account* account, double amount)     // 출금 함수
{
    if (account->balance >= amount) 
    {
        account->balance -= amount;
        printf("출금이 완료되었습니다. 잔액: %.2f\n", account->balance);
        return 1; // 출금 성공
    }
    
    else 
    {
        printf("금액이 부족합니다. 다시 시도하세요.\n");
        return 0; // 출금 실패
    }
}

int main() 
{
    
    srand(time(NULL));                            // 난수 발생을 위한 시드 설정
     
    // 계좌 초기화 (1000원 단위, 1000원에서 100000원 사이의 임의의 잔액)
    struct Account userAccount;
    userAccount.accountNumber = 123456;                 // 예시 계좌번호
    userAccount.balance = (rand() % 100) * 1000 + 1000; // 1000에서 100000 사이의 임의의 잔액 설정

    int choice;
    double amount;

    do {
        
        printf("\n1. 입금\n2. 출금\n3. 종료\n");            // 메뉴 출력
        printf("메뉴를 선택하세요: ");
        scanf_s("%d", &choice);

        switch (choice) 
        {
          case 1:
            
            printf("입금할 금액을 입력하세요: ");         // 입금
            scanf_s("%lf", &amount);
            deposit(&userAccount, amount);
            break;
        
          case 2:
            
            printf("출금할 금액을 입력하세요: ");        // 출금
            scanf_s("%lf", &amount);
            while (!withdraw(&userAccount, amount)) 
            {
                printf("출금할 금액을 다시 입력하세요: ");       // 출금 실패 시 반복
                scanf_s("%lf", &amount);
            }
            break;
         
          case 3:
            
            printf("프로그램을 종료합니다.\n");                  // 종료
            break;
            default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }

    } while (choice != 3);

    return 0;
}
