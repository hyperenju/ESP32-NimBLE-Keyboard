#include "BleConnectionStatus.h"

BleConnectionStatus::BleConnectionStatus(void) {
}

void BleConnectionStatus::onConnect(NimBLEServer* pServer)
{
  this->connected = true;
}

void BleConnectionStatus::onConnect(NimBLEServer* pServer, ble_gap_conn_desc* desc)
{
  pServer->updateConnParams(desc->conn_handle, 0x10, 0x20, 0, 600);
}

void BleConnectionStatus::onDisconnect(NimBLEServer* pServer)
{
  this->connected = false;
}
