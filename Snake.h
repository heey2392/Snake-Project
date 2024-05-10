// Snake.h

#pragma once

#include <deque>
#include <utility>

class Snake
{
public:
    Snake(std::pair<int, int> headPos);
    ~Snake();

    void SnakeLogic();
    void turnSnake();

public:
    enum DIR
    {
        UP, RIGHT, DOWN, LEFT
    };
    std::deque<std::pair<int, int>> tail;
    std::pair<int, int> head;
    DIR dir = LEFT; //��Ӹ� �ڵ� �̵� ����
};