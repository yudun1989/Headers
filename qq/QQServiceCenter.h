//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQServiceCenter-Protocol.h>

@class NSString;

@interface QQServiceCenter : NSObject <IQQServiceCenter>
{
}

- (id)tmpMsgSrcDB;
- (id)recentMsgDB;
- (id)C2CMultiTableDB;
- (id)C2CDBService;
- (id)AppVersionService;
- (id)GroupDBServie;
- (id)PluginStatService;
- (id)IMService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

