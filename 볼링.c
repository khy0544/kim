#include <stdio.h>
int main()
{
  int score[10];
  int a,b,sum,tmp;
  float average;
  for(a = 0; a<10; a++)
    {
      printf("%d ��° ������ �Է��ϼ��� : ",a+1);
      scanf("%d", &score[a]);
    }
  for (a = sum = 0; a<10; a++)
    sum += score[a];
    average = (float) sum / 10;
  for(b=0; b<10; b++)
  {
    for(a=0; a<10; a++)
      if(score[a]<score[a-1])
        {
          tmp = score[a];
          score[a] = score[a-1];
          score[a-1] = tmp;
        }
  }
  printf("���� �� ��� : ");
  for (a=0; a<10; a++)
  printf("%d ", score[a]);
  printf("\n ��� : %f", average);
  return 0;
}
