def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": " or ",
        "&": " and ",
        "!": "not ",
    }
    modified_expression = expression.translate(str.maketrans(translation_dict))

    modified_expression = modified_expression.replace(" or or", " or False or").replace(
        " and and", " and False and"
    )

    modified_expression = modified_expression.replace("!True", "False")
    modified_expression = modified_expression.replace("!False", "True")

    return eval(modified_expression) or False