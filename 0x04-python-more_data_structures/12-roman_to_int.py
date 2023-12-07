#!/usr/bin/python3
def roman_to_int(roman_string):
    rom = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    numb = 0

    if not roman_string or type(roman_string) != str:
        return 0

    for i, char in enumerate(roman_string):
        tmp_num = roman[char]
        try:
            if tmp_num < roman[roman_string[i + 1]]:
                tmp_num = tmp_num * - 1
        except IndexError:
            pass
        number = number + tmp_num
    return number
