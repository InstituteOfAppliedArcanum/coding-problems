# https://exercism.org/tracks/python/exercises/bob

def response(hey_bob):
    hey_bob = hey_bob.strip()
    str_length = len(hey_bob)
    if hey_bob == "":
        return "Fine. Be that way!"
    if hey_bob.isupper() and hey_bob[str_length - 1] == "?":
        return "Calm down, I know what I'm doing!"
    if not hey_bob.isupper() and hey_bob[str_length - 1] == "?":
        return "Sure."
    if hey_bob.isupper() and not hey_bob[str_length - 1] == "?":
        return "Whoa, chill out!"
    return "Whatever."
