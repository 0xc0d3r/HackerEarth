import java.util.Scanner;
class AlienLanguage {
	public static void main(String cla[]) {
		Scanner stdin = new Scanner(System.in );
		int t = stdin.nextInt();
		while(t-- > 0) {
			String jhool,jaddu;
			jhool = stdin.next();
			jaddu = stdin.next();
			int i;
			for(i=0;i<jaddu.length();i++) {
				if(jhool.contains(""+jaddu.charAt(i))) break;
			}
			if(i!=jaddu.length()) System.out.println("YES"); else System.out.println("NO");
		}	
	}
}
