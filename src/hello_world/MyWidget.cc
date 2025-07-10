#include "MyWidget.h"

MyWidget::MyWidget(QWidget* parent) : QWidget(parent) {
  button = new QPushButton("Click me", this);
  layout = new QVBoxLayout(this);
  layout->addWidget(button);

  connect(button, &QPushButton::clicked, this, &MyWidget::onButtonClicked);
}

MyWidget::~MyWidget() {}

void MyWidget::onButtonClicked() {
  button->setText("Button clicked!");
}
