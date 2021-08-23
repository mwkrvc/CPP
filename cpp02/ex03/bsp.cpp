# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed detPC; // det(U, V) = U x V = Ux * Vy - Uy * Vx
	Fixed detAC;
	Fixed detBC;
	Fixed detPB;
	Fixed detAB;
	Fixed AC;
	Fixed BC;

	detPC = point.getX() * c.getY() - point.getY() * c.getX();
	detAC = a.getX() * c.getY() - a.getY() * c.getX();
	detBC = b.getX() * c.getY() - b.getY() * c.getX();
	detPB = point.getX() * b.getY() - point.getY() * b.getX();
	detAB = a.getX() * b.getY() - a.getY() * b.getX();

	AC = (detPC - detAC) / detBC;
	BC = ((detPB - detAB) / detBC) * (-1);
	if (AC > 0 && BC > 0 && AC + BC < Fixed(1))
		return true;
	return false;
}
