//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString, NSURL, WXOMTAGCDAsyncReadPacket, WXOMTAGCDAsyncSocketPreBuffer, WXOMTAGCDAsyncWritePacket;
@protocol WXOMTAGCDAsyncSocketDelegate;

@interface WXOMTAGCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id <WXOMTAGCDAsyncSocketDelegate> delegate;
    struct dispatch_queue_s *delegateQueue;
    int socket4FD;
    int socket6FD;
    int socketUN;
    NSURL *socketUrl;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSData *connectInterfaceUN;
    struct dispatch_queue_s *socketQueue;
    struct dispatch_source_s *accept4Source;
    struct dispatch_source_s *accept6Source;
    struct dispatch_source_s *acceptUNSource;
    struct dispatch_source_s *connectTimer;
    struct dispatch_source_s *readSource;
    struct dispatch_source_s *writeSource;
    struct dispatch_source_s *readTimer;
    struct dispatch_source_s *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    WXOMTAGCDAsyncReadPacket *currentRead;
    WXOMTAGCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    WXOMTAGCDAsyncSocketPreBuffer *preBuffer;
    CDStruct_4210025a streamContext;
    struct __CFReadStream *readStream;
    struct __CFWriteStream *writeStream;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
    double alternateAddressDelay;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (_Bool)isIPv6Address:(id)arg1;
+ (_Bool)isIPv4Address:(id)arg1;
+ (unsigned short)portFromAddress:(id)arg1;
+ (id)hostFromAddress:(id)arg1;
+ (id)urlFromSockaddrUN:(const struct sockaddr_un *)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (void)unscheduleCFStreams:(id)arg1;
+ (void)scheduleCFStreams:(id)arg1;
+ (void)cfstreamThread;
+ (void)stopCFStreamThreadIfNeeded;
+ (void)startCFStreamThreadIfNeeded;
+ (void)ignore:(id)arg1;
+ (id)gaiError:(int)arg1;
- (void).cxx_destruct;
- (_Bool)enableBackgroundingOnSocketWithCaveat;
- (_Bool)enableBackgroundingOnSocket;
- (_Bool)enableBackgroundingOnSocketWithCaveat:(_Bool)arg1;
- (struct __CFWriteStream *)writeStream;
- (struct __CFReadStream *)readStream;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)unmarkSocketQueueTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)markSocketQueueTargetQueue:(struct dispatch_queue_s *)arg1;
@property _Bool autoDisconnectOnClosedReadStream;
- (_Bool)openStreams;
- (void)removeStreamsFromRunLoop;
- (_Bool)addStreamsToRunLoop;
- (_Bool)registerForStreamCallbacksIncludingReadWrite:(_Bool)arg1;
- (_Bool)createReadAndWriteStream;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)doWriteTimeout;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doWriteData;
- (void)maybeDequeueWrite;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doReadTimeout;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doReadEOF;
- (void)doReadData;
- (void)maybeDequeueRead;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)resumeWriteSource;
- (void)suspendWriteSource;
- (void)resumeReadSource;
- (void)suspendReadSource;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (id)getInterfaceAddressFromUrl:(id)arg1;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isIPv4;
@property(readonly) NSData *localAddress;
@property(readonly) NSData *connectedAddress;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
- (id)localHostFromSocket4:(int)arg1;
- (id)connectedUrlFromSocketUN:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
- (id)connectedHostFromSocket4:(int)arg1;
- (unsigned short)localPort6;
- (unsigned short)localPort4;
- (id)localHost6;
- (id)localHost4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPort4;
- (id)connectedHost6;
- (id)connectedHost4;
@property(readonly) unsigned short localPort;
@property(readonly) NSString *localHost;
@property(readonly) NSURL *connectedUrl;
@property(readonly) unsigned short connectedPort;
@property(readonly) NSString *connectedHost;
@property(readonly) _Bool isConnected;
@property(readonly) _Bool isDisconnected;
- (id)otherError:(id)arg1;
- (id)connectionClosedError;
- (id)writeTimeoutError;
- (id)readTimeoutError;
- (id)readMaxedOutError;
- (id)connectTimeoutError;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)badParamError:(id)arg1;
- (id)badConfigError:(id)arg1;
- (void)maybeClose;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)closeWithError:(id)arg1;
- (void)doConnectTimeout;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)didConnect:(int)arg1;
- (_Bool)connectWithAddressUN:(id)arg1 error:(id *)arg2;
- (_Bool)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (void)closeUnusedSocket:(int)arg1;
- (void)closeSocket:(int)arg1;
- (void)connectSocket:(int)arg1 address:(id)arg2 stateIndex:(int)arg3;
- (int)createSocket:(int)arg1 connectInterface:(id)arg2 errPtr:(id *)arg3;
- (_Bool)bindSocket:(int)arg1 toInterface:(id)arg2 error:(id *)arg3;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (_Bool)connectToUrl:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)preConnectWithUrl:(id)arg1 error:(id *)arg2;
- (_Bool)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (_Bool)doAccept:(int)arg1;
- (_Bool)acceptOnUrl:(id)arg1 error:(id *)arg2;
- (_Bool)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
@property(retain) id userData;
@property double alternateAddressDelay;
@property(getter=isIPv4PreferredOverIPv6) _Bool IPv4PreferredOverIPv6;
@property(getter=isIPv6Enabled) _Bool IPv6Enabled;
@property(getter=isIPv4Enabled) _Bool IPv4Enabled;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 synchronously:(_Bool)arg3;
- (void)getDelegate:(id *)arg1 delegateQueue:(struct dispatch_queue_s **)arg2;
- (void)synchronouslySetDelegateQueue:(struct dispatch_queue_s *)arg1;
@property struct dispatch_queue_s *delegateQueue;
- (void)setDelegateQueue:(struct dispatch_queue_s *)arg1 synchronously:(_Bool)arg2;
- (void)synchronouslySetDelegate:(id)arg1;
@property __weak id <WXOMTAGCDAsyncSocketDelegate> delegate;
- (void)setDelegate:(id)arg1 synchronously:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 socketQueue:(struct dispatch_queue_s *)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (id)initWithSocketQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

