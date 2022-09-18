#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Serin {
	class SERIN_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//core log macros
#define SR_CORE_TRACE(...) ::Serin::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SR_CORE_INFO(...) ::Serin::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SR_CORE_WARN(...) ::Serin::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SR_CORE_ERROR(...) ::Serin::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SR_CORE_FATAL(...) ::Serin::Log::GetCoreLogger()->fatal(__VA_ARGS__)
		
#define SR_TRACE(...) ::Serin::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SR_INFO(...) ::Serin::Log::GetClientLogger()->info(__VA_ARGS__)
#define SR_WARN(...) ::Serin::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SR_ERROR(...) ::Serin::Log::GetClientLogger()->error(__VA_ARGS__)
#define SR_FATAL(...) ::Serin::Log::GetClientLogger()->fatal(__VA_ARGS__)