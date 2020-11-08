import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.*;

class Team{
    int scored;
    int received;
    int points;
    int team;
    double basket;

    public Team(int team){
	this.team = team;
	this.scored = 0;
	this.received = 0;
	this.points = 0;
	this.basket = 0.0;
    }
}

class Rank implements Comparator<Team>{
    @Override
    public int compare(Team a, Team b){
	if(a.points != b.points)
	    return a.points - b.points;
	if(a.basket != b.basket){
	    if(a.basket > b.basket)
		return 1;
	    return -1;
	}
	if(a.scored != b.scored)
	    return a.scored - b.scored;
	return b.team - a.team;
    }
}

public class Spurs{
    public static void main(String[] args) throws IOException{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	String line;
	int instancia = 1;
	while((line=br.readLine()) != null && !line.equals("0")){
	    StringTokenizer st = new StringTokenizer(line);
	    int t = Integer.parseInt(st.nextToken());
	    Team[] arr = new Team[t];
	    for(int i=0;i<t;i++){
		arr[i] = new Team(i+1);
	    }
	    for(int i=0;i<t*(t-1)/2;i++){
		st = new StringTokenizer(br.readLine());
		int team1 = Integer.parseInt(st.nextToken());
		int t1p = Integer.parseInt(st.nextToken());
		int team2 = Integer.parseInt(st.nextToken());
		int t2p = Integer.parseInt(st.nextToken());
		if(t1p>t2p){
		    arr[team1-1].points += 2;
		    arr[team2-1].points += 1;
		}else{
		    arr[team1-1].points += 1;
		    arr[team2-1].points += 2;
		}
		arr[team1-1].scored += t1p;
		arr[team1-1].received += t2p;
		arr[team2-1].scored += t2p;
		arr[team2-1].received += t1p;
	    }
	    for(int i=0;i<t;i++){
		if(arr[i].received == 0)
		    arr[i].received = 1;
		arr[i].basket = ((double)arr[i].scored)/arr[i].received;
	    }
	    Arrays.sort(arr, new Rank());
	    String s = "Instancia " + instancia + "\n" + arr[arr.length-1].team;
	    for(int i=arr.length-2;i>-1;i--){
		s += " " + arr[i].team;
	    }
	    System.out.println(s);
	    System.out.println();
	    instancia++;
	}
    }
}
		
    
