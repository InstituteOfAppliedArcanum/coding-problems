# https://exercism.org/tracks/python/exercises/armstrong-numbers

def is_armstrong_number(number):
    original_number = number
    number_copy = number
    digit_counter = 0
    while number_copy != 0:
        digit_counter += 1
        number_copy = number_copy // 10
    sum = 0
    while number != 0:
        digit = number % 10
        sum += digit ** digit_counter
        number = number // 10
    return sum == original_number

print(is_armstrong_number(9))
print(is_armstrong_number(10))
print(is_armstrong_number(153))
print(is_armstrong_number(154))