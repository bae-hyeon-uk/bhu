#include <stdio.h>

void input_nums(int *lotto_nums);   //배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums);   //배열에 저장된 값을 출력하는 함수  

int main(void)
{
	int lotto_nums[10];

	input_nums(lotto_nums);        // 입력함수 호출
	print_nums(lotto_nums);        // 출력함수 호출
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int i, j;
	int dup;      // duplication(중복)은 중복되었다는 것을 의미하는 변수라고 선언

	for (i = 0; i < 10; i++)
	{
		printf("번호 입력 : ");
		scanf_s("%d", &num);
		dup = 0;
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])
			{
				dup = 1;
				break;
			}                                        // 중복 여부 확인하는 과정
		}
		if (!dup)
		{
			lotto_nums[i] = num;
		}
		else
		{
			printf("같은 번호가 있습니다!\n");
			i--;                                    // 배열에 넣을지 아니면 다시 넣을지 결정하는 과정
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("로또 번호 : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}