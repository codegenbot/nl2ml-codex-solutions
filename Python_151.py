```
def check(func):
    print(func())

def double_the_difference():
    sep = input("Enter the separator: ")
    lst = list(map(int, input().split(sep)))
    difference = max(lst) - min(lst)
    double_diff = str(difference * 2)
    return double_diff

if __name__ == "__main__":
    check(double_the_difference)