#ifndef YZBB_GCUTILS_H
#define YZBB_GCUTILS_H

#include <string>
#include <Windows.h>


//******************************************************************
namespace GCUtils{
	std::wstring s2ws(const std::string& s){
		size_t slen = s.length() + 1;
		size_t wLen = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slen, 0, 0); 
		wchar_t* buf = new wchar_t[wLen];
		MultiByteToWideChar(CP_ACP, 0, s.c_str(), slen, buf, wLen);
		std::wstring wString(buf);
		delete[] buf;
		return wString;
	}

	std::wstring s2ws(const char* s){
		size_t slen = strlen(s) + 1;
		size_t wLen = MultiByteToWideChar(CP_ACP, 0, s, slen, 0, 0); 
		wchar_t* buf = new wchar_t[wLen];
		MultiByteToWideChar(CP_ACP, 0, s, slen, buf, wLen);
		std::wstring wString(buf);
		delete[] buf;
		return wString;
	}

	std::string ws2s(const std::wstring& ws){
		size_t wlen = ws.length() + 1;
		size_t sLen = WideCharToMultiByte(CP_ACP, 0, ws.c_str(), wlen, 0, 0, 0, 0); 
		char* buf = new char[sLen];
		WideCharToMultiByte(CP_ACP, 0, ws.c_str(), wlen, buf, sLen, 0, 0); 
		std::string sString(buf);
		delete[] buf;
		return sString;
	}

	std::string ws2s(const wchar_t* ws){
		size_t wlen = wcslen(ws) + 1;
		size_t sLen = WideCharToMultiByte(CP_ACP, 0, ws, wlen, 0, 0, 0, 0); 
		char* buf = new char[sLen];
		WideCharToMultiByte(CP_ACP, 0, ws, wlen, buf, sLen, 0, 0); 
		std::string sString(buf);
		delete[] buf;
		return sString;
	}
}

#endif