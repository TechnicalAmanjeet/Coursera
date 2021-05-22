function taxifare = taxi_fare(d,t)
    taxifare = 5 + (ceil(d) - 1)*2 + ceil(t)*0.25
end