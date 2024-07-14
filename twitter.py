def validate_tweet():
    tweet = input("Enter your tweet: ")
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.strip())} characters"