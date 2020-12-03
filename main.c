#include <stdio.h>
#include "mybank.c"
#include <stdbool.h>


int main()
{
    char c;
    int id;
    bool legalId;
    bool pressExit =false;
    while (!pressExit)
    { //while B
       instrcutions();
       printf("Please choose a transaction type: \n");
       scanf("%c",&c);
        switch (c)
            { //switch B
            case 'O':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    initbankaccount(id);
                }

            case 'B':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    printHowMuch(id);
                }

            case 'D':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    putMoney(id);
                }
            case 'W':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    takeMoney(id);
                }
            case 'C':
                whatYourid(&legalId, &id);
                if (legalId)
                {
                    closeAccount(id);
                }
            case 'I':
                interesRate();

            case 'P':
            printall();
        

            case 'E':
                closell;
                pressExit = true;
              

            default:
                printf("There no action like this , try again ! \n");
            } //switch B

    } //while B
    return 0;
}
