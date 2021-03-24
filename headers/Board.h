class board {
  private:
    char grid[10][10];
  public:
    board();
    void place_ships(char y, char x, char h, int length);
    int is_loser();
    void random_place_ships(int length);
    void draw_grid(int showShips);
    void player_guess(char y, char x);
};
