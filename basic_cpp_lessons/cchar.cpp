#include<iostream>
int main() {

    // first 13 symbol is alphanumeric
    // letter or digit return true, #$@ return false
    /*
    char c [] = {"Holahowareyou..."};
    int i = 0;
    while (std::isalnum(c[i])) i++;
    printf("result is %d", i);
    */

    /* only letter return true
    const char cc [] = "Hello,";
    int i = 0;
    while (cc[i]) {
        if (std::isalpha(cc[i])) printf("Next symbol is alpha: %c \n", cc[i]);
        else printf("Next symbol is not alpha %c \n", cc[i]);
        i++;
    }
    */


    /* check blank char
    char c = ' ';
    std::cout << std::isblank(c);
    */


    // check \n symbols
    /*
    int i=0;
    char str[]="fi\n rst line second line \n";
    while (!iscntrl(str[i]))
    {
        putchar (str[i]);
        i++;
    }
    */

    /* digit return true
    const char c [] = "df1988";
    int i = 0;
    while (c[i] != '\0') {
        if (std::isdigit(c[i])) {
            std::cout<<c[i];
        }
        i++;
    }
    */

        /* only graphical symbol return true
    FILE * pFile;
    int c;
    pFile=fopen ("myfile.txt","r");
    if (pFile)
    {
        do {
            c = fgetc (pFile);
            if (isgraph(c)) putchar (c);
        } while (c != EOF);
        fclose (pFile);
        */

    /* lower case return 2 or 1 == true, uppercase return 0 == false
   const char arr [] = {"hoLa"};
    int i = 0;
    while (arr[i] != '\0') {
        if (std::islower(arr[i])) std::cout<<arr[i];
        i++;
    }
    */

    /* letter return true, symbol '\n' return false
    const char c [] = {"Hello \n world"};
    int i = 0;
    while (c[i] != '\0') {
        if (std::isprint(c[i])) putchar(c[i]);
        i++;
    }
    */

    /* punctuation character return true
    const char c [] = "Hello, world!?!";
    int i = 0;
    while (c[i] != '\0') {
        if (std::ispunct(c[i])) std::cout<<c[i];
        i++;
    }
    */
    /* white-space ' ' return true
    char c [] = "KAZ DIGITAL GROUP";
    int i = 0;
    while (c[i] != '\0') {
        if (std::isspace(c[i])) c[i] = '\n';
        std::cout << c[i];
        i++;
    }
    */

    /* uppercase return true;
    const char c = {'E'};
    std::cout << std::isupper(c);
    */

    /* hexadecimal digit return true
    char str[]="ffff";
    long int number;
    if (isxdigit(str[0]))
    {
        number = strtol (str,NULL,16);
        printf ("The hexadecimal number %lx is %ld.\n",number,number);
    }
    */

    /*
    char array to upper case
    char c [] = {"hello, world"};
    int i = 0;
    while (c[i] != '\0') {
        c[i] = toupper(c[i]);
        std::cout << c[i];
        i++;
    }
    */


    /* compare two strings
       char str [] = "abc";
       char str2 [] = "abb";
       std::cout << std::strcmp(str2, str);
       */

    /* compare two string by certain number symbols
    char s [] = {"aaacb"};
    char s2 [] = {"aabbb"};
    size_t t = 3;
    cout << strncmp(s, s2, t);
    */

    /*
    const char* str = "HelloH!! How are you? How your dog?.";
    char target = 'H';
    const char* result = str;
    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";
        ++result;
    }
    */


    /* find first occurrence
    const char* str = "HelloH!! How are you? How your dog?";
    const char target = 'H';
    const char* result = str;
    while ((result = std::strchr(result, target)) != nullptr) {
        std::cout << "Found: " << target << " in " << result << std::endl;
        ++result;
    }
    */

    /* compare two strings
    char str [] = "abc";
    char str2 [] = "abb";
    std::cout << std::strcmp(str2, str);
    */

    /* compare two string by certain number symbols
    char s [] = {"aaacb"};
    char s2 [] = {"aabbb"};
    size_t t = 3;
    cout << strncmp(s, s2, t);
    */

    /*
    const char* str = "HelloH!! How are you? How your dog?.";
    char target = 'H';
    const char* result = str;
    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";
        ++result;
    }
    */

    /* find last occurrence
    const char* str = "/home/user/hello.c";
    const char target = '/';
    char* result = std::strrchr(str, target);
    std::cout << ++result << endl;
    */

    /* copy string
    const char c [] = {"Hola"};
    char nc [] = {};
    std::strcpy(nc, c);
    cout << nc << endl;
    */

    /* concat two strings
    const char s [40] = {"world"};
    char ss [40] = {"Hello "};
    char* result = std::strcat(ss, s);
    std::cout << result << endl;
    */




    return 0;
}