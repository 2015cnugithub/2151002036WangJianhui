/*
 * Sphere.java
 *
 *
 * To change this template, choose Tools | Template Manager
 * and open the template in the editor.
 */

/**
 *
 * @author cnu
 */
package sphere;
import java.util.Observable;
public class Sphere extends Observable {
    private double radius;
    /** Creates a new instance of Sphere */
    public Sphere(int radius) {
        this.radius=radius;
    }
    /**
     * ÊôĞÔ radius µÄ»ñÈ¡·½·¨¡£
     * @return ÊôĞÔ radius µÄÖµ¡£
     */
    public double getRadius() {
        return radius;
    }
    /**
     * ÊôĞÔ radius µÄÉèÖÃ·½·¨¡£
     * @param radius ÊôĞÔ radius µÄĞÂÖµ¡£
     */
    public void setRadius(double radius) {
        this.radius=radius;
        this.setChanged();
        this.notifyObservers();
    }
    
    //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
    public double volume() {
        return (double)4/(double)3*Math.PI*radius*radius*radius;
    }
    
    //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä±ï¿½ï¿½ï¿½ï¿½
    public double surfaceArea() {
        return 4*Math.PI*radius*radius;
    }
    
}
