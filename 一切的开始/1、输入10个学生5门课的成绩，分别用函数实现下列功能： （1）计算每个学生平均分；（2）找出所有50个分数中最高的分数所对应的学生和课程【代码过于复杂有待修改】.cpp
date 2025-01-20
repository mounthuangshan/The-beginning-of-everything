#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>	

struct xueshengchengji
{
	int a;
	int b;
	int c;
	int d;
	int e;
};
void pingjunshu(struct xueshengchengji b1)
{
	float f1 = (b1.a + b1.b + b1.c + b1.d + b1.e) / 5;
	printf("%f\n", f1);
	
}
int bijiao(int k[5])
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4-j; i++)
		{
			if (k[i] < k[i + 1])
			{
				int m = k[i + 1];
				k[i + 1] = k[i];
				k[i] = m;
				m = 0;
			}
			else
			{
				;
			}

		}
	}
	return k[0];
}
int main()
{
	
	
	struct xueshengchengji a1;
	struct xueshengchengji a2;
	struct xueshengchengji a3;
	struct xueshengchengji a4;
	struct xueshengchengji a5;
		scanf("%d%d%d%d%d", &a1.a, &a1.b, &a1.c, &a1.d, &a1.e);
		scanf("%d%d%d%d%d", &a2.a, &a2.b, &a2.c, &a2.d, &a2.e);
		scanf("%d%d%d%d%d", &a3.a, &a3.b, &a3.c, &a3.d, &a3.e);
		scanf("%d%d%d%d%d", &a4.a, &a4.b, &a4.c, &a4.d, &a4.e);
		scanf("%d%d%d%d%d", &a5.a, &a5.b, &a5.c, &a5.d, &a5.e);
		pingjunshu(a1);
		pingjunshu(a2);
		pingjunshu(a3);
		pingjunshu(a4);
		pingjunshu(a5);
		struct shuzu
		{
			int r[5];
		};
	    struct shuzu ak[5] = { a1.a,a2.a,a3.a,a4.a,a5.a };
		struct shuzu bk[5] = { a1.b,a2.b,a3.b,a4.b,a5.b };
		struct shuzu ck[5] = { a1.c,a2.c,a3.c,a4.c,a5.c };
		struct shuzu dk[5] = { a1.d,a2.d,a3.d,a4.d,a5.d };
		struct shuzu ek[5] = { a1.e,a2.e,a3.e,a4.e,a5.e };
		int aj[5] = { a1.a,a2.a,a3.a,a4.a,a5.a };
		int bj[5] = { a1.b,a2.b,a3.b,a4.b,a5.b };
		int cj[5] = { a1.c,a2.c,a3.c,a4.c,a5.c };
		int dj[5] = { a1.d,a2.d,a3.d,a4.d,a5.d };
		int ej[5] = { a1.e,a2.e,a3.e,a4.e,a5.e };
		int q1=bijiao(ak);
	    int q2=bijiao(bk);
		int q3=bijiao(ck);
		int q4=bijiao(dk);
		int q5=bijiao(ek);
		for (int i = 0; i < 5; i++)
		{
			if (q1 == aj[i])
			{
				printf("a%d\n", i + 1);
			}
			else
			{
				;
			}

		}
		for (int i = 0; i < 5; i++)
		{
			if (q2 == bj[i])
			{
				printf("b%d\n", i + 1);
			}
			else
			{
				;
			}

		}
		for (int i = 0; i < 5; i++)
		{
			if (q3 == cj[i])
			{
				printf("c%d\n", i + 1);
			}
			else
			{
				;
			}

		}
		for (int i = 0; i < 5; i++)
		{
			if (q4 == dj[i])
			{
				printf("d%d\n", i + 1);
			}
			else
			{
				;
			}

		}
		for (int i = 0; i < 5; i++)
		{
			if (q5 == ej[i])
			{
				printf("e%d\n", i + 1);
			}
			else
			{
				;
			}

		}
		return 0;
}

	