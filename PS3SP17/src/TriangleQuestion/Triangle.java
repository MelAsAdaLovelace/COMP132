package TriangleQuestion;

public class Triangle implements Comparable<Triangle>{
	private Point p1;
	private Point p2;
	private Point p3;
	public Triangle(Point p1, Point p2, Point p3) {
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;
	}

	public boolean isRightAngleTriangle(){
		if((p1.getX() == p2.getX()) && (p2.getY() == p3.getY())) {
			return true;
		}
		else {
			System.out.println("Points of triangle: \n" + p1 + p2 + p3);
			return false;
		}
	}

	public double calculateDistance(Point po1, Point po2){
		return Math.sqrt(Math.pow(po1.getX() - po2.getX(), 2) + Math.pow(po1.getY() - po2.getY(), 2));
	}
	public double calculateAra(){
		if(this.isRightAngleTriangle()){
		return this.calculateDistance(this.p2, this.p3) * this.calculateDistance(this.p1, this.p2) /2;
		}
		else{
			return 0;
		}
	}
	

	
	public String toString(){
		if(this.isRightAngleTriangle()){
			return "The Base: " + this.calculateDistance(this.p2, this.p3) + "\nThe Height: " + this.calculateDistance(this.p1, this.p2)+ "\nArea: " + this.calculateAra();
		}
		return "";
	}

	@Override
	public int compareTo(Triangle t) {
		double area0 = this.calculateAra();
		double area1 = t.calculateAra();
		if(area0 < area1) return 1;
		if(area0 > area1) return -1;
		return 0;
	}


}
