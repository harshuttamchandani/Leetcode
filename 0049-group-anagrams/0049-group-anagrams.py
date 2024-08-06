class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = defaultdict(list)
    
        for s in strs:
        # Sort the string and use it as a key
            sorted_str = ''.join(sorted(s))
            anagrams[sorted_str].append(s)
    
    # Return the values of the dictionary as a list of lists
        return list(anagrams.values())
        
