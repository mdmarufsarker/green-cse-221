// Write a Java program to create a method that takes a string as input and throws an exception if the string does not contain vowels.

class Five {
    public static void main(String[] args) {
        try {
            String s = "bcdfghjklmnpqrstvwxyz";
            checkVowel(s);
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public static void checkVowel(String s) throws Exception {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s.charAt(i))) {
                count++;
            }
        }
        if (count == 0) {
            throw new Exception("No vowel found");
        }
    }

    public static boolean isVowel(char c) {
        // return "AEIOUaeiou".indexOf(c) != -1;

        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
            return true;
        }else {
            return false;
        }
    }
}