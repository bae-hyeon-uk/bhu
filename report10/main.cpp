#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Account              // ���� ������ ��� ����ü
{
    int accountNumber;               //������ ������ �ĺ���ȣ
    double balance;                  //���¿� ���� �����ִ� �ݾ�
};


void deposit(struct Account* account, double amount)      // �Ա� �Լ�
{
    account->balance += amount;
    printf("�Ա��� �Ϸ�Ǿ����ϴ�. �ܾ�: %.2f\n", account->balance);
}


int withdraw(struct Account* account, double amount)     // ��� �Լ�
{
    if (account->balance >= amount) 
    {
        account->balance -= amount;
        printf("����� �Ϸ�Ǿ����ϴ�. �ܾ�: %.2f\n", account->balance);
        return 1; // ��� ����
    }
    
    else 
    {
        printf("�ݾ��� �����մϴ�. �ٽ� �õ��ϼ���.\n");
        return 0; // ��� ����
    }
}

int main() 
{
    
    srand(time(NULL));                            // ���� �߻��� ���� �õ� ����
     
    // ���� �ʱ�ȭ (1000�� ����, 1000������ 100000�� ������ ������ �ܾ�)
    struct Account userAccount;
    userAccount.accountNumber = 123456;                 // ���� ���¹�ȣ
    userAccount.balance = (rand() % 100) * 1000 + 1000; // 1000���� 100000 ������ ������ �ܾ� ����

    int choice;
    double amount;

    do {
        
        printf("\n1. �Ա�\n2. ���\n3. ����\n");            // �޴� ���
        printf("�޴��� �����ϼ���: ");
        scanf_s("%d", &choice);

        switch (choice) 
        {
          case 1:
            
            printf("�Ա��� �ݾ��� �Է��ϼ���: ");         // �Ա�
            scanf_s("%lf", &amount);
            deposit(&userAccount, amount);
            break;
        
          case 2:
            
            printf("����� �ݾ��� �Է��ϼ���: ");        // ���
            scanf_s("%lf", &amount);
            while (!withdraw(&userAccount, amount)) 
            {
                printf("����� �ݾ��� �ٽ� �Է��ϼ���: ");       // ��� ���� �� �ݺ�
                scanf_s("%lf", &amount);
            }
            break;
         
          case 3:
            
            printf("���α׷��� �����մϴ�.\n");                  // ����
            break;
            default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }

    } while (choice != 3);

    return 0;
}
