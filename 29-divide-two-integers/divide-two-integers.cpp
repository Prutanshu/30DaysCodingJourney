class Solution {
public:
    int divide(int dividend, int divisor) {
        int k;
        if((dividend>=INT_MAX || dividend<=INT_MIN || divisor>=INT_MAX || divisor<=INT_MIN) && divisor!=0)  {
            long kk;
            long dd=dividend;
            long db=divisor;
            if(db!=0){
             kk=dd/db;
             if(kk>=INT_MAX){
                kk=INT_MAX;
             }
             k=kk;

        } 
        }
        else{
            if(divisor!=0){
             k=(dividend/divisor);
        } 
        }
        return k;
    }
};