#include <stdio.h> 

char comparePi[3] = "pi";
char compareKa[3] = "ka";
char compareChu[4] = "chu";

int Compare(char *ary, int first, int last);
int Next_index(int index, char *ary);

int main(void) {
	int next_index = 0, compare_index = 0, result;
	char pika[501];
	scanf("%s", pika);
	while (pika[compare_index] != '\0')//pika[index] != '\0')
	{
		next_index = Next_index(compare_index,pika);
		result = Compare(pika, compare_index, next_index);
		if (result == 0)
		{
			printf("NO");
			return 0;
		}
		compare_index = next_index;
	}
	printf("YES");
	return 0;
}

int Next_index(int index, char *ary)
{
	int next_index = index + 1;
	while ((ary[next_index] != 'p') && (ary[next_index] != 'k') && (ary[next_index] != 'c') && (ary[next_index] != '\0'))
	{
		next_index++;
	}
	return next_index;
}

int Compare(char *ary, int first, int last)
{
	char com_ary[4] = { '\0','\0','\0','\0' };
	int num = 0;
	if ((last - first) >= 4)
		return 0;
	for (;first < last; first++)
	{
		com_ary[num++] = ary[first];
	}
	if (!strcmp(com_ary, comparePi))
	{
		return 1;
	}
	if (!strcmp(com_ary, compareKa))
	{
		return 1;
	}
	if (!strcmp(com_ary, compareChu))
	{
		return 1;
	}
	return 0;
}