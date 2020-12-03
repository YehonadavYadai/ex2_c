#include <stdio.h>
#include "mybank.h"
#include <stdbool.h>
#define FIELDS 2
#define SizeofBank 50



int main()
{
    
double bank[SizeofBank][FIELDS]; //init
initbank(bank,50);
    char c;
    int id;
    bool legalId;
    bool pressExit =false;

    while (!pressExit)
    { //while B
    printf("Please choose a transaction type: \n");
       instrcutions();
       
       scanf(" %c",&c);
        legalId=false;
        switch (c)
            { //switch B

            case 'O':
            initbankaccount(bank,50);
break;
            case 'B':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    printHowMuch(id,bank);
                }
                break;

            case 'D':
           
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    putMoney(id,bank);
                }
                break;
            case 'W':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    takeMoney(id,bank);
                }
                break;
            case 'C':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    closeAccount(id,bank);
                }
                break;
            case 'I':
                interesRate(bank);
break;
            case 'P':
            printall(bank);
        
break;
            case 'E':
                closell(bank);
                pressExit = true;
              break;
            default:
                printf("Invalid transaction type \n");
            } //switch B

    } //while B
    return 0;
}
