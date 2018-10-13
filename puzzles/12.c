int i = 0;
main()
{
    int i =1;
    printf("%d\n", i);
    {
        int i = 2;
        printf("%d\n", i);
        {
            i += 1;
            printf("%d\n", i);
        }
        printf("%d\n", i);
    }
    printf("%d\n", i);
}
