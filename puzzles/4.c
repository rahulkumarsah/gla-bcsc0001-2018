main()
{
    int x, y, z;

    x = 03;
    y = 02;
    z = 01;

    printf("%d\n", ( x | y & z ));
    printf("%d\n", ( x | y & ~z ));
    printf("%d\n", ( x ^ y & ~z ));
    printf("%d\n", ( x & y && z ));

    x = 1;
    y = -1;

    printf("%d\n", ( !x | x ));
    printf("%d\n", ( ~x | x ));
    printf("%d\n", ( x ^ x ));

    x << 3;

    printf("%d\n", x);

    y << 3;

    printf("%d\n", y);

    y >>= 3;

    printf("%d\n", y);

}
