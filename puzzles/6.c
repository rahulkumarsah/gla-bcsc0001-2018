main()
{
    int x, y, z;

    x = y = z = 1;
    ++x || ++y && ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    x = y = z = 1;
    ++x && ++y || ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    x = y = z = 1;
    ++x && ++y && ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    x = y = z = -1;
    ++x && ++y || ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    x = y = z = -1;
    ++x || ++y && ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    x = y = z = -1;
    ++x && ++y && ++z;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

}
