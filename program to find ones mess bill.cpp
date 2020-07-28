#include <iostream>
using namespace std;
int main() {
    int no,sm,bm,lm,dm,f,tm,tc,nc,nsm,ntm,am,nstm,ta,fc,sma;
    string name,rn;
    cin >>no;

    cin >>name;

    cin >>rn;
    cin >>sm;

    cin >>bm;

    cin >>lm;

    cin >>dm;

    cin >>f;

    
    cout <<name<<" "<<rn<<"\n";
    tm = bm+lm+dm+sm;
    cout <<tm;
    if(sm <= 2)
    {
        nsm = 2;
    }
    else
    {
        nsm = 0;
    }
     if(tm < 40)
    {
        ntm = 40;
    }
    else
    {    
        ntm = tm;
    }
        am = ntm-tm;
        sma = nsm-sm;
        if(sm>2)
        {
            sma=0;
        }
        nstm = (ntm+nsm);
        tc = (bm*40)+(lm*50)+(dm*50)+(sm*100);

    if(tc > 3000)
    {
        ta = (4*tc)/100;
        nc = (ta+tc);
    }
    else
    {
        ta = 0;
        nc=tc;
    }
    fc= nc+f;
    
    cout <<"\n"<<am<<"\n"<<sma<<"\n"<<tc<<"\n"<<ta<<"\n"<<fc;
    return 0;
}
