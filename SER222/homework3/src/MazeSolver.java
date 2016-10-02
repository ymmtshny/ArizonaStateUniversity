import java.util.*;

/**
 * MazeSolver attempts to recursively traverse a Maze. The goal is to get from the
 * given starting position to the bottom right, following a path of 1's. Arbitrary
 * constants are used to represent locations in the maze that have been TRIED
 * and that are part of the solution PATH.
 *
 * @author Lewis and Chase
 * @version 4.0
 */
public class MazeSolver
{
	private Maze maze;
	private Position startPoint;
	private Position endPoint;
	private Deque<Position> path = new LinkedList<Position>();
	private boolean solved = false;
	/**
	 * Constructor for the MazeSolver class.
	 */
	public MazeSolver(Maze maze)
	{
		this.maze = maze;
	}

	/**
	 * This function sets a starting position of solving maze.
	 * @param x represents x coordinate
	 * @param y represents y coordinate
	 */
	public void setStartPoint(int x, int y) {
		
		if(x > this.maze.getColumns() || y > this.maze.getRows()) {
			System.out.println("Invalid Input");
			System.exit(0);
		}
		
		Position pos = new Position();
		pos.setx(x);
		pos.sety(y);
		this.startPoint = pos;
	}

	/**
	 * This function sets the ending position of solving maze.
	 * @param x represents x coordinate
	 * @param y represents y coordinate
	 */
	public void setEndPoint(int x, int y) {
		
		if(x > this.maze.getColumns() || y > this.maze.getRows()) {
			System.out.println("Invalid Input");
			System.exit(0);
		}

		Position pos = new Position();
		pos.setx(x);
		pos.sety(y);
		this.endPoint = pos;
	}

	/**
	 * Attempts to recursively traverse the maze. Inserts special
	 * characters indicating locations that have been TRIED and that
	 * eventually become part of the solution PATH.
	 *
	 * @param row row index of current location
	 * @param column column index of current location
	 * @return true if the maze has been solved
	 */
	public boolean traverse()
	{
		int row, column;
		Position pos = new Position();
		Deque<Position> stack = new LinkedList<Position>();
		stack.push(pos);

		while (!(solved) && !stack.isEmpty())
		{
			pos = stack.pop();
			maze.tryPosition(pos.getx(),pos.gety());  // this cell has been tried
			if (pos.isEqualTo(endPoint))
				solved = true;  // the maze is solved
			else
			{
				push_new_pos(pos.getx() - 1,pos.gety(), stack);
				push_new_pos(pos.getx() + 1,pos.gety(), stack);
				push_new_pos(pos.getx(),pos.gety() - 1, stack);
				push_new_pos(pos.getx(),pos.gety() + 1, stack);
			}
		}

		return solved;
	}

	/**
	 * Push a new attempted move onto the stack
	 * push a valid move onto the path
	 * @param x represents x coordinate
	 * @param y represents y coordinate
	 * @param stack the working stack of moves within the grid
	 * @return stack of moves within the grid
	 */
	private void push_new_pos(int x, int y,
										 Deque<Position> stack)
	{
		Position npos = new Position();
		npos.setx(x);
		npos.sety(y);
		if (maze.validPosition(x,y)) {
			stack.push(npos);
			path.push(npos);
		}
	}

	/**
	* print solved path
	*/
	public void printSolvedPath() {
		if(solved) {
			while (!path.isEmpty()) {
				Position pos = path.pop();
				System.out.println(pos.gety() + ", " + pos.getx());
			}
		}
	}


}
