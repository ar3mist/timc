#include<stdio.h>
int main(){

    enum company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    
    enum company company2;
    company2 = XEROX;
    enum company company0;
    company0 = GOOGLE;
    enum company company4;
    company4 = EBAY;
    printf("%d\n",company2);
    printf("%d\n",company0);
    printf("%d\n",company4);
}
