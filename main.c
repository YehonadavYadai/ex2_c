#include <stdio.h>
#include "mybank.h"
#include <stdbool.h>


int main()
{
    char c;
    int id;
    bool legalId;
    bool stop = false;
    while (!stop)
    { //while B
       instrcutions();
       printf("what activity you want to do \n");
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
                stop = false;

            default:
                printf("There no action like this , try again ! ");
            } //switch B

    } //while B
    return 0;
}
