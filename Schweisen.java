import java.util.ArrayList;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

class Point{
    public int sch;
    public int x;
    public int y;

    public Point(int sch, int x, int y){
	this.sch = sch;
	this.x=x;
	this.y=y;
    }
}


public class Schweisen{  
    public static void main(String[] args) throws IOException {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer st;
	String line;
	int X, Y, price, Q;
	while((line=br.readLine()) != null && !line.equals("0 0 0")){
		ArrayList<Point> list = new ArrayList<>();
		ArrayList<Integer> ll = new ArrayList<>();
		st = new StringTokenizer(line);
	        X = Integer.parseInt(st.nextToken());
		Y = Integer.parseInt(st.nextToken());
		price = Integer.parseInt(st.nextToken());
	        st = new StringTokenizer(br.readLine());
		Q = Integer.parseInt(st.nextToken());
		while(Q>0){
		    int res = 0;
		    st = new StringTokenizer(br.readLine());
		    line = st.nextToken();
		    if(line.equals("A")){
			int sch = Integer.parseInt(st.nextToken());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			list.add(new Point(sch, x, y));
		    }else if(line.equals("P")){
			int x1 = Integer.parseInt(st.nextToken());
			int y1 = Integer.parseInt(st.nextToken());
			int x2 = Integer.parseInt(st.nextToken());
			int y2 = Integer.parseInt(st.nextToken());
			int menorX, mayorX, menorY, mayorY;
			menorX = (x1 < x2) ? x1 : x2;
			mayorX = (x1>=x2) ? x1 : x2;
			menorY = (y1 < y2) ? y1 : y2;
			mayorY = (y1>=y2) ? y1 : y2;
			for(int i=0;i<list.size();i++){
			    Point p = list.get(i);
			    if(menorX<=p.x && mayorX>=p.x && menorY<=p.y && mayorY>=p.y)
				res+=(price*p.sch);
			}
			ll.add(res);
		    }
		    if(Q==1){
			for(int i=0;i<ll.size();i++){
			    if(i==ll.size()-1)
				System.out.println(ll.get(i)+"\n");
			    else
				System.out.println(ll.get(i));
			}
		    }
		    Q--;
		}
	}
    }
}
	    
			
			
		
	        
