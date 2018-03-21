//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AdConfigManager, AdMsgConfigItem, AdMsgExConfigItem, AdTextConfigItem, NSLock;

@interface AdConfigItemFactory : NSObject
{
    AdTextConfigItem *adTextConfigItem;
    AdMsgConfigItem *adMsgConfigItem;
    NSLock *_adMsgExConfigItemLock;
    AdMsgExConfigItem *adMsgExConfigItem;
    AdConfigManager *adConfigManager;
}

+ (id)GetInstance;
@property(retain, nonatomic) AdConfigManager *adConfigManager; // @synthesize adConfigManager;
- (void)dealloc;
- (id)init;
@property(readonly) AdMsgExConfigItem *adMsgExConfigItem;
@property(readonly) AdMsgConfigItem *adMsgConfigItem;
@property(readonly) AdTextConfigItem *adTextConfigItem;

@end

