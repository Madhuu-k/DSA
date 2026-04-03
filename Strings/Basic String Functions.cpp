#include <iostream>
#include <cstring>  // for strcpy
using namespace std;

int main() {
    char str1[] = "Baelor";
    char str2[] = "Targeryen";

    char combined[50];  // destination buffer must be large enough
    strcpy(combined, str1);       // copy str1 into combined
    strcat(combined, str2);       // append str2 to combined

    cout << "Combined: " << combined << endl;
    cout << "Length: " << strlen(combined) << endl;

    if (strcmp(combined, str1)) cout << "Strings are the same" << endl;
    else cout << "String are different" << endl;

    return 0;
}
