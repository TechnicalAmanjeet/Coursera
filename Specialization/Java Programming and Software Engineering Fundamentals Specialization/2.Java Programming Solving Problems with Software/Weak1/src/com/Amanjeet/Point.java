package com.Amanjeet;

public class Point {
    private int x,y;

    public Point(int startx, int starty){
        this.x = startx;
        this.y = starty;
    }

    public Point(Point other){
        this(other.x, other.y);
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public double distance(Point other){
        int x = this.x - other.x;
        int y = this.y - other.y;
        double dist = Math.sqrt(x*x + y*y);
        return dist;
    }

    public static void main(String[] args) {
        Point p0 = new Point(-3,9);
//        Point[] p1 = {p0,p0};
        Point p1[] = { new Point(-3,9), new Point(-8,7),new Point(-12,4),new Point(-6,-2),new Point(-4,-6),new Point(2,-8),new Point(6,-5),new Point(10,-3),new Point(8,5),new Point(4,8)};
        double totaldist = 0;
        Point currpt = p1[0];
        for(Point pt:p1){
            totaldist += currpt.distance(pt);
//            System.out.println(totaldist);
            currpt = pt;
        }
        System.out.println(Math.floor(totaldist*100)/100);

        Point[] p2 = {new Point(-3,3), new Point(-4,-3), new Point(4,-2),new Point(6,5)};
        double dist = 0;
        currpt = p2[0];
        for(Point pt:p2){
            dist += currpt.distance(pt);
            System.out.println(dist);
            currpt = pt;
        }
        System.out.println(Math.floor(dist)/(p2.length));

    }
}
