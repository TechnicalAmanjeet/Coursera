function too_young = under_age(a,l)
    if nargin == 1
        l=21;
    end
    too_young=a<l
end