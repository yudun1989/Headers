//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;
@protocol SetGroupAdminServiceImplCallback;

@interface SetGroupAdminServiceImpl : NSObject <IEngineDispatchDelegate>
{
    BOOL _op;
    unsigned int _uin;
    id <SetGroupAdminServiceImplCallback> _callback;
}

+ (id)shareInstance;
@property(nonatomic) id <SetGroupAdminServiceImplCallback> callback; // @synthesize callback=_callback;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)parseSetGroupAdminResp:(char *)arg1 dataLen:(int)arg2 seq:(int)arg3;
- (int)requestSetGroupAdmin:(unsigned int)arg1 uin:(unsigned int)arg2 op:(BOOL)arg3;
- (int)requestSetGroupAdmin:(unsigned int)arg1 uin:(long long)arg2 opInt:(int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

