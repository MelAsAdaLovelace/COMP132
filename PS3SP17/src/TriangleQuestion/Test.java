package TriangleQuestion;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class Test {
	public static void main(String[] args) {
		/*Add the following triangles to your list
		Triangle1 Point1 (3,9), Point2(3,1), Point3 (1,1)
		Triangle2 Point1 (6,5), Point2(6,2), Point3 (2,2)
		Triangle3 Point1 (10,2), Point(13,7), Point (7,7)
		Triangle4 Point1 (8,10), Point2 (8,3), Point3 (3,3)
		Triangle5 Point1 (9,7), Point2 (9,4), Point3 (4,4)
		Triangle6 Point1 (7,9), Point2 (7,5), Point3 (5,5)
		Triangle7 Point1 (9,1), Point2 (12,4), Point3 (6,3)
		Triangle8 Point1 (10,12), Point2 (10,6), Point3 (6,6)
		Triangle9 Point1 (10,14), Point2 (10,7), Point3 (7,7)		
		Triangle10 Point1 (15,5), Point2 (10,4), Point3 (7,9)
*/
		Triangle t1 = new Triangle(new Point(3,9), new Point(3,1), new Point(1,1));
		Triangle t2 = new Triangle(new Point(6,5), new Point(6,2), new Point(2,2));
		Triangle t3 = new Triangle(new Point(10,2), new Point(13, 7), new Point(7,7));
		Triangle t4 = new Triangle(new Point(8,10), new Point(8,3), new Point(3,3));
		Triangle t5 = new Triangle(new Point(9,7), new Point(9,4), new Point(4,4));
		Triangle t6 = new Triangle(new Point(7,9), new Point(7,5), new Point(5,5));
		Triangle t7 = new Triangle(new Point(9,1), new Point(12,4), new Point(6,3));
		Triangle t8= new Triangle(new Point(10,12), new Point(10,6), new Point(6,6));
		Triangle t9 = new Triangle(new Point(10,14), new Point(10,7), new Point(7,7));
		Triangle t10 = new Triangle(new Point(15,5), new Point(10,4), new Point(7,9));	
		
		List<Triangle> triangles = new ArrayList<>();
		triangles.add(t1);
		triangles.add(t2);
		triangles.add(t3);
		triangles.add(t4);
		triangles.add(t5);
		triangles.add(t6);
		triangles.add(t7);
		triangles.add(t8);
		triangles.add(t9);
		triangles.add(t10);

		List<Triangle> rights = new LinkedList<>();
		
		for(Triangle t : triangles){
			if(t.isRightAngleTriangle()){
				rights.add(t);
			}
		}
		
		System.out.println("Linked list: \n" + rights);
		Collections.sort(rights);
		System.out.println("Sorted Linked list: \n" + rights);
	}
}
