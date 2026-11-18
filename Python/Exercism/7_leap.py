# https://exercism.org/tracks/python/exercises/leap

def leap_year(year):
    if year % 100 == 0: 
        return year % 400 == 0
    return year % 4 == 0
