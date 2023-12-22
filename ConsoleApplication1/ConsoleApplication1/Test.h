#pragma once
#include <iostream>
#include <vector>

class CTest
{
public:
	typedef struct _SUB_CPU_FILE_NO
	{
		std::vector<int> SubCpuNo;
		std::vector<int> GroupNo;
		std::vector<long> FileNo;
	} SUB_CPU_FILE_NO;

	SUB_CPU_FILE_NO* m_pSubCpuFileNo;
	SUB_CPU_FILE_NO m_SubCpuFileNo;

	void MakeSubCpuFileNoList();

	void InitSubCpuFileNo() { m_pSubCpuFileNo = nullptr; }

	SUB_CPU_FILE_NO* GetSubCpuFileNoList() { return m_pSubCpuFileNo; }

	void PrintDisplay();

private:
	void MakeSubCpuFileNo(int, int);
};

