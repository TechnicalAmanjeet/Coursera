import re

with open('regex_sum_42git .txt') as file:
    sum = 0;
    digit = 0;

    # for line in file.readlines():
    #     word = re.findall('[0-9]+', line)

    word_list = re.findall('[0-9]+',file.read())
    print(len(word_list))

    for num in word_list:
        digit += int(num)
    print(digit)


