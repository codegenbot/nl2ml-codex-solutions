```
def process_paths(paths):
    while True:
        paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
        
        try:
            if "-" in paths and "," not in paths:
                paths = [[*map(int, paths.strip().split("-"))]]
            elif "," in paths and "- " not in paths:
                paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
            else:
                print(
                    "Please enter a valid path (e.g., 1-2) or multiple paths separated by commas."
                )
        except ValueError:
            print("Invalid input. Please try again.")

        minPath = float('inf')  

        for path in paths:
            if len(path) < minPath:
                minPath = len(path)

        return minPath

print(process_paths([]))