#include <stdio.h>

struct student
{
	int id;
	char name[100], sex[5];
	float q1_score, q2_score, m_score, f_score, t_score;
};

int main()
{
	int x, y, done, s_num=0;
	char key;
	struct student students[1000];
	float ave;

	puts("\n1. Add student records");
	puts("2. Delete student records");
	puts("3. Update student records");
	puts("4. View all student records");
	puts("5. Calculate an average of a selected student’s scores");
	puts("6. Show student who gets the max total score");
	puts("7. Show student who gets the min total score");
	puts("8. Find student by ID");

	do
	{
		key = getchar();  /* read key */
	   if  (key == '\n')  {key = getchar();}

	   switch (key)
	   {
	   	   case '1':
			printf("\nEnter ID> ");
			scanf("%d", &students[s_num].id);
			printf("\nEnter Name> ");
			scanf("%s", &students[s_num].name);
			printf("\nEnter Sex> ");
			scanf("%s", &students[s_num].sex);
			printf("\nEnter Quiz 1 Score> ");
			scanf("%f", &students[s_num].q1_score);
			printf("\nEnter Quiz 2 Score> ");
			scanf("%f", &students[s_num].q2_score);
			printf("\nEnter Mid-term Score> ");
			scanf("%f", &students[s_num].m_score);
			printf("\nEnter Final Score> ");
			scanf("%f", &students[s_num].f_score);
			printf("\nEnter Total Score> ");
			scanf("%f", &students[s_num].t_score);
			s_num++;
			break;

	   	   case '2':
	   	   	   printf("\nEnter ID you wish to delete");
	   	   	   scanf("%d", &x);

	   	   	   for(y=0;y<=s_num;y++)
	   	   	   {
	   	   		   if (students[y].id==x)
	   	   		   {
	   	   			students[y].id=0;
	   	   			memset(students[y].name, 0, 100);
	   	   			memset(students[y].sex, 0, 5);
	   	   			students[y].q1_score=0;
	   	   			students[y].q2_score=0;
	   	   			students[y].m_score=0;
	   	   			students[y].f_score=0;
	   	   			students[y].t_score=0;
	   	   		   }
	   	   	   }
	   	   		   break;

	   	   case '3':
	   	   printf("\nEnter ID you wish to update");
		   scanf("%d", &x);

		   for(y=0;y<=s_num;y++)
		   {
			   if (students[y].id==x)
			   {
				   printf("Enter ID> ");
					scanf("%d", &students[y].id);
					printf("\nEnter Name> ");
					scanf("%s", &students[y].name);
					printf("\nEnter Sex> ");
					scanf("%s", &students[y].sex);
					printf("\nEnter Quiz 1 Score> ");
					scanf("%f", &students[y].q1_score);
					printf("\nEnter Quiz 2 Score> ");
					scanf("%f", &students[y].q2_score);
					printf("\nEnter Mid-term Score> ");
					scanf("%f", &students[y].m_score);
					printf("\nEnter Final Score> ");
					scanf("%f", &students[y].f_score);
					printf("\nEnter Total Score> ");
					scanf("%f", &students[y].t_score);
			   }
		   }
		   break;

	   	   case '4':
	   	   	   for(y=0;y<=s_num;y++)
	   	   	   {
	   	   		   if(students[y].id!=0)
	   	   		   {
	   	   			   printf('\nID: %d, Name: %s, Sex: %s, Quiz 1: %f, Quiz 2: %f, Mid-term: %f, Final: %f, Total: %f', students[y].id, students[y].name, students[y].sex, students[y].q1_score, students[y].q2_score, students[y].m_score, students[y].f_score, students[y].t_score);
	   	   		   }
	   	   	   }
	   	   	   break;

	   	   case '5':
	   	   	   printf("\nEnter ID you wish to update");
			   scanf("%d", &x);

			   for(y=0;y<=s_num;y++)
			   {
				   if (students[y].id==x)
				   {
					   ave=(students[y].q1_score+students[y].q2_score+students[y].m_score+students[y].f_score)/4;
					   printf('\nAverage of %s is: %.2f', students[y].name, ave);
				   }
			   }
			   break;

	   	   case '6':
	   	   	   x=0;
	   	   	   for(y=1;y<=s_num;y++)
	   	   	   {
	   	   		   if(students[y].t_score>students[x].t_score)
	   	   		   {
	   	   			   x=y;
	   	   		   }
	   	   	   }
	   	   	   printf("\n%s has the highest total with: %.2f", students[x].name, students[x].t_score);
	   	   	   break;

	   	   case '7':
	   	   	   x=0;
			   for(y=1;y<=s_num;y++)
			   {
				   if(students[y].t_score>students[x].t_score)
				   {
					   x=y;
				   }
			   }
			   printf("\n%s has the highest total with: %.2f", students[x].name, students[x].t_score);
			   break;

	   	   case '8':
	   	   	   printf("\nEnter the ID you wish to find");
	   	   	   scanf("%d", &x);
				for(y=1;y<=s_num;y++)
				{
					if(x==students[y].id)
					{
						printf('The student you were looking for was: %s', students[y].name);
					}
				}
				break;
	   	   default:
			   puts("  Invalid key! Try again.");
			   break;
     }
	}while(!done);

}
