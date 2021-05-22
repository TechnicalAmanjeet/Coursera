function [a,b,c,d]= corners(m)
    a=m(1,1)
    b=m(1,end)
    c=m(end,1)
    d=m(end,end)
end