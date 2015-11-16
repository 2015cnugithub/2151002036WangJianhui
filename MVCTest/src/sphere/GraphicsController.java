package sphere;

import java.awt.Point;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionListener;
import java.math.BigDecimal;

public class GraphicsController implements MouseMotionListener{
	private Sphere sphere;
	
	public GraphicsController(Sphere sphere) {
		this.sphere = sphere;
	}

	@Override
	public void mouseDragged(MouseEvent e) {
	Point p  = e.getPoint();
	double r =  p.getX() + p.getY() - Math.sqrt(2*p.getX()*p.getY());//计算半径
	BigDecimal b = new BigDecimal(r);	
	double r1 = b.setScale(3, BigDecimal.ROUND_HALF_UP).doubleValue(); //保留3位小数
	//System.out.println(p.getX() + "|"+ p.getY()+"|" + r1);
	sphere.setRadius(r1);
	}

	@Override
	public void mouseMoved(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

}
