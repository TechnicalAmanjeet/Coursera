function [summa , index] = max_sum(v,n)
    [a,b]=size(v);
    summa = -inf;
    if n> b
        summa=0;
    end
    i=-1
    for j=1:(b-n+1)
        s=sum(v(j:j+n-1));
        if s>summa
            summa=s;
            i=j;
        end
       
    end
    index=i
    ends