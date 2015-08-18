project(tldbinit)

# find_package(KDE4 REQUIRED)
# include_directories(${KDE4_INCLUDES})

set(tldbinit_SRCS
  main.cpp
  mainwindow.cpp
)

# kde4_add_executable(tldbinit ${tldbinit_SRCS})
add_executable(tldbinit ${tldbinit_SRCS})

find_library(pqxx_LIB
             NAMES pqxx
             PATHS /usr/lib64)
if (pqxx_LIB)
# http://stackoverflow.com/questions/5395578/cmake-target-link-libraries-not-linking-my-library
    target_link_libraries(tldbinit ${pqxx_LIB})
endif (pqxx_LIB)

# http://stackoverflow.com/questions/11783932/how-to-add-linker-or-compile-flag-in-cmake-file
add_definitions(-fexceptions)

# target_link_libraries(tldbinit ${KDE4_KDEUI_LIBS})

install(TARGETS tldbinit RUNTIME DESTINATION bin)
