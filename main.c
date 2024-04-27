#include <stdio.h>
#include <string.h>
#include <conio.h>
struct ordering{
    char name[50];
    int OrderNo;
    int number_of_food;

int Amt;

}
z[10000];

int OrderCount= 0,
served_count = 0,
 waiting_now = 0;
  void ItemsList()
{
    printf("..................................MENU....................................\n");

    printf("Item Code------Description-------------------Size--------------------Price(tk)\n");

    printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
    printf("[12]---------Chicken Pizza--------------12/14/16inch---------------750/975/1250\n");
    printf("[13]---------Fried Chicken--------------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------Grilled Chicken------------quarter/half/full----------70/140/250\n");
    printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[16]---------Pasta----------------------Half/Full------------------120/240\n");
    printf("[17]---------Oreo Shake-----------------250mg----------------------180\n");
    printf("[18]---------Cold Coffee----------------250mg----------------------65\n");
    printf("[19]---------Cappuccino-----------------250mg----------------------70\n");
    printf("[20]---------Coke-----------------------250/500mg------------------20/30\n\n");

}
int ordering()
{
    int n,name,q,in;

printf ("please enter your name: ");
scanf("%s",z[OrderCount].name);

  z[OrderCount].OrderNo = 10000+OrderCount;
    ItemsList();

 z[OrderCount].number_of_food = n;
    z[OrderCount].Amt = 0;

z[OrderCount].number_of_food = 0;


 level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

 while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
 switch(in){

 case 11 :{  printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
        int i; scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();
z[OrderCount].number_of_food +=q;
  if (i==1){
    z[OrderCount].Amt += (130*q);
  }
   else {
   z[OrderCount].Amt += (180*q);
   }
   break;
    }

 case 12 :{
        printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();
     z[OrderCount].number_of_food +=q;
        if (i==1) z[OrderCount].Amt += (750*q);
        else if (i==2) z[OrderCount].Amt += (975*q);
        else  z[OrderCount].Amt += (1250*q);break;
    }
    case 13 :{
        int i;
        printf ("Enter the amount of chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
      scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;
       if (i==1) z[OrderCount].Amt += (85*q);
        else if (i==2) z[OrderCount].Amt += (790*q);
        break;
    }
    case 14 :{int i;
        printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");

        scanf ("%d", &i);
        getchar();
         printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;

        if (i==1) z[OrderCount].Amt += (70*q);

        else if (i==2) z[OrderCount].Amt += (140*q);

        else  z[OrderCount].Amt += (250*q);

        break;
    }
    case 15 :{
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;

        if (i==1) z[OrderCount].Amt += (130*q);

        else z[OrderCount].Amt += (250*q);

        break;
    }
    case 16 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;

        if (i==1) z[OrderCount].Amt += (120*q);

        else z[OrderCount].Amt += (240*q);

        break;
    }
    case 17 : {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;
        z[OrderCount].Amt += (180*q);
        break;
    }
    case 18 : {
        printf ("250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;
        z[OrderCount].Amt += (65*q);
        break;
    }
    case 19 : {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;
        z[OrderCount].Amt += (70*q);
        break;
    }
    case 20 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &q);
        getchar();

        z[OrderCount].number_of_food +=q;

        if (i==1) z[OrderCount].Amt += (20*q);

        else z[OrderCount].Amt += (30*q);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char x;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &x);
    if (x == 'y' || x == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", z[OrderCount].number_of_food);
    printf ("\nThank you %s for your order. \nYour bill is %dtk.\nPlease wait while we prepare the food.\n\n", z[OrderCount].name, z[OrderCount].Amt);
    OrderCount ++;
}
void receive()
{
    if (OrderCount==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == OrderCount) {
        printf ("serving finished\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", z[served_count].OrderNo, z[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (OrderCount));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (OrderCount-served_count));
    printf ("Currently preparing food for order no. %d\n\n", z[served_count].OrderNo);
}

int main ()
{
    printf ("\t\t     Welcome To Cafe Aroma\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                ordering();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
               printf("Closed");
                return 0;
            }
        }
    }
}

