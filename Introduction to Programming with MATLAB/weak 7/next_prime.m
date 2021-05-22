function n = next_prime(m)
    m=m+1;
    while ~isprime(m)
        m=m+1;
    end
    n=m
end