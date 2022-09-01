#include <stdio.h>
 
int main() {
    
    int NUMBER, HR;
    double SLH, SALARY;
    
    scanf("%d %d %lf",&NUMBER, &HR, &SLH);
    
    SALARY = HR*SLH;
    
    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",NUMBER, SALARY);
    
    return 0;
}