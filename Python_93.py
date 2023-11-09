
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('I DoNt KnOw WhAt tO WrItE') == "k dqnT kNqw wHct tq wRktg"
    """
    message = message.lower()
    message = message.replace('a', 'c')
    message = message.replace('e', 'g')
    message = message.replace('i', 'k')
    message = message.replace('o', 'q')
    message = message.replace('u', 'w')

    return message.upper()
