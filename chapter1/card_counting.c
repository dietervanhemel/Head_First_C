int main()
{
    int count = 0;
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0])
    while ( card_name[0] != 'X' )
    {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name); 
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if ( (val < 1) || (val > 10) )
                {
                    printf("Wrong value :%i\n", val);
                    puts("It must be 1-7, J, Q, K or A");
                    continue;
                }
        }
        if ( (val > 2) && (val < 7) )
            count++;
        else if (val == 10)
            count--;
    }
    if ( (val > 2) && (val < 7) )
        puts("Count has gone up");
    else if (val == 10)
        puts("Count has gone down");
    printf("The card count is %i\n", count);
    return 0;
}

