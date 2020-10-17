import java.util.Arrays;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main{
    public static void main(String [] args) throws IOException{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	String line;
	StringTokenizer t;
	int N, Q, input, c=1;
	int[] arr;
	while((line=br.readLine())!=null){
	    if(line.equals("0 0"))
		break;
	    t=new StringTokenizer(line);
	    N=Integer.parseInt(t.nextToken());
	    Q=Integer.parseInt(t.nextToken());
	    arr=new int[N];
	    for (int i=0;i<N;i++){
		t = new StringTokenizer(br.readLine());
		arr[i]=Integer.parseInt(t.nextToken());
	    }
	    Arrays.sort(arr);
	    System.out.println("CASE# "+Integer.toString(c++)+":");
	    while(Q>0){
		t = new StringTokenizer(br.readLine());
		input=Integer.parseInt(t.nextToken());
		int p=Arrays.binarySearch(arr,input);
		if (p>=0) 
		    System.out.println(Integer.toString(input)+" found at "+Integer.toString(p+1));
		else  
		    System.out.println(Integer.toString(input)+" not found");
		Q--;
	    }
	}
    }
}

