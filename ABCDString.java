import java.util.Scanner;
class ABCDString {
	private int count=0;
	String restrict[];
	public ABCDString(String res[]) {
		restrict = res;
	}
	public void countStrings(String prefix) {
		int notMatch = 0;
		for(int i=0;i<restrict.length;i++) {
			if(!prefix.contains(restrict[i]) ) {
				notMatch++;
			}
		}
		if(notMatch == restrict.length) {
			count++;
		}
	}
	public int getCount() {
		return count;
	}
	
	
	public void generateStrings(String prefix,int n) {
		char set[] = {'a','b','c','d'};
		if(n == 0) {
			countStrings(prefix);
			return;
		}
		for(int i=0;i<set.length;i++) {
			String newPrefix = prefix + set[i];
			generateStrings(newPrefix,n-1);
		}
	}
}
class Main {
	public static void main(String cla[]) {
		Scanner stdin = new Scanner(System.in );
		int t,n,k;
		t = stdin.nextInt();
		while(t-- > 0) {
			n = stdin.nextInt();
			k = stdin.nextInt();
			String restrict[] = new String[k];
			for(int i=0;i<k;i++) {
				restrict[i] = stdin.next();
			}
			ABCDString obj = new ABCDString(restrict);
			obj.generateStrings("",n);
			System.out.println(obj.getCount());
		}
	}
}
