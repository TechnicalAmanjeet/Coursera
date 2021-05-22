function admit = eligible(v,q)
    admit = v > 88 && q > 88 && mean([v q]) >= 92
end