class Solution:
    def isPalindrome(self, s: str) -> bool:
        form_text = "".join(c.lower() for c in s if c.isalnum())
        new_text = form_text[::-1]
        if(new_text == form_text):
            return True
        else:
            return False
        

