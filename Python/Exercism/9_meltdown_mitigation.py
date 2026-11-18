# https://exercism.org/tracks/python/exercises/meltdown-mitigation/edit

def is_criticality_balanced(temperature, neutrons_emitted):
    product = temperature * neutrons_emitted
    if temperature < 800 and neutrons_emitted > 500 and product < 500000:
        return True 
    return False


def reactor_efficiency(voltage, current, theoretical_max_power):
    generated_power = voltage * current 
    percentage_value = (generated_power / theoretical_max_power) * 100
    if percentage_value >= 80: return "green"
    if percentage_value >= 60: return "orange"
    if percentage_value >= 30: return "red"
    return "black"


def fail_safe(temperature, neutrons_produced_per_second, threshold):
    measure = temperature * neutrons_produced_per_second
    if measure < threshold * 0.9:
        return "LOW"
    lower_bound = threshold - threshold * 0.1
    upper_bound = threshold + threshold * 0.1
    if measure <= upper_bound and measure >= lower_bound:
        return "NORMAL"
    return "DANGER"
