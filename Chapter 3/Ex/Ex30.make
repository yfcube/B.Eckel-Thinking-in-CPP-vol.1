#: EX03:Ex30.cpp
# ��������  make-����, ������� �� ������ ����������� ��������� YourPets1.cpp
# � YourPets2.cpp (��� ������ �����������), �� � ��������� ��� ���������
# � ��������� ����������� ���� �� ���������. ����������� ������� ���������
CPP = g++
.SUFFIXES: .exe .cpp
.cpp.exe:
	$(CPP) $<
	a.exe