class DataStream {
    int a,b,c;
public:
    DataStream(int value, int k) {
        b=k;
        c=value;
        a=0;
    }
    
    bool consec(int num) {
        if(num==c){
            a++;
        }
        else{
            a=0;
        }
        return a>=b;
    }
};
