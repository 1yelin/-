#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QTimer>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);

    //参数代表  传入的金币路径 还是银币路径
    MyCoin(QString btnImg);

    //金币的属性
    int posX; //x坐标位置
    int posY; //y坐标位置
    bool flag; //正反标志

    //改版标志的方法
    void changeFlag();
    QTimer * timer1;  //正面翻反面的定时器
    QTimer * timer2;  //反面翻正面的定时器
    int min = 1;
    int max = 8;

    //执行动画  标志
    bool isAnimation = false;

    //重写 按下 和 释放
    void mousePressEvent(QMouseEvent *e);

    //是否胜利的标志
    bool isWin = false;

signals:
};

#endif // MYCOIN_H
