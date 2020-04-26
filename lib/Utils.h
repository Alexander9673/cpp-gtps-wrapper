#ifndef UTILS_H
#define UTILS_H

class Utils
{
	private:
		static ENetPeer* peer;
		static ENetHost* server;

	public:
		Utils();
		Utils(ENetPeer* _peer, ENetHost* _server);

		unsigned char* Utils::getA(std::string fileName, int* pSizeOut, bool bAddBasePath, bool bAutoDecompress);
		std::ifstream::pos_type filesize(const char* filename);
		uint32_t HashString(unsigned char* str, int len);
		void setPeer(ENetPeer* peer);
		void setServer(ENetHost* server);
		void _sendData(int num, char* data, int len);
		ENetPeer* getPeer();
		ENetHost* getServer();
		int GetMessageTypeFromPacket(ENetPacket* packet);
		std::string GetTextPointerFromPacket(ENetPacket* packet);
};

#endif