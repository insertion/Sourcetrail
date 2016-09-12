#ifndef CXX_VS_HEADER_PATH_DETECTOR_H
#define CXX_VS_HEADER_PATH_DETECTOR_H

#include "utility/path_detector/PathDetector.h"

class CxxVsHeaderPathDetector: public PathDetector
{
public:
	CxxVsHeaderPathDetector(int version, bool isExpress);
	virtual ~CxxVsHeaderPathDetector();

	virtual std::vector<FilePath> getPaths() const;

private:
	FilePath getVsInstallPathUsingRegistry() const;
	FilePath getWindowsSdkPathUsingRegistry(const std::string& version) const;

	const int m_version;
	const bool m_isExpress;
};

#endif // CXX_VS_HEADER_PATH_DETECTOR_H