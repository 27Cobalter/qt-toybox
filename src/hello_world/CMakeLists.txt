set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(Qt6_DIR "C:/Qt/6.9.0/msvc2022_64/lib/cmake/Qt6")
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)

add_executable(hello_world Main.cc MyWidget.cc)
target_link_libraries(hello_world Qt6::Core Qt6::Gui Qt6::Widgets)

install(TARGETS hello_world RUNTIME DESTINATION .)

qt_generate_deploy_app_script(
  TARGET
  hello_world
  OUTPUT_SCRIPT
  deploy_script
  NO_TRANSLATIONS
  DEPLOY_TOOL_OPTIONS
  "--exclude-plugins=qtuiotouchplugin,qsvgicon,qsvg,qgif,qjpeg" "--libdir=.")
install(SCRIPT ${deploy_script})
