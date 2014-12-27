import java.util.Scanner;
class SpecialMatrix {
	int n,starRow,starCol;
	char sm[][];
	public SpecialMatrix(char sm[][],int n,int starRow,int starCol) {
		this.n = n;
		this.sm = sm;
		this.starRow = starRow;
		this.starCol = starCol;
	}
	public int moveStar() {
		int moves = 0;
		if(starRow >= n/2) {
			while(starRow>=(n/2)) {
				sm[starRow][starCol] ^= sm[starRow-1][starCol];
				sm[starRow-1][starCol] ^= sm[starRow][starCol];
				sm[starRow][starCol] ^= sm[starRow-1][starCol];
				starRow--;
				moves++;
				System.out.println("Row-- "+starRow+" moves = "+moves);
			}
		}
		else {
			while(starRow<=(n/2)) {
				
				sm[starRow][starCol] ^= sm[starRow+1][starCol];
				sm[starRow+1][starCol] ^= sm[starRow][starCol];
				sm[starRow][starCol] ^= sm[starRow+1][starCol];
				starRow++;
				moves++;
				System.out.println("Row++ "+starRow+" moves = "+moves);
			}
		}
		if(starCol >= n/2) {
			while(starCol<=(n/2)) {
				
				sm[starRow][starCol] ^= sm[starRow][starCol-1];
				sm[starRow][starCol-1] ^= sm[starRow][starCol];
				sm[starRow][starCol] ^= sm[starRow][starCol-1];
				starCol--;
				moves++;
				System.out.println("Col-- "+starCol+" moves = "+moves);
			}
		}
		else {
			while(starCol<=(n/2)) {
				
				sm[starRow][starCol] ^= sm[starRow][starCol+1];
				sm[starRow][starCol+1] ^= sm[starRow][starCol];
				sm[starRow][starCol] ^= sm[starRow][starCol+1];
				starCol++;
				moves++;
				System.out.println("Col++ "+starCol+" moves = "+moves);
			}
		}
		return moves;
	}
}

class Main {
	public static void main(String cla[]) {
		Scanner stdin = new Scanner(System.in );
		int t;
		t = stdin.nextInt();
		while(t-- > 0) {
			int sr=0,sc=0;
			int n = stdin.nextInt();
			char smat[][] = new char[n][n];
			for(int i=0;i<n;i++) {
				for(int j=0;j<n;j++) {
					System.out.printf("sm[%d][%d] = ",i,j);
					smat[i][j] = stdin.next().charAt(0);
					if(smat[i][j] == '*') {
						sr = i;
						sc = j;
					}
				}
			}
			for(int r=0;r<n;r++) {
				for(int c=0;c<n;c++) {
					System.out.print(smat[r][c]);
				}
				System.out.println();
			}
			SpecialMatrix sm = new SpecialMatrix(smat,n,sr,sc);
			System.out.println(sm.moveStar());
			
		}
	}
}
