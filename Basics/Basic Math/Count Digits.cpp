Given a number N. Count the number of digits in N which evenly divides N

Code->
  int evenlyDivides(int N){
        //code here
        int count=0;
        int n = N;
        while(N!=0){
            int x= N%10;
            if(x!=0 && n%x==0){ //divided by 0 that condition need to be taken care of
                count++;
            }
            N=N/10;
        }
        return count;
    }
