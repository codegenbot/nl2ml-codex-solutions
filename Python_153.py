def Strongest_Extension(class_name, extensions):
    strongest_extension = max(
        extensions, key=lambda x: (x.upper().count(x) - x.lower().count(x))
    )
    return "{}.{}".format(class_name, strongest_extension)