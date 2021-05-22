function a = trio1(n, m)
    a = ones(3 * n, m);
    a(n + 1 : 2 * n, :) = 2 * ones(n, m);
    a(2 * n + 1 : end, :) = 3 * ones(n, m);
end