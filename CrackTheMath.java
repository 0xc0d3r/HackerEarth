import java.util.Scanner;
class CrackTheMath {
	public static String crackTheMath(String A,String B) {
		String res="";
		for(int i=0;i<A.length();i++) {
			res += ( (int)A.charAt(i) ^ (int)B.charAt(i));
		}
		return res;
	}
	public static void main(String cla[]) {
		Scanner input = new Scanner(System.in);
		int t=input.nextInt();
		for(int i=0;i<t;i++) {
			String A = input.next();
			String B = input.next();
			System.out.println(crackTheMath(A,B));
		}
	}
}
