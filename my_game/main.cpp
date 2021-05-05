#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <random>
#include <locale.h>
#include <clocale>
#include <cstdlib>
#include <QApplication>
#include <QPushButton>

//#include "windows.h"
#define FREE if (a==' ')
using namespace std;

//Shared_ptr
//#define CHECK_BORDER x+1
//        Pure Virtual functions

class point {
public:
    int color;
    bool bonus;
    bool used;
    shared_ptr<point>next_x;//x+1
    shared_ptr<point>next_y;//y+1
    shared_ptr<point>prev_x;//x-1
    shared_ptr<point>prev_y;//y-1

    int y;

};

class game {
public:
    int xSize = 32;
    int gameSize = 8;
//    vector<vector<point>> field ;
    point field[32][32];
    int score;
    vector<int> x_way_for_delete;
    vector<int> y_way_for_delete;

    game(int color_count = 3) {
        srand(0);
        for (int x = 0; x < gameSize; x++) {
            for (int y = 0; y < gameSize; y++) {
                field[x][y].color = rand() % color_count + 1;
                field[x][y].bonus = (rand() % 25 == 3);
            }
        }
    };

    void showFieldColor() {
        for (int x = 0; x < gameSize; x++) {
            cout << endl;
            for (int y = 0; y < gameSize; y++) {
                cout << field[x][y].color << " ";
            }
        }
    };

    void showFieldBonus() {
        for (int x = 0; x < gameSize; x++) {
            cout << endl;
            for (int y = 0; y < gameSize; y++) {
                cout << field[x][y].bonus << " ";
            }
        }
    };


    void boom(int x, int y) {
        field[x][y].color = 0;
        int kol = 4;
        while (kol != 0) {
            int rand_x = rand() % gameSize;
            int rand_y = rand() % gameSize;
            if (field[rand_x][rand_y].color != 0) {
                kol--;
                field[rand_x][rand_y].color = 0;
            }
        }
    }

    void reColor(int x, int y) {
        int kol = 2;
        while (kol != 0) {
            int rand_x = rand() % gameSize;
            int rand_y = rand() % gameSize;
            if (abs(rand_x - x) > 1 && abs(rand_y - y) > 1 && field[rand_x][rand_y].color != 0) {
                kol--;
                field[rand_x][rand_y].color = field[x][y].color;
            }
        }
    }

    void nextDel(int x, int y, int way_length, int start_color) {
        if (x < gameSize && y < gameSize && x >= 0 && y >= 0 && field[x][y].color == start_color &&
            field[x][y].used == 0) {

            if (field[x][y].bonus)
                if (rand() % 2)
                    reColor(x, y);
                else
                    boom(x, y);
            recDelite(x, y, way_length + 1);
        }

    }

    void recDelite(int x, int y, int way_length) {
        x_way_for_delete.push_back(x);
        y_way_for_delete.push_back(y);
        int start_color = field[x][y].color;
        field[x][y].used = true;
        nextDel(x + 1, y, way_length, start_color);
        nextDel(x, y + 1, way_length, start_color);
        nextDel(x - 1, y, way_length, start_color);
        nextDel(x, y - 1, way_length, start_color);
        if (way_length >= 3) {
            for (int i = 0; i < x_way_for_delete.size(); i++) {
                field[x_way_for_delete[i]][y_way_for_delete[i]].color = 0;
                field[x_way_for_delete[i]][y_way_for_delete[i]].bonus = 0;
            }
            //            x_way_for_delete.clear();
//            y_way_for_delete.clear();
        }
        x_way_for_delete.clear();
        y_way_for_delete.clear();
    }

    void shift() {
        for (int x = 0; x < gameSize; x++) {
//            vector <point> notnull;
            int pos = 0;
            for (int y = 0; y < gameSize; y++) {
                if (field[x][y].color != 0) {
                    field[x][pos] = field[x][y];
                    pos++;
                }
                if (pos != y + 1)
                    field[x][y].color = 0;
            }
        }
    }

    void check() {
    bool end_flag = true;
    int count_points=0;
    int count_points_new=0;
    while (true) {
        end_flag= false;
        for (int x = 0; x < gameSize; x++) {
            for (int y = 0; y < gameSize; y++) {
                if (field[x][y].color != 0) {
                    recDelite(x, y, 1);
                    count_points_new++;
                }
            }
        }
        if (count_points_new==count_points)
            break;
        else
            count_points=count_points_new;
        count_points_new=0;
        for (int x = 0; x < gameSize; x++) {
            for (int y = 0; y < gameSize; y++) {
                field[x][y].used = false;
            }
        }
        shift();
    }
}

};

//Inheritance
int main(int argc, char *argv[]) {
//    cout << "Hello, World!" << std::endl;
    auto ptr = make_shared<int>();
//        return 0;
    string comand;
    game play;
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    while (comand != "0") {
//        cin >> comand;
        play.showFieldColor();
        cout << endl;
        play.check();
        play.showFieldColor();

        cin >> comand;
        cout << endl;
//        if (comand == "1") {
//            play.showFild();
//        }
        if (comand == "2") {
            int x, y;
            cin >> x >> y;
            play.boom(x, y);
        }
        if (comand == "3") {
            int x, y;
            cin >> x >> y;
            play.reColor(x, y);
        }
    }
}
