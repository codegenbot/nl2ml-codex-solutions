
<<REPL>>
# Write your code here
import sys
def find_pair(arr, target):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i]+arr[j] == target:
                return [arr[i], arr[j]]
<<RE>>
# Write your code here
import sys
def find_pair(arr, target):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i]+arr[j] == target:
                return [arr[i], arr[j]]
<<EOF>>
