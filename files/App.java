package com.ibm.course_project;


import java.sql.*;
import java.util.*;

import com.ibm.course_project.model.Course;
import com.ibm.course_project.service.*;


/**
 * Hello world!
 *
 */
public class App {
	
    public static void main( String[] args ){
    	
    	CourseService service=new CourseServiceImpl();
    	
    	try {
    		
             Scanner sc=new Scanner(System.in);
			
			int choice=0;
			
			do {
				System.out.println("1. Create course");
				System.out.println("2. Display all courses");
				System.out.println("3. Find course by Id");
				System.out.println("4. Find course by name");	
				System.out.println("5. Update course by Id");
				System.out.println("6. Delete course by Id");
				System.out.println("7. Delete all courses");
				System.out.println("0. Close the session\n");
				System.out.println("Enter your choice: ");
						
				choice=sc.nextInt();
				switch (choice) {
				case 1:
					System.out.println("Enter course name: ");
					String courseName=sc.next();
					System.out.println("Enter instructor name: ");
					String instructorName=sc.next();
					List<Course> l=service.showAllCourses();
					int id=l.size()+1;
					Course c1=service.createCourse(new Course(id,courseName,instructorName));
					break;
				case 2:
					System.out.println("All courses are given below:\n");
					l=service.showAllCourses();
					for(Course c:l){
						System.out.println(c);
					}
					break;
				case 3:
					System.out.println("Enter course id: ");
					int id2=sc.nextInt();
					Course course=service.findCourseById(id2);
					if(course==null) {
						System.out.println("Course with given id does not exist!");
					}
					else {
						
						System.out.println("Course found:\n"+course);
					}
					break;
				case 4:
					System.out.println("Enter course name: ");
					String courseName2=sc.next();
					List<Course> l2=service.findCourseByName(courseName2);
					if(l2.isEmpty()) {
						System.out.println("Course with given first name does not exist!");
					}
					else {	
						for(Course c:l2) {
							System.out.println("Course with given name:\n"+c);
						}
					}
					break;
				case 5:
					System.out.println("Enter course id: ");
					int id3=sc.nextInt();
					System.out.println("Enter first name: ");
					String courseName3=sc.next();
					System.out.println("Enter last name: ");
					String instructorName2=sc.next();
					Course course2=service.updateCourseById(id3, new Course(id3,courseName3,instructorName2));
					if(course2!=null){
						System.out.println("updated unsucessfully");
					 }
					 break;
				case 6:
					System.out.println("Enter course id to delete: ");
					int id4=sc.nextInt();
					service.deleteCourseById(id4);
					break;
				case 7:
					service.deleteAllCourses();
					break;
				case 0:
					System.out.println("Session ended");
					System.exit(1);
					break;
				default:
					System.out.println("Invalid Choice!");
					break;
				
				}
				
			} while(choice!=0);
			
			
			
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
    	
    	
      
        
    	
    	
    	
    }
}
