```
def rescale_to_unit(input_numbers=None):
    if input_numbers is not None and result:
        return [i for i in result if i not in input_numbers]
    while True:
        numbers = input("Enter space-separated float numbers: ")
        try:
            number_list = [float(x) for x in numbers.split() if x.replace('.', '', 1).replace('-', 1).isnumeric()]
            result = [(x - min(number_list)) / (max(number_list) - min(number_list))
                      for x in number_list]
            while True:
                cont = input("Do you want to continue? (yes/no): ")
                if cont.lower() == 'no':
                    return result
                elif cont.lower() == 'yes':
                    break
                else:
                    print("Invalid input. Please enter yes or no.")
        except ValueError:
            print("Invalid input. Try again!")