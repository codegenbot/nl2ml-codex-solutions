```
def bowling_score(game):
    score = 0
    game_list = [int(i) if i.isdigit() else i for i in game.replace('-', '/').split()]
    frame = 0
    while len(game_list) > 1:
        if game_list[0] == 'X':
            score += 10
            if len(game_list) >= 2 and game_list[1] != 'X':
                score += game_list.pop(0)
        elif game_list[0] == '/':
            score += 10 - game_list[1]
            game_list.pop(0)
            game_list.pop(0)
        else:
            frame_score = sum(game_list[:2])
            game_list = game_list[2:]
            if frame_score == 10:
                score += frame_score
            elif frame_score < 10:
                score += frame_score
                if len(game_list) >= 2 and sum(int(i) for i in game_list[:2]) == 10:
                    score += 10
                    game_list = game_list[2:]
                else:
                    while len(game_list) > 1 and min(int(i) for i in game_list) < 3:
                        score += game_list.pop(0)
        frame += 1
    if game_list:
        for i in range(len(game_list)):
            score += game_list[i]
    return score

print(bowling_score('9/-39/X3/7/54622325'))