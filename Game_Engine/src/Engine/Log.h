#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

//This is our "wrapper" for using spdlog which is a git submodule of this project. 
//If we ever want to change what logging system we're using for our engine, we can easily do that internally, without having to change - 
//code in our applications. This is where we are to define our macros

namespace Engine {
	class ENGINE_API Log {
	public: 
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define ENGINE_CORE_TRACE(...) ::Engine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ENGINE_CORE_INFO(...)  ::Engine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ENGINE_CORE_WARN(...)  ::Engine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ENGINE_CORE_ERROR(...) ::Engine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ENGINE_CORE_FATAL(...) ::Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define ENGINE_CLIENT_TRACE(...) ::Engine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ENGINE_CLIENT_INFO(...)  ::Engine::Log::GetClientLogger()->info(__VA_ARGS__)
#define ENGINE_CLIENT_WARN(...)  ::Engine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ENGINE_CLIENT_ERROR(...) ::Engine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ENGINE_CLIENT_FATAL(...) ::Engine::Log::GetClientLogger()->fatal(__VA_ARGS__)