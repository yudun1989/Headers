//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OpenApiMgrHelper : NSObject
{
}

+ (id)parseURLParams:(id)arg1;
+ (id)checkAppMsgThumbData:(id)arg1;
+ (id)getNetWorkErrorHtml;
+ (void)checkShowTabbar;
+ (void)hideChatViewKeyborad;
+ (id)makeURLMessageForShareTo3rdApp:(id)arg1 withTitle:(id)arg2;
+ (id)makeTextMessageForShareTo3rdApp:(id)arg1;
+ (id)makeLocationMessageForShareTo3rdAppWithLatitude:(double)arg1 andLongitude:(double)arg2 title:(id)arg3;
+ (id)makeMediaMessageForShareTo3rdApp:(id)arg1 withType:(int)arg2;
+ (void)makeFileInternalMessage:(id)arg1;
+ (_Bool)isNeedInit;
+ (_Bool)isLogin;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(_Bool)arg4 appScene:(unsigned int)arg5;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(_Bool)arg4 appScene:(unsigned int)arg5 redirectUrl:(id)arg6;
+ (id)FormMessage:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 redirectUrl:(id)arg4;
+ (id)FormAppMessage:(id)arg1 withAppMessage:(id)arg2 appID:(id)arg3;
+ (id)FormTextMsg:(id)arg1 withText:(id)arg2 appID:(id)arg3;

@end

