
def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = float('inf')

    # Loop through each element in the array
    for i in range(len(arr)):
        # Check if the current element is the same as the element at the opposite end of the array
        if arr[i] == arr[-i-1]:
            # If they are the same, we don't need to change anything
            continue
        else:
            # Otherwise, we need to change this element
            changes = 1

            # Loop through each element after the current one and check if it is the same as the element at the opposite end of the array
            for j in range(i+1, len(arr)):
                if arr[j] == arr[-j-1]:
                    # If they are the same, we don't need to change anything
                    continue
                else:
                    # Otherwise, we need to change this element
                    changes += 1

            # Update the minimum number of changes if necessary
            min_changes = min(min_changes, changes)

    return min_changes