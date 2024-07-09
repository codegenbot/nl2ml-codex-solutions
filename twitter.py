def validate_tweet(tweet):
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.replace(' ', '')) - 1} characters"