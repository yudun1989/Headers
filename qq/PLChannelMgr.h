//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PLChannelMgr : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_holders;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *holders; // @synthesize holders=_holders;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)internalSendData:(id)arg1;
- (_Bool)sendData:(id)arg1 Command:(long long)arg2 withSubCmd:(long long)arg3 seq:(int *)arg4 delegate:(id)arg5 param:(id)arg6;
- (_Bool)sendData:(id)arg1 Command:(long long)arg2 withSubCmd:(long long)arg3 seq:(int *)arg4 delegate:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

