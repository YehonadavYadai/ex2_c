#include <stdio.h>
#include <stdbool.h>


void initbank (double bank[][2],int size){
    for (int i = 0; i < size; i++){
        bank[i][0]=0;
        bank[i][1]=0;
    } 
}
void instrcutions()
{
   
    printf("O-Open Account\n");
    printf("B-Balance Inquiry\n");
    printf("D-Deposit\n");
    printf("W-Withdrawal\n");
    printf("C-Close Account\n");
    printf("I-Interest\n");
    printf("P-Print\n");
    printf("E-Exit\n");
    
}

void whatYourid(bool *flag, int *idAcccountPointer)
{
    int idaccount;
    printf("what is your idAccount account\n");
    scanf(" %d", &idaccount);

    if ((idaccount < 951)&(idaccount>900))
    {
        *flag = true;
        *idAcccountPointer = idaccount;
    }
    else
        *idAcccountPointer = -1;
    *flag = false;
    printf("this is not a legal idaccount try again\n");
}

void initbankaccount(double bank[][2],int Size)
{ // he will go here if in the main he put "o" and got a legal idAccount
int idNew=-1;
int find=0;
for (int i = 0; i < Size; i++)
{
    if ((bank[i][1]==0)&(!find))
    {// check if there is a spot.
        idNew=i;
        find=1;
    }
}

    if(find)// if hes finds place.
    {
        double sum;
        printf("how much you want to leafkid?\n");
        scanf("%lf", &sum);
        bank[idNew][1] = 1.0;                         // i switched "open"
        bank[idNew][0] = sum;    
        idNew=901+idNew;                     //i put the monay into the accoount.
        printf("Please enter amount for deposit: New account number is:  %d \n",idNew); // i printed the idAccount.

    }
     else
        {
            printf("we sorry the bank is full. /n");
        }
    

}

void printHowMuch(int idAccount,double bank[][2])
{
        if (bank[idAccount][1] == 1)
        { // i its open

            printf("you got %lf shekels in your account\n", bank[idAccount][0]);
        }
            else
            {
                printf("your account is closed\n");
            }
        }
    

    void putMoney(int idAccount,double bank[][2])
    {
        double sum = 0;
        
        if (idAccount != -1)
        {
            printf("put here the money you want to put\n");
            scanf("%lf" ,&sum);
            bank[idAccount][0] += sum;
            printf("your monay in the bank now is :%lf\n" ,bank[idAccount][0]);
        }
    }

    void takeMoney(int idAccount,double bank[][2])
    {
        double sum = 0;
            printf("put here the money you want to poll\n");
            scanf("%lf" ,&sum);
            if (bank[idAccount][0] >= sum)
            {
            bank[idAccount][0] -= sum;
            printf("your monay in the bank now is :%lf\n" ,bank[idAccount][0]);
            }
            else
            {
                printf("you dont have enoght monay in your account ,go to work\n");
            }
        
    }
    void closeAccount(int idAccount,double bank[][2])
    {
    
        if (bank[idAccount][1] == 1.0)
        {
            bank[idAccount][1] = 0.0;
            printf("your account is closed now \n");
        }
            else
            {
                printf("your account is already closed  \n");
            }
        
    }

    void interesRate(double bank[][2])
    {
        double intrest_rate;
        printf("what is the rate?\n");
        scanf("%lf", &intrest_rate);
        
        for (int i=0;i < 50;i++)
        {
            if (bank[i][1] == 1)
        { // it its open
                if (intrest_rate > 0)
                { // if the precent is positive 50 become to 150
                    double converted = (intrest_rate / 100) + 1.0;
                    bank[i][0] = bank[i][0] * converted;
                }
                 if (intrest_rate < 0)
                { //i the prcent is negative -50 become to 50&
                        double converted = intrest_rate / -100;
                        bank[i][0] = bank[i][0] * converted;
                }
        }
            
        }
    }

        void printall(double bank[][2])
        {
            int i;
            for (i = 0; i < 50; i++)
            {
                if (bank[i][1] == 1.0)
                { // it its open
                    printf("account idAccount :%d sumMoney: %lf \n" , i,bank[i][0]);
                }
            }
        }

            void closell(double bank[][2])
            {
                for (int i = 0; i < 50; i++)
                {
                   bank[i][1]=1;
                }
            }
