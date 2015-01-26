import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Scanner;
class MirrorOfGandhi{
	public static boolean isPalindrome(String s){
		for(int i=0,j=s.length()-1;( i<j );i++,j--){
			if(s.charAt(i) != s.charAt(j)) return false;
		}
		return true;
	}
	public static void main(String cla[]){
		Scanner stdin = new Scanner(System.in);
		String pattern = "2|3|4|5|6|7|9";
		int t=stdin.nextInt();
		Pattern p = Pattern.compile(pattern);
		while(t-- > 0){
			String s = stdin.next();
			Matcher m = p.matcher(s);
			System.out.println(isPalindrome(s) && !m.find() ? "YES" : "NO");
		}
	}
}
