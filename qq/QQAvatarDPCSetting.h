//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CrashConfigMgr.h>

@interface QQAvatarDPCSetting : CrashConfigMgr
{
    double _upTime;
}

+ (id)shareInstance;
@property(readonly) double upTime; // @synthesize upTime=_upTime;
- (void)getConfigInfo;
- (void)setDefault;

@end
