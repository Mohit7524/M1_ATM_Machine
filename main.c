#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
void login();
void mainMenu();
void checkBal(float bal);
float moneyWithdraw(float bal);
float moneyDeposit(float bal);
void menuExit();
void error();


int main()
{
int opt;               //option
float bal=8737.00;      //balance =8737.00
int choice;            //Here i am adding choice option like balance checking,deposit,withdraw etc;
bool again=true;
while(again)
{
mainMenu();

printf(".........\n");
printf("Choose any one selection:\t");
scanf("%d",&opt);
switch(opt)
{
     case 1:
            system("ATM");
            checkBal(bal);
            break;
            
       case 2:
             system("ATM");
             bal=moneyDeposit(bal);
             break;
         
        case 3:
             system("ATM");
             bal=moneyWithdraw(bal);
             break;
             
         case 4:
              system("ATM");
              menuExit();
              break;
              
          default:
               error();
               break;
}
    printf("************************************************\n");

        printf("you want to add any another transaction:\n");

        printf("< 1 > Yes\n");

        printf("< 2 > No\n");

        scanf("%d", &choice);

         system("ATM");
         
      if (choice == 2)
      {
      again = false;
      menuExit();
}

}
      return 0;
      }
      
   void mainMenu()
   {
   printf("Hello\n");
   printf("Very Welcome to this ATM Machine\n\n");
   printf("Plz choose any one option which is mention in below\n\n");
   printf("0 Check Balance\n");
   printf("1 Deposit details\n");
   printf("2 Withdraw details\n");
   printf("3 Exit\n\n\n");
   }
   void checkBal(float Bal)
   {
         printf("Balance Details\n");
         printf("\n\n Available Balance is:  $%.2f\n\n",Bal);
         
   }
   
       float moneyDeposit(float bal)
       {
       float deposit;
       printf("You have choose to Deposit a money\n");
       printf("Your Balance is: $%.2f\n\n", bal);

       printf("Enter total amount to you want to Deposit\n");

       scanf("%f", &deposit);
       
       bal+=deposit;
       printf("\n*Your Updated balance is:  $%.2f\n\n",bal);
       return bal;
       }
       
       float moneyWithdraw(float bal) {

       float withdraw;

       bool back = true;

    

    printf("You choose to Withdraw a money\n");

    printf("$Your Balance is: $%.2f\n\n",bal);

    

    while (back) {

    printf("Please Enter the total amount of Withdraw:\n");

    scanf("%f", &withdraw);

    

    

    if (withdraw < bal) {

        back = false;

        bal -= withdraw;

        printf("\n$$$$Totalwithdrawing amount is:  $%.2f\n", withdraw);

        printf("*After withdrawing your current Balance is:   $%.2f\n\n", bal);

        

    }

    

        else  {

        

        printf("+++In your account ,not have a enough money+++\n");

        printf("You can exit or any issue regarding balance plz visit your respective bank office\n");

        printf("**Your Balance is:   $%.2f\n\n", bal);

    

    }

    }

    return bal;

    

    

}



void menuExit() {

    printf("-Take yr slip-\n");

    printf("--Thank you!!!-----\n");
}

void error() {;

    printf("+Invaild, plz enter correct option+\n");

}