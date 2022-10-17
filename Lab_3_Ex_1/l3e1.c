/*
 * l3e1.c
 *
 *  Created on: Oct. 6, 2022
 *      Author: cbyer
 */

/* Example: menu system, using do...while, getchar and switch */

/* You've reached a point in the course where you know enough C
to start writing real programs. Here's a fairly realistic example:
a menu ordering system. It could be improved -- for instance there's
no way to cancel an item. Also, when we get on to functions, the
structure could be made more modular. Nevertheless, it works! */


#include <stdio.h>


#define BIG 2.50     /* price of Big Duck */
#define HAM 2.00     /* price of hamburger */
#define CHE 2.00     /* price of cheeseburger */
#define FRI 0.50     /* price of fries */
#define LAR 0.75     /* price of large fries */
#define SOF 0.50     /* price of soft drink */
#define APP 1.00     /* price of apple pie */
#define MIL 0.75     /* price of milk shake */


int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  char key;                /* key pressed */
  int items = 0;           /* number of food items */
  int done = 0;            /* order complete? */
  float total = 0.00;      /* total price */

  int nbig, nham, nche, nfri, nlar, nsof, napp, nmil; /*this is the number of each item*/


  /* Output information: */

  puts("McDUCK'S ELECTRONIC MENU SYSTEM");
  puts("===============================\n");

  puts("Smile at customer; \"How may I help you?\"\n");

  puts("  [B]ig Duck     - press B (then Enter)");
  puts("  [H]amburger    - press H (then Enter)");
  puts("  [C]heeseburger - press C (then Enter)");
  puts("  [F]ries        - press F (then Enter)");
  puts("  [L]arge fries  - press L (then Enter)");
  puts("  [S]oft drink   - press S (then Enter)");
  puts("  [A]pple pie    - press A (then Enter)");
  puts("  [M]ilk shake   - press M (then Enter)\n");
  puts("  Lower-case to Add item\n  Upper-case to remove item\n");
  puts("  [R]estart      - press R (then Enter)\n");
  puts("Press [X] (then Enter) when order is complete\n");


  /* Handle key presses: */

  do {
       key = getchar();  /* read key */
       if  (key == '\n')  {key = getchar();}  /* ignore new-line characters */

       switch (key)
       {
         case 'B':
        	 if(nbig>0){
        		 printf("  Removed Big Duck -$%4.2f\n", BIG);
        		 nbig--;
        		 items--;
        		 total-=BIG;
        	 }
        	 else{
        		 printf("  You do not have any of these on your order.");
        	 }
        	 break;

         case 'b':
           printf("  Big Duck     $%4.2f\n", BIG);
           items++;
           nbig++;
           total += BIG;
           break;

         case 'H':
        	 if(nham>0){
				 printf("  Removed Hamburger -$%4.2f\n", HAM);
				 nham--;
				 items--;
				 total-=HAM;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'h':
           printf("  Hamburger    $%4.2f\n", HAM);
           nham++;
           items++;
           total += HAM;
           break;

         case 'C':
        	 if(nche>0){
				 printf("  Removed Cheeseburger -$%4.2f\n", CHE);
				 nche--;
				 items--;
				 total-=CHE;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'c':
           printf("  Cheeseburger $%4.2f\n", CHE);
           nche++;
           items++;
           total += CHE;
           break;

         case 'F':
        	 if(nfri>0){
				 printf("  Removed fries -$%4.2f\n", FRI);
				 nfri--;
				 items--;
				 total-=FRI;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'f':
           printf("  Fries        $%4.2f\n", FRI);
           nfri++;
           items++;
           total += FRI;
           break;

         case 'L':
        	 if(nlar>0){
				 printf("  Removed Large fries -$%4.2f\n", LAR);
				 nlar--;
				 items--;
				 total-=LAR;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'l':
           printf("  Large fries  $%4.2f\n", LAR);
           nlar++;
           items++;
           total += LAR;
           break;

         case 'S':
        	 if(nsof>0){
				 printf("  Removed Big Duck -$%4.2f\n", SOF);
				 nsof--;
				 items--;
				 total-=SOF;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 's':
           printf("  Soft drink   $%4.2f\n", SOF);
           nsof++;
           items++;
           total += SOF;
           break;

         case 'A':
        	 if(napp>0){
				 printf("  Removed Apple Pie -$%4.2f\n", APP);
				 napp--;
				 items--;
				 total-=APP;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'a':
           printf("  Apple pie    $%4.2f\n", APP);
           napp++;
           items++;
           total += APP;
           break;

         case 'M':
        	 if(nmil>0){
				 printf("  Removed Milk shake -$%4.2f\n", MIL);
				 nmil--;
				 items--;
				 total-=MIL;
			 }
			 else{
				 printf("  You do not have any of these on your order.");
			 }
			 break;

         case 'm':
           printf("  Milk shake   $%4.2f\n", MIL);
           nmil++;
           items++;
           total += MIL;
           break;

         case 'R': case 'r':
        	 printf("Your have restarted the your order.");
        	 items=0;
        	 total=0;
        	 nbig=0;
        	 nham=0;
        	 nche=0;
        	 nfri=0;
        	 nlar=0;
        	 nsof=0;
        	 napp=0;
        	 nmil=0;
        	 break;

         case 'X': case 'x':
           printf("\nOrder complete - ");
           printf("%i items - total $%4.2f\n", items, total);
           done = 1;
           break;

         default:
           puts("  Invalid key! Try again.");
           break;
       }
     } while (!done);


  /* Output information: */

  printf("\n\"Thank you! That'll be $%4.2f\"\n", total);
  puts("Take money, give change");
  puts("\"Thank you!\"\n");
  printf("\nFetch %i items\n", items);
  printf("\"Thanks for eating at McDuck's! Enjoy your meal!\"");
  return 0;
}
