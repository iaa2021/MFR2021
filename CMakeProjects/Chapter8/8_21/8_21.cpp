#include <iostream> 
using std::cout; 
using std::cin; 
using std::endl; 

void mysteryl( char *, const char * );  
 
int main() 
{ 
char stringl[ 80 ]; 
char string2[ 80 ]; 
 
cout << "Enter two strings: ";
cin >> stringl >> string2; 
mysteryl( stringl, string2 ); 
cout << stringl << endl; 
char s[] = "this is a character array";//ex8.23
for (size_t i = 0; i < sizeof(s)/sizeof(char); i++)
cout << s[ i ] << ' '; 

return 0; 
} 

void mysteryl( char *sl, const char *s2 )//concatenations of strings
{ 
while ( *sl != '\0' ) 
++sl; 

for ( ; *sl = *s2; sl++, s2++ ) 
;
} 
