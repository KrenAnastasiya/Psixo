rm ./*tar*
rm ./*dsc*
rm ./*deb*

cd ppsixo-1.0.0
rm Makefile
$HOME/Qt/5.6/gcc_64/bin/qmake ppsixo.pro

cd ..
tar czfv ppsixo-1.0.0.tar.gz ppsixo-1.0.0/

cd ppsixo-1.0.0
dh_make -e kren.nastyushencka@yandex.ru -f ../ppsixo-1.0.0.tar.gz -s
dpkg-buildpackage -us -uc