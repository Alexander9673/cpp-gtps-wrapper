#ifndef PACKETS_HPP
#define PACKETS_HPP

namespace Packets
{
	void sendStringPacket(const Napi::CallbackInfo& info);
	void sendRawPacket(const Napi::CallbackInfo& info);
	void sendQuit(const Napi::CallbackInfo& info);
	void sendPacket(const Napi::CallbackInfo& info);
}

#endif