//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSNetServiceDelegate-Protocol.h"

@class GCDAsyncSocket, NSDictionary, NSLock, NSMutableArray, NSNetService, NSString;
@protocol OS_dispatch_queue;

@interface HTTPServer : NSObject <NSNetServiceDelegate>
{
    GCDAsyncSocket *asyncSocket;
    NSObject<OS_dispatch_queue> *serverQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    void *IsOnServerQueueKey;
    void *IsOnConnectionQueueKey;
    NSString *documentRoot;
    Class connectionClass;
    NSString *interface;
    unsigned short port;
    NSNetService *netService;
    NSString *domain;
    NSString *type;
    NSString *name;
    NSString *publishedName;
    NSDictionary *txtRecordDictionary;
    NSMutableArray *connections;
    NSMutableArray *webSockets;
    NSLock *connectionsLock;
    NSLock *webSocketsLock;
    _Bool isRunning;
}

+ (void)performBonjourBlock:(CDUnknownBlockType)arg1;
+ (void)executeBonjourBlock:(CDUnknownBlockType)arg1;
+ (void)bonjourThread;
+ (void)startBonjourThreadIfNeeded;
- (void).cxx_destruct;
- (void)webSocketDidDie:(id)arg1;
- (void)connectionDidDie:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)republishBonjour;
- (void)unpublishBonjour;
- (void)publishBonjour;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (id)config;
- (unsigned long long)numberOfWebSocketConnections;
- (unsigned long long)numberOfHTTPConnections;
- (void)addWebSocket:(id)arg1;
- (_Bool)isRunning;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (_Bool)start:(id *)arg1;
- (void)setTXTRecordDictionary:(id)arg1;
- (id)TXTRecordDictionary;
- (void)setType:(id)arg1;
- (id)type;
- (void)setName:(id)arg1;
- (id)publishedName;
- (id)name;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)setPort:(unsigned short)arg1;
- (unsigned short)listeningPort;
- (unsigned short)port;
- (void)setInterface:(id)arg1;
- (id)interface;
- (void)setConnectionClass:(Class)arg1;
- (Class)connectionClass;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

