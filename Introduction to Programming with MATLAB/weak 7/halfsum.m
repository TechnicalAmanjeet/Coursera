function summa = halfsum(m)
    [r,c]=size(m);
    s=0;
    for i = 1:r
        for j = i:c
            s = s+ m(i,j)
        end
    end
    summa=s
end