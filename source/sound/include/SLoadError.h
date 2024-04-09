#pragma once

#include <exception>

namespace audio {

	class SLoadError : public std::exception {
		bool badFile;
	public:
		#ifdef _MSC_VER
			SLoadError(const char* msg, bool wasBadFile = false) : std::exception(msg, 0), badFile(wasBadFile)
		#else
			SLoadError(const char* msg, bool wasBadFile = false) : std::exception(), badFile(wasBadFile)
		#endif
		{
		}

		inline bool wasBadFile() const { return badFile; }
	};

	class NotThisType {
	};

};
