#include <stdio.h>

void input_nums(int *lotto_nums);   //�迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);   //�迭�� ����� ���� ����ϴ� �Լ�  

int main(void)
{
	int lotto_nums[10];

	input_nums(lotto_nums);        // �Է��Լ� ȣ��
	print_nums(lotto_nums);        // ����Լ� ȣ��
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int i, j;
	int dup;      // duplication(�ߺ�)�� �ߺ��Ǿ��ٴ� ���� �ǹ��ϴ� ������� ����

	for (i = 0; i < 10; i++)
	{
		printf("��ȣ �Է� : ");
		scanf_s("%d", &num);
		dup = 0;
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])
			{
				dup = 1;
				break;
			}                                        // �ߺ� ���� Ȯ���ϴ� ����
		}
		if (!dup)
		{
			lotto_nums[i] = num;
		}
		else
		{
			printf("���� ��ȣ�� �ֽ��ϴ�!\n");
			i--;                                    // �迭�� ������ �ƴϸ� �ٽ� ������ �����ϴ� ����
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}