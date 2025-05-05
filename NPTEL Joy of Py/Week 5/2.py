

def merge_dicts(dict1, dict2):
    result = dict1.copy()
    for key, value in dict2.items():
        if key in result:
            result[key] += value
        else:
            result[key] = value
    return result

# Example usage:
dict1 = eval(input())
dict2 = eval(input())

merged_dict = merge_dicts(dict1, dict2)
print("Merged Dictionary:", merged_dict)
