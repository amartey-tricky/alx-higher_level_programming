#!/usr/bin/python3
def remove_char_at(str, n):
    """
        Remove a character at a specific position
    """
    if n < 0 or n >= len(str):
        return str
    else:
        return str[:n] + str[n + 1:]
