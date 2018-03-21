//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQPacketParameter-Protocol.h>

@class NSString;

@interface C2CRoamMsgRequestPacketParameter : NSObject <QQPacketParameter>
{
    long long _fuin;
    long long _lastMsgTime;
    long long _random;
    short _count;
    unsigned long long _beginMsgTime;
    unsigned int _authtype;
}

- (int)timeout;
- (_Bool)immediate;
- (id)serialize;
- (id)command;
- (void)setFuin:(long long)arg1 lastTime:(long long)arg2 random:(long long)arg3 cnt:(short)arg4 beginMsgTime:(unsigned long long)arg5 authtype:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

