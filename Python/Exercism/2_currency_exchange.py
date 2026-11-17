# https://exercism.org/tracks/python/exercises/currency-exchange

def exchange_money(budget, exchange_rate):
    return budget / exchange_rate


def get_change(budget, exchanging_value):
    return budget - exchanging_value


def get_value_of_bills(denomination, number_of_bills):
    return int(denomination * number_of_bills)


def get_number_of_bills(amount, denomination):
    return int(amount // denomination)


def get_leftover_of_bills(amount, denomination):
    return amount % denomination


def exchangeable_value(budget, exchange_rate, spread, denomination):
    spread_actual = exchange_rate * (spread / 100) 
    exchange_rate = exchange_rate + spread_actual 
    moners = exchange_money(budget, exchange_rate)
    number_of_bills = get_number_of_bills(moners, denomination)
    return get_value_of_bills(denomination, number_of_bills)

print(exchange_money(127.5, 1.2))
print(get_change(127.5, 120))
print(get_value_of_bills(5, 128))
print(get_number_of_bills(127.5, 5))
print(get_leftover_of_bills(127.5, 20))
print(exchangeable_value(127.25, 1.20, 10, 20))
print(exchangeable_value(127.25, 1.20, 10, 5))