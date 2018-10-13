main()
{
    int x, y = 1, z;

    if ( y != 0 )   x = 5;
    printf("%d\n", x);

    if ( y == 0 )   x = 3;
    else    x = 5;
    printf("%d\n", x);

    x = 1;
    if ( y < 0 )    if ( y > 0 )    x = 3;
    else    x = 5;
    printf("%d\n", x);

    if ( z = y < 0 )    x = 3;
    else if ( y == 0)   x = 5;
    else    x = 7;
    printf("%d\n", x);
    printf("%d\n", z);

    if ( z = ( y == 0 ) )   x = 5;
    x = 3;
    printf("%d\n", x);
    printf("%d\n", z);

    if ( x = z = y );   x = 3;
    printf("%d\n", x);
    printf("%d\n", z);

}
