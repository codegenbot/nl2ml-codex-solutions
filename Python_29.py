def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Call the function
filtered_list = filter_strings(strings, prefix)