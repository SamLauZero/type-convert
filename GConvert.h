#ifndef YZBB_GCONVERT_H
#define YZBB_GCONVERT_H

#include <QString>
#include "GCUtils.h"


//******************************************************************
template <typename T> class GSuitable {};

template <>
class GSuitable<bool>
{
public:
	static inline bool toBool(const bool d){ return d; }
	static inline char toChar(const bool d){ return d ? '1' : '0'; }

	static inline short toShort(const bool d){ return d;}
	static inline unsigned short toUShort(const bool d){ return d; }
	static inline int toInt(const bool d){ return d; }
	static inline unsigned int toUInt(const bool d){ return d; }
	static inline long toLong(const bool d){ return d; }
	static inline unsigned long toULong(const bool d){ return d; }
	static inline __int64 toInt64(const bool d){ return d; }
	static inline unsigned __int64 toUInt64(const bool d){ return d; }

	static inline float toFloat(const bool d){ return d; }
	static inline double toDouble(const bool d){ return d; }

	static inline std::string toString(const bool d){ return d ? "true" : "false"; }
	static inline std::wstring toWString(const bool d){ return d ? L"true" : L"false"; }
	static inline QString toQString(const bool d){ return d ? "true" : "false"; }
};

template <>
class GSuitable<char>
{
public:
	static inline bool toBool(const char d){ return d; }
	static inline char toChar(const char d){ return d; }

	static inline short toShort(const char d){ return d;}
	static inline unsigned short toUShort(const char d){ return d; }
	static inline int toInt(const char d){ return d; }
	static inline unsigned int toUInt(const char d){ return d; }
	static inline long toLong(const char d){ return d; }
	static inline unsigned long toULong(const char d){ return d; }
	static inline __int64 toInt64(const char d){ return d; }
	static inline unsigned __int64 toUInt64(const char d){ return d; }

	static inline float toFloat(const char d){ return d; }
	static inline double toDouble(const char d){ return d; }

	static inline std::string toString(const char d){ return std::string((char*)&d, 1); }
	static inline std::wstring toWString(const char d){ wchar_t _t; MultiByteToWideChar(CP_ACP, 0, &d, 1, &_t, 1); return std::wstring((wchar_t*)&_t, 1);  }
	static inline QString toQString(const char d){ return (QChar)d; }
};


template <>
class GSuitable<short>
{
public:
	static inline bool toBool(const short d){ return d; }
	static inline char toChar(const short d){ return d; }

	static inline short toShort(const short d){ return d;}
	static inline unsigned short toUShort(const short d){ return d; }
	static inline int toInt(const short d){ return d; }
	static inline unsigned int toUInt(const short d){ return d; }
	static inline long toLong(const short d){ return d; }
	static inline unsigned long toULong(const short d){ return d; }
	static inline __int64 toInt64(const short d){ return d; }
	static inline unsigned __int64 toUInt64(const short d){ return d; }

	static inline float toFloat(const short d){ return d; }
	static inline double toDouble(const short d){ return d; }

	static inline std::string toString(const short d){ char _t[16] = {0}; _snprintf_s(_t, 16, "%hd", d); return _t; }
	static inline std::wstring toWString(const short d){ wchar_t _t[16] = {0}; _snwprintf_s(_t, 16, L"%hd", d); return _t; }
	static inline QString toQString(const short d){ return QString::number(d); }
};

template <>
class GSuitable<unsigned short>
{
public:
	static inline bool toBool(const unsigned short d){ return d; }
	static inline char toChar(const unsigned short d){ return d; }

	static inline short toShort(const unsigned short d){ return d;}
	static inline unsigned short toUShort(const unsigned short d){ return d; }
	static inline int toInt(const unsigned short d){ return d; }
	static inline unsigned int toUInt(const unsigned short d){ return d; }
	static inline long toLong(const unsigned short d){ return d; }
	static inline unsigned long toULong(const unsigned short d){ return d; }
	static inline __int64 toInt64(const unsigned short d){ return d; }
	static inline unsigned __int64 toUInt64(const unsigned short d){ return d; }

	static inline float toFloat(const float d){ return d; }
	static inline double toDouble(const float d){ return d; }

	static inline std::string toString(const unsigned short d){ char _t[16] = {0}; _snprintf_s(_t, 16, "%hu", d); return _t; }
	static inline std::wstring toWString(const unsigned short d){ wchar_t _t[16] = {0}; _snwprintf_s(_t, 16, L"%hu", d); return _t; }
	static inline QString toQString(const unsigned short d){ return QString::number(d); }
};

template <>
class GSuitable<int>
{
public:
	static inline bool toBool(const int d){ return d; }
	static inline char toChar(const int d){ return d; }

	static inline short toShort(const int d){ return d;}
	static inline unsigned short toUShort(const int d){ return d; }
	static inline int toInt(const int d){ return d; }
	static inline unsigned int toUInt(const int d){ return d; }
	static inline long toLong(const int d){ return d; }
	static inline unsigned long toULong(const int d){ return d; }
	static inline __int64 toInt64(const int d){ return d; }
	static inline unsigned __int64 toUInt64(const int d){ return d; }

	static inline float toFloat(const int d){ return d; }
	static inline double toDouble(const int d){ return d; }

	static inline std::string toString(const int d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%d", d); return _t; }
	static inline std::wstring toWString(const int d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%d", d); return _t; }
	static inline QString toQString(const int d){ return QString::number(d); }
};

template <>
class GSuitable<unsigned int>
{
public:
	static inline bool toBool(const unsigned int d){ return d; }
	static inline char toChar(const unsigned int d){ return d; }

	static inline short toShort(const unsigned int d){ return d;}
	static inline unsigned short toUShort(const unsigned int d){ return d; }
	static inline int toInt(const unsigned int d){ return d; }
	static inline unsigned int toUInt(const unsigned int d){ return d; }
	static inline long toLong(const unsigned int d){ return d; }
	static inline unsigned long toULong(const unsigned int d){ return d; }
	static inline __int64 toInt64(const unsigned int d){ return d; }
	static inline unsigned __int64 toUInt64(const unsigned int d){ return d; }

	static inline float toFloat(const unsigned int d){ return d; }
	static inline double toDouble(const unsigned int d){ return d; }

	static inline std::string toString(const unsigned int d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%u", d); return _t; }
	static inline std::wstring toWString(const unsigned int d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%u", d); return _t; }
	static inline QString toQString(const unsigned int d){ return QString::number(d); }
};

template <>
class GSuitable<long>
{
public:
	static inline bool toBool(const long d){ return d; }
	static inline char toChar(const long d){ return d; }

	static inline short toShort(const long d){ return d;}
	static inline unsigned short toUShort(const long d){ return d; }
	static inline int toInt(const long d){ return d; }
	static inline unsigned int toUInt(const long d){ return d; }
	static inline long toLong(const long d){ return d; }
	static inline unsigned long toULong(const long d){ return d; }
	static inline __int64 toInt64(const long d){ return d; }
	static inline unsigned __int64 toUInt64(const long d){ return d; }

	static inline float toFloat(const long d){ return d; }
	static inline double toDouble(const long d){ return d; }

	static inline std::string toString(const long d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%d", d); return _t; }
	static inline std::wstring toWString(const long d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%d", d); return _t; }
	static inline QString toQString(const long d){ return QString::number(d); }
};

template <>
class GSuitable<unsigned long>
{
public:
	static inline bool toBool(const unsigned long d){ return d; }
	static inline char toChar(const unsigned long d){ return d; }

	static inline short toShort(const unsigned long d){ return d;}
	static inline unsigned short toUShort(const unsigned long d){ return d; }
	static inline int toInt(const unsigned long d){ return d; }
	static inline unsigned int toUInt(const unsigned long d){ return d; }
	static inline long toLong(const unsigned long d){ return d; }
	static inline unsigned long toULong(const unsigned long d){ return d; }
	static inline __int64 toInt64(const unsigned long d){ return d; }
	static inline unsigned __int64 toUInt64(const unsigned long d){ return d; }

	static inline float toFloat(const unsigned long d){ return d; }
	static inline double toDouble(const unsigned long d){ return d; }

	static inline std::string toString(const unsigned long d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%u", d); return _t; }
	static inline std::wstring toWString(const unsigned long d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%u", d); return _t; }
	static inline QString toQString(const unsigned long d){ return QString::number(d); }
};

template <>
class GSuitable<__int64>
{
public:
	static inline bool toBool(const float d){ return d; }
	static inline char toChar(const float d){ return d; }

	static inline short toShort(const float d){ return d;}
	static inline unsigned short toUShort(const float d){ return d; }
	static inline int toInt(const float d){ return d; }
	static inline unsigned int toUInt(const float d){ return d; }
	static inline long toLong(const float d){ return d; }
	static inline unsigned long toULong(const float d){ return d; }
	static inline __int64 toInt64(const float d){ return d; }
	static inline unsigned __int64 toUInt64(const float d){ return d; }

	static inline float toFloat(const float d){ return d; }
	static inline double toDouble(const float d){ return d; }

	static inline std::string toString(const __int64 d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%I64d", d); return _t; }
	static inline std::wstring toWString(const __int64 d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%I64d", d); return _t; }
	static inline QString toQString(const __int64 d){ return QString::number(d); }
};

template <>
class GSuitable<unsigned __int64>
{
public:
	static inline bool toBool(const unsigned __int64 d){ return d; }
	static inline char toChar(const unsigned __int64 d){ return d; }

	static inline short toShort(const unsigned __int64 d){ return d;}
	static inline unsigned short toUShort(const unsigned __int64 d){ return d; }
	static inline int toInt(const unsigned __int64 d){ return d; }
	static inline unsigned int toUInt(const unsigned __int64 d){ return d; }
	static inline long toLong(const unsigned __int64 d){ return d; }
	static inline unsigned long toULong(const unsigned __int64 d){ return d; }
	static inline __int64 toInt64(const unsigned __int64 d){ return d; }
	static inline unsigned __int64 toUInt64(const unsigned __int64 d){ return d; }

	static inline float toFloat(const unsigned __int64 d){ return d; }
	static inline double toDouble(const unsigned __int64 d){ return d; }

	static inline std::string toString(const unsigned __int64 d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%I64u", d); return _t; }
	static inline std::wstring toWString(const unsigned __int64 d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%I64u", d); return _t; }
	static inline QString toQString(const unsigned __int64 d){ return QString::number(d); }
};

template <>
class GSuitable<float>
{
public:
	static inline bool toBool(const float d){ return d; }
	static inline char toChar(const float d){ return d; }

	static inline short toShort(const float d){ return d;}
	static inline unsigned short toUShort(const float d){ return d; }
	static inline int toInt(const float d){ return d; }
	static inline unsigned int toUInt(const float d){ return d; }
	static inline long toLong(const float d){ return d; }
	static inline unsigned long toULong(const float d){ return d; }
	static inline __int64 toInt64(const float d){ return d; }
	static inline unsigned __int64 toUInt64(const float d){ return d; }

	static inline float toFloat(const float d){ return d; }
	static inline double toDouble(const float d){ return d; }

	static inline std::string toString(const float d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%f", d); return _t; }
	static inline std::wstring toWString(const float d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%f", d); return _t; }
	static inline QString toQString(const float d){ return QString::number(d); }
};

template <>
class GSuitable<double>
{
public:
	static inline bool toBool(const double d){ return d; }
	static inline char toChar(const double d){ return d; }

	static inline short toShort(const double d){ return d;}
	static inline unsigned short toUShort(const double d){ return d; }
	static inline int toInt(const double d){ return d; }
	static inline unsigned int toUInt(const double d){ return d; }
	static inline long toLong(const double d){ return d; }
	static inline unsigned long toULong(const double d){ return d; }
	static inline __int64 toInt64(const double d){ return d; }
	static inline unsigned __int64 toUInt64(const double d){ return d; }

	static inline float toFloat(const double d){ return d; }
	static inline double toDouble(const double d){ return d; }

	static inline std::string toString(const double d){ char _t[32] = {0}; _snprintf_s(_t, 32, "%lf", d); return _t; }
	static inline std::wstring toWString(const double d){ wchar_t _t[32] = {0}; _snwprintf_s(_t, 32, L"%lf", d); return _t; }
	static inline QString toQString(const double d){ return QString::number(d); }
};

template <>
class GSuitable<const char*>
{
public:
	static inline bool toBool(const char* d){ return d; }

	static inline std::string toString(const char* d){ return d; }
	static inline std::wstring toWString(const char* d){ return GCUtils::s2ws( d ); }
	static inline QString toQString(const char* d){ return d; }
};

template <>
class GSuitable<const wchar_t*>
{
public:
	static inline bool toBool(const wchar_t* d){ return d; }

	static inline std::string toString(const wchar_t* d){ return GCUtils::ws2s( d ); }
	static inline std::wstring toWString(const wchar_t* d){ return d; }
	static inline QString toQString(const wchar_t* d){ return QString::fromWCharArray(d); }
};

template <>
class GSuitable<std::string>
{
public:
	static inline short toShort(const std::string& d){ return strtol(d.c_str(), 0, 10);}
	static inline unsigned short toUShort(const std::string& d){ return strtoul(d.c_str(), 0, 10); }
	static inline int toInt(const std::string& d){ return strtol(d.c_str(), 0, 10); }
	static inline unsigned int toUInt(const std::string& d){ return strtoul(d.c_str(), 0, 10); }
	static inline long toLong(const std::string& d){ return strtol(d.c_str(), 0, 10); }
	static inline unsigned long toULong(const std::string& d){ return strtoul(d.c_str(), 0, 10); }
	static inline __int64 toInt64(const std::string& d){ return _strtoi64(d.c_str(), 0, 10); }
	static inline unsigned __int64 toUInt64(const std::string& d){ return _strtoui64(d.c_str(), 0, 10); }

	static inline float toFloat(const std::string& d){ return strtod(d.c_str(), 0); }
	static inline double toDouble(const std::string& d){ return strtod(d.c_str(), 0); }

	static inline std::string toString(const std::string& d){ return d; }
	static inline std::wstring toWString(const std::string& d){ return GCUtils::s2ws(d); }
	static inline QString toQString(const std::string& d){ return QString::fromStdString(d); }
};

template <>
class GSuitable<std::wstring>
{
public:
	static inline short toShort(const std::wstring& d){ return wcstol(d.c_str(), 0, 10);}
	static inline unsigned short toUShort(const std::wstring& d){ return wcstoul(d.c_str(), 0, 10); }
	static inline int toInt(const std::wstring& d){ return wcstol(d.c_str(), 0, 10); }
	static inline unsigned int toUInt(const std::wstring& d){ return wcstoul(d.c_str(), 0, 10); }
	static inline long toLong(const std::wstring& d){ return wcstol(d.c_str(), 0, 10); }
	static inline unsigned long toULong(const std::wstring& d){ return wcstoul(d.c_str(), 0, 10); }
	static inline __int64 toInt64(const std::wstring& d){ return _wcstoi64(d.c_str(), 0, 10); }
	static inline unsigned __int64 toUInt64(const std::wstring& d){ return _wcstoui64(d.c_str(), 0, 10); }

	static inline float toFloat(const std::wstring& d){ return wcstod(d.c_str(), 0); }
	static inline double toDouble(const std::wstring& d){ return wcstod(d.c_str(), 0); }

	static inline std::string toString(const std::wstring& d){ return GCUtils::ws2s(d); }
	static inline std::wstring toWString(const std::wstring& d){ return d; }
	static inline QString toQString(const std::wstring& d){ return QString::fromStdWString(d); }
};

template <>
class GSuitable<QString>
{
public:
	static inline short toShort(const QString& d){ return d.toShort();}
	static inline unsigned short toUShort(const QString& d){ return d.toUShort(); }
	static inline int toInt(const QString& d){ return d.toInt(); }
	static inline unsigned int toUInt(const QString& d){ return d.toUInt(); }
	static inline long toLong(const QString& d){ return d.toLong(); }
	static inline unsigned long toULong(const QString& d){ return d.toULong(); }
	static inline __int64 toInt64(const QString& d){ return d.toLongLong(); }
	static inline unsigned __int64 toUInt64(const QString& d){ return d.toULongLong(); }

	static inline float toFloat(const QString& d){ return d.toFloat(); }
	static inline double toDouble(const QString& d){ return d.toDouble(); }

	static inline std::string toString(const QString& d){ return d.toStdString(); }
	static inline std::wstring toWString(const QString& d){ return d.toStdWString(); }
	static inline QString toQString(const QString& d){ return d; }
};


//******************************************************************
template <typename T>
class GConv
{
public:
	GConv(const T &d);

	//Destination Type: bool, char
	operator bool() const{ return GSuitable<T>::toBool(_data); }
	operator char() const{ return GSuitable<T>::toChar(_data); }

	//Destination Type: short, unsigned short, int, unsigned int
	//long, unsigned long, __int64, unsigned __int64
	operator short() const{ return GSuitable<T>::toShort(_data); }
	operator unsigned short() const{ return GSuitable<T>::toUShort(_data); }
	operator int() const{ return GSuitable<T>::toInt(_data); }
	operator unsigned int() const{ return GSuitable<T>::toUInt(_data); }
	operator long() const{ return GSuitable<T>::toLong(_data); }
	operator unsigned long() const{ return GSuitable<T>::toULong(_data); }
	operator __int64() const{ return GSuitable<T>::toInt64(_data); }
	operator unsigned __int64() const{ return GSuitable<T>::toUInt64(_data); }

	//Destination Type: float, double
	operator float() const{ return GSuitable<T>::toFloat(_data); }
	operator double() const{ return GSuitable<T>::toDouble(_data); }

	//Destination Type: std::string, std::wstring, QString
	operator std::string() const{ return GSuitable<T>::toString(_data); }
	operator std::wstring() const{ return GSuitable<T>::toWString(_data); }
	operator QString() const{ return GSuitable<T>::toQString(_data); }

private:
	const T _data;
};

template <typename T>
GConv<T>::GConv(const T &d):
_data(d){

}

template <typename T>
class GConvEx
{
public:
	GConvEx(const T &d);

	//Destination Type: bool, char
	operator bool() const{ return GSuitable<T>::toBool(_data); }
	operator char() const{ return GSuitable<T>::toChar(_data); }

	//Destination Type: short, unsigned short, int, unsigned int
	//long, unsigned long, __int64, unsigned __int64
	operator short() const{ return GSuitable<T>::toShort(_data); }
	operator unsigned short() const{ return GSuitable<T>::toUShort(_data); }
	operator int() const{ return GSuitable<T>::toInt(_data); }
	operator unsigned int() const{ return GSuitable<T>::toUInt(_data); }
	operator long() const{ return GSuitable<T>::toLong(_data); }
	operator unsigned long() const{ return GSuitable<T>::toULong(_data); }
	operator __int64() const{ return GSuitable<T>::toInt64(_data); }
	operator unsigned __int64() const{ return GSuitable<T>::toUInt64(_data); }

	//Destination Type: float, double
	operator float() const{ return GSuitable<T>::toFloat(_data); }
	operator double() const{ return GSuitable<T>::toDouble(_data); }

	//Destination Type: std::string, std::wstring, QString
	operator std::string() const{ return GSuitable<T>::toString(_data); }
	operator std::wstring() const{ return GSuitable<T>::toWString(_data); }
	operator QString() const{ return GSuitable<T>::toQString(_data); }

private:
	const T& _data;
};

template <typename T>
GConvEx<T>::GConvEx(const T &d):
_data(d){
}


//******************************************************************
//Source Type: bool, char
GConv<bool> _GCONV(const bool _d){ return GConv<bool>(_d); }
GConv<char> _GCONV(const char _d){ return GConv<char>(_d); }

//Source Type: short, unsigned short, int, unsigned int
//long, unsigned long, __int64, unsigned __int64
GConv<short> _GCONV(const short _d){ return GConv<short>(_d); }
GConv<unsigned short> _GCONV(const unsigned short _d){ return GConv<unsigned short>(_d); }
GConv<int> _GCONV(const int _d){ return GConv<int>(_d); }
GConv<unsigned int> _GCONV(const unsigned int _d){ return GConv<unsigned int>(_d); }
GConv<long> _GCONV(const long _d){ return GConv<long>(_d); }
GConv<unsigned long> _GCONV(const unsigned long _d){ return GConv<unsigned long>(_d); }
GConv<__int64> _GCONV(const __int64 _d){ return GConv<__int64>(_d); }
GConv<unsigned __int64> _GCONV(const unsigned __int64 _d){ return GConv<unsigned __int64>(_d); }

//Source Type: float, double
GConv<float> _GCONV(const float _d){ return GConv<float>(_d); }
GConv<double> _GCONV(const double _d){ return GConv<double>(_d); }

//Source Type: char*, wchar_t*
GConv<const char*> _GCONV(const char* _d){ return GConv<const char*>(_d); }
GConv<const wchar_t*> _GCONV(const wchar_t* _d){ return GConv<const wchar_t*>(_d); }

//Source Type: std::string, std::wstring, QString
GConvEx<std::string> _GCONV(const std::string &_d){ return GConvEx<std::string>(_d); }
GConvEx<std::wstring> _GCONV(const std::wstring &_d){ return GConvEx<std::wstring>(_d); }
GConvEx<QString> _GCONV(const QString &_d){ return GConvEx<QString>(_d); }


#endif