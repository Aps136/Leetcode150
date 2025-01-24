class Solution {
    public boolean isValid(String s) {
        Stack<Character> so = new Stack<>();
        for(char c: s.toCharArray()){
            if (c == '(') {
                so.push(')');
            } else if (c == '{') {
                so.push('}');
            } else if (c == '[') {
                so.push(']');
            } else if (so.isEmpty() || c != so.pop()) {
                return false; 
            }

        }
        return so.isEmpty(); 

        
    }
}
