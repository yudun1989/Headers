//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface GroupAioNotificationModel : QQModel
{
    int _type;
    unsigned int _expireTime;
    int _hideMode;
    NSString *_notificationId;
    NSString *_title;
    NSString *_summary;
    NSString *_jumpUrl;
    NSString *_iconUrl;
    unsigned long long _appid;
}

@property(nonatomic) int hideMode; // @synthesize hideMode=_hideMode;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

