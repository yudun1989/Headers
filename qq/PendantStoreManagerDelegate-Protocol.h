//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary;

@protocol PendantStoreManagerDelegate <NSObject>
- (void)didJsonLoaded;
- (void)didFinishCannelPendant:(long long)arg1 info:(NSDictionary *)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishSavePendant:(long long)arg1 info:(NSDictionary *)arg2 isSuccess:(_Bool)arg3;
@end

