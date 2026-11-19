# https://exercism.org/tracks/python/exercises/raindrops

def convert(number):
    output = ""
    is_divisible = False 
    if number % 3 == 0:
        output += "Pling"
        is_divisible = True 
    if number % 5 == 0:
        output += "Plang"
        is_divisible = True 
    if number % 7 == 0:
        output += "Plong"
        is_divisible = True 
    if not is_divisible:
        output += str(number)
    return output
