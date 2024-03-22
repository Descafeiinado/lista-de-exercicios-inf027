#include <stdio.h>

void main()
{
    int card, date;
    int greatests, lowests;
    
    printf("Insert the 4 last digits of the card and the transaction time: ");
    scanf("%d %d", &card, &date);
    
    int mc, md;
    int cc, cd;
    int dc, dd;
    int uc, ud;
    
    mc = card / 1000, md = date / 1000;
    cc = (card % 1000) / 100, cd = (date % 1000) / 100;
    dc = (card % 100) / 10, dd = (date % 100) / 10;
    uc = (card % 10), ud = (date % 10);
    
    if (mc > md) {
        greatests = mc * 1000;
        lowests = md * 1000;
    } else {
        greatests = md * 1000;
        lowests = mc * 1000;
    }
    
    if (cc > cd) {
        greatests += cc * 100;
        lowests += cd * 100;
    } else {
        greatests += cd * 100;
        lowests += cc * 100;
    }
    
    if (dc > dd) {
        greatests += dc * 10;
        lowests += dd * 10;
    } else {
        greatests += dd * 10;
        lowests += dc * 10;
    }
    
    if (uc > ud) {
        greatests += uc;
        lowests += ud;
    } else {
        greatests += ud;
        lowests += uc;
    }
    
    int toInvert = greatests - lowests;
    
    int ms = toInvert / 1000;
    int cs = (toInvert % 1000) / 100;
    int ds = (toInvert % 100) / 10;
    int us = toInvert % 10;
    
    int inverted = (us * 1000) + (ds * 100) + (cs * 10) + ms;
    
    printf("SecurityCode = %d", inverted);
}
