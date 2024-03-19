#include <stdio.h>

void main()
{
    int fn, sn;
    scanf("%d %d", &fn, &sn);
    
    int fn1 = fn >= 100 ? fn / 100 : 0;
    int fn2 = fn >= 10 ? (fn % 100) / 10 : 0;
    int fn3 = fn % 10;
    
    int sn1 = sn >= 100 ? sn / 100 : 0;
    int sn2 = sn >= 10 ? (sn % 100) / 10 : 0;
    int sn3 = sn % 10;
    
    int mf, ms;
    
    if (fn3 > sn3) {
        mf = fn3;
    } else if (fn3 == sn3) {
        mf = fn3;
        ms = sn3;
    } else {
        ms = sn3;
    }
    
    if (fn2 > sn2) {
        mf = mf == 0 ? fn2 : (fn2 * 10) + mf;
    } else if(fn2 == sn2) {
        mf = mf == 0 ? fn2 : (fn2 * 10) + mf;
        ms = ms == 0 ? sn2 : (sn2 * 10) + ms;
    } else {
        ms = ms == 0 ? sn2 : (sn2 * 10) + ms;
    }
    
    if (fn1 > sn1) {
        mf = mf == 0 ? fn1 : (mf >= 10) ? (fn1 * 100) + mf : (fn1 * 10) + mf;
    } else if (fn1 == sn1) {
        mf = mf == 0 ? fn1 : (mf >= 10) ? (fn1 * 100) + mf : (fn1 * 10) + mf;
        ms = ms == 0 ? sn1 : (ms >= 10) ? (sn1 * 100) + ms : (sn1 * 10) + ms;
    } else {
        ms = ms == 0 ? sn1 : (ms >= 10) ? (sn1 * 100) + ms : (sn1 * 10) + ms;
    }
    
    printf("%d %d %d\n", fn1, fn2, fn3);
    printf("%d %d %d\n", sn1, sn2, sn3);
    
    printf("%d e %d", mf, ms);
}
