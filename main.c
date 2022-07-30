#include <stdio.h>

int main()
{
	int yob, mob, dob, dayslived;
	char a;
	
	printf("WELCOME\nwould you like to know your days lived?\nreply with a Y or N");
	scanf("%s", &a);
	if (a == 'N')
	{
		printf("alright");
		return (0);
	}
	else if (a == 'Y')
	{
		printf("Year of Birth: ");
		scanf("%d\n", &yob);
		printf("Month of Birth: ");
		scanf("%d\n", &mob);
		printf("Day of Birth: ");
		scanf("%d\n", &dob);
		calc(yob, mob, dob);
		printf("Your days lived is %d", dayslived);
	}
	return (0);
}
