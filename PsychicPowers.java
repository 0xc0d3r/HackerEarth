import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Scanner;
class PsychicPowers {
	private static boolean findSix1s0s(String input) {
		String pattern = "0{6}|1{6}";
		Pattern p = Pattern.compile(pattern);
		Matcher m = p.matcher(input);
		if(m.find()) return true;
		else return false;
	}
	public static void main(String cla[]) {
		Scanner stdin = new Scanner(System.in );
		String bin = stdin.next();
		if(findSix1s0s(bin)) System.out.println("Sorry! Sorry!");
		else System.out.println("Good Luck!");
	}
}
