main()
{
    int x = 1, y = 1, z = 1;

    x += y += z;

    printf("%d\n", ( x < y ? y : x ));

    printf("%d\n", ( x < y ? x++ : y++ ));

    printf("%d\n", x);

    printf("%d\n", y);

    printf("%d\n", ( z += x < y ? x++ : y++ ));

    printf("%d\n", y);

    printf("%d\n", z);

    x = 3;
    y = z = 4;

    printf("%d\n", ( ( z >= y >= x ) ? 1 : 0 ));

    printf("%d\n", ( z>= y && y >= x ));

}
