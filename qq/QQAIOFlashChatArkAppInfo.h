//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQAIOFlashChatArkAppInfo : QQModel
{
    int _resID;
    unsigned int _feeType;
    NSString *_cfg;
    NSString *_name;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_mainView;
    NSString *_version;
    NSString *_bgColor;
}

@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int feeType; // @synthesize feeType=_feeType;
@property(copy, nonatomic) NSString *cfg; // @synthesize cfg=_cfg;
@property(nonatomic) int resID; // @synthesize resID=_resID;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)getMsgContentFromFlashChatAppInfo;

@end

