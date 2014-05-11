#include <stdio.h>

struct xampl {
  int x;
};

int practice2()
{
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure; /* Yes, you need the & when dealing with
                           structures and using pointers to them*/
    printf( "%d\n", ptr->x );  /* The -> acts somewhat like the * when
                                   does when it is used with pointers
                                    It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/
    int x = getche();
    int *arry = malloc( sizeof(*arry) * x );
    arry[x-1]=1;
    printf ("%d",arry[x-1]);
    getchar();
};

int practice3() //practice malloc random alphabet
{
  int i,n;
  char * buffer;
  char bar[10];

  printf ("How long do you want the string? ");
  scanf ("%d", &i);
  getch();
  scanf ("%s", &bar);
  buffer = malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
  buffer[n]=rand()%26+'a';
  buffer[i+1]='\0';

  printf ("Random string: %s\n%d\n",buffer,strlen(buffer));
  printf("%c",bar[9]);
  free (buffer);

  return 0;
};

void strip_newline( char *str, int size )
{
    int i;

    /* remove the null terminator */
    for (  i = 0; i < size; ++i )
    {
        if ( str[i] == '\n' )
        {
            str[i] = '\0';

            /* we're done, so just exit the function by returning */
            return;
        }
    }
    /* if we get all the way to here, there must not have been a newline! */
}

int practice4()
{
    char name[20];
    char lastname[20];
    char fullname[100]; /* Big enough to hold both name and lastname */
    int i;

    printf( "Please enter your name: " );
    fgets( name, 20, stdin );
    /* see definition above */
    strip_newline( name, 20 );

    /* strcmp returns zero when the two strings are equal */
    if ( strcmp ( name, "Alex" ) == 0 )
    {
        printf( "That's my name too.\n" );
    }
    else
    {
        printf( "That's not my name.\n" );
    }
    // Find the length of your name
    printf( "Your name is %d letters long", strlen ( name ) );
    printf( "Enter your last name: " );
    fgets( lastname, 50, stdin );
    strip_newline( lastname, 50 );
    fullname[0] = '\0';
    /* strcat will look for the \0 and add the second string starting at
       that location */
    strcat( fullname, name );     /* Copy name into full name */
    strcat( fullname, " " );      /* Separate the names by a space */
    strcat( fullname, lastname ); /* Copy lastname onto the end of fullname */
    printf( "Your full name is %s\n",fullname );

    getchar();

    return 0;
}
