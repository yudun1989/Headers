//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseItemInfo.h>

@class NSString;

@interface GxzbInfo : BaseItemInfo
{
    int _appId;
    int _feeType;
    NSString *_appName;
}

@property(nonatomic) int feeType; // @synthesize feeType=_feeType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (void)dealloc;
- (id)jumpUrl;
- (id)feeTagImage;

@end

