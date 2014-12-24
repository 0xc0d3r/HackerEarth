import java.util.Scanner;
class KaranStrings {
	public static void printKaranStrings(String s) {
		String mstr = "" + s.charAt(0);
		int msi=0;
		for(int i=0;i<s.length();i++) {
			if(s.charAt(i) == mstr.charAt(msi)) continue;
			else {
				mstr += s.charAt(i);
				msi++;
			}
		}
		System.out.println(mstr);
	}
	public static void main(String cla[]) {
		int t;
		String str;
		Scanner in = new Scanner(System.in);
		t = in.nextInt();
		for(int i=0;i<t;i++) {
			in.nextLine();
			str = in.next();
			printKaranStrings(str);
		}
	}
}
