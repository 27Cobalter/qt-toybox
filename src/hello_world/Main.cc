#include <QApplication>

#include "MyWidget.h"

auto main(int32_t argc, char** argv) -> int32_t {
  QApplication app(argc, argv);
  MyWidget widget;
  widget.show();
  return app.exec();
}
