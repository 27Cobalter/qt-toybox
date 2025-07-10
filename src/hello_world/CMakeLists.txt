add_executable(hello_world Main.cc MyWidget.cc)
set_target_properties(hello_world PROPERTIES WIN32_EXECUTABLE TRUE)
target_link_libraries(hello_world Qt6::Core Qt6::Gui Qt6::Widgets)

install(TARGETS hello_world RUNTIME DESTINATION .)

qt_import_plugins(hello_world EXCLUDE_BY_TYPE imageformats)
qt_generate_deploy_script(
  TARGET
  hello_world
  OUTPUT_SCRIPT
  deploy_script
  CONTENT
  "
qt_deploy_runtime_dependencies(
  EXECUTABLE \"$<TARGET_FILE_NAME:hello_world>\"
  BIN_DIR \".\"
  NO_TRANSLATIONS
  DEPLOY_TOOL_OPTIONS
  \"--exclude-plugins=qtuiotouchplugin,qsvgicon,qsvg,qgif,qjpeg\"
)
    ")
# qt_generate_deploy_app_script( TARGET hello_world OUTPUT_SCRIPT deploy_script
# NO_TRANSLATIONS DEPLOY_TOOL_OPTIONS
# "--exclude-plugins=qtuiotouchplugin,qsvgicon,qsvg,qgif,qjpeg" "--libdir=.")
install(SCRIPT ${deploy_script})
