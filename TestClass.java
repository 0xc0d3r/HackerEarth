import java.util.Scanner;
class TestClass {
	public static void gameOfWord(String s) {
		for(int i=0;i<s.length()-1;i++) {
			if(s.charAt(i) == s.charAt(i+1)) {
				System.out.println("SLAP");
				return;
			}
		}
		System.out.println("KISS");
	}
    public static void main(String args[] ) throws Exception {
        Scanner stdin = new Scanner(System.in);
        int t = stdin.nextInt();
        while(t-- > 0) {
        	String input = stdin.next();
        	gameOfWord(input);
        }
        
	}
}

