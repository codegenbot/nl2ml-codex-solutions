````
def validate_tweet(tweet):
    tweet = tweet.strip()
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"

tweet = input("Enter your tweet: ")
print(validate_tweet(tweet))