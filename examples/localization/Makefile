LIBS=-lcppcms -lbooster

all: clean hello locale/he/LC_MESSAGES/hello.mo

hello: hello.cpp view.cpp content.h
	$(CXX) $(CXXFLAGS) -std=c++11 -Wall hello.cpp view.cpp -o hello $(LIBS)

view.cpp: view.tmpl content.h
	cppcms_tmpl_cc -d hello view.tmpl -o view.cpp

locale/he/LC_MESSAGES/hello.mo: locale/he/LC_MESSAGES/hello.po
	msgfmt locale/he/LC_MESSAGES/hello.po -o locale/he/LC_MESSAGES/hello.mo

clean:
	rm -fr hello *.exe *.so view.cpp locale/he/LC_MESSAGES/hello.mo cppcms_rundir
