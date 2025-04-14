#include <QApplication>
#include <QPushButton>

#include "MyWidget.h"

auto main(int32_t argc, char** argv) -> int32_t
{
  QApplication app(argc, argv);
  MyWidget widget;
  new QPushButton("Hello World", &widget);
  widget.show();
  return app.exec();
}
