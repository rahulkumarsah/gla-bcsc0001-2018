main()
{
    int i = 0, a;
    char arr[5] = {};
    for ( i = 0 ; i < 5 ; i++ )
    {
        if (arr[i] == '\0')
        {
            printf("%d", i);
        }
        else
        {
            printf("%c\n", arr[i]);
        }
    }
}
