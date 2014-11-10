//
//  CouchbaseLitePrefix.h
//  CouchbaseLite
//
//  Created by Jens Alfke on 12/7/11.
//  Copyright (c) 2011-2013 Couchbase, Inc. All rights reserved.
//

// Rename the GCDAsyncSocket classes to avoid collisions:
#define GCDAsyncSocket              _AGLibGCDAsyncSocket
#define GCDAsyncSocketPreBuffer     _AGLibGCDAsyncSocketPreBuffer
#define GCDAsyncReadPacket          _AGLibGCDAsyncReadPacket
#define GCDAsyncWritePacket         _AGLibGCDAsyncWritePacket
#define GCDAsyncSpecialPacket       _AGLibGCDAsyncSpecialPacket

#define GCDAsyncSocketErrorDomain   _AGLibGCDAsyncSocketErrorDomain
#define GCDAsyncSocketException     _AGLibGCDAsyncSocketException
#define GCDAsyncSocketQueueName     _AGLibGCDAsyncSocketQueueName
#define GCDAsyncSocketThreadName    _AGLibGCDAsyncSocketThreadName
#define GCDAsyncSocketSSLCipherSuites       _AGLibGCDAsyncSocketSSLCipherSuites
#define GCDAsyncSocketSSLProtocolVersionMax _AGLibGCDAsyncSocketSSLProtocolVersionMax
#define GCDAsyncSocketSSLProtocolVersionMin _AGLibGCDAsyncSocketSSLProtocolVersionMin
