package TriangleQuestion;

public class Point {
	private double x;
	private double y;

	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}

	public double getX() {
		return this.x;
	}

	public double getY() {
		return this.y;
	}

	public String toString() {
		String str = "x-coordinate: " + Double.toString(this.x) + "\t y-coordinate: " + Double.toString(this.y) + "\n";
		return str;
	}
}
