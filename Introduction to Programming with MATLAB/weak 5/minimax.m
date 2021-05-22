function [a, b] = minimax(M)
    max_rows = max(M')
    min_rows = min(M')
    a = max_rows - min_rows;
    b = max(max_rows) - min(min_rows)
end