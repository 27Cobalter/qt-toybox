#pragma once

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class MyWidget : public QWidget {
  Q_OBJECT
public:
  MyWidget(QWidget* parent = nullptr);
  ~MyWidget();

private slots:
  void onButtonClicked();

private:
  QPushButton* button;
  QVBoxLayout* layout;
};
