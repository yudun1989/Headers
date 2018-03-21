//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCCoreUtility : NSObject
{
}

+ (id)getTransportStateDisplayName:(id)arg1;
+ (id)stringFromIdentify:(unsigned long long)arg1;
+ (id)officialHeaderAreaPicUrl:(id)arg1;
+ (id)groupConfigExitButtonTips:(id)arg1;
+ (id)groupConfigQrCodeClickUrl:(id)arg1;
+ (id)groupHeaderAreaPicUrl:(id)arg1;
+ (_Bool)isDisplayedInScreenForView:(id)arg1;
+ (id)base64ToString:(id)arg1 encoding:(unsigned long long)arg2;
+ (void)innerHandleCreatConversation:(id)arg1 userName:(id)arg2 bizID:(id)arg3 defaultInputText:(id)arg4 result:(id)arg5 ext:(id)arg6 error:(id)arg7;
+ (void)startChat:(id)arg1 userName:(id)arg2 bizID:(id)arg3 defaultEdit:(id)arg4 ext:(id)arg5;
+ (void)startChat:(id)arg1 userName:(id)arg2 bizID:(id)arg3 itemId:(id)arg4 url:(id)arg5 content:(id)arg6 ext:(id)arg7;
+ (_Bool)needExcNextStepWithMCDetailItem:(id)arg1;
+ (id)spmForChatModuleSPM:(id)arg1 clickEvent:(id)arg2;
+ (id)priceFormatter:(double)arg1 bigFontSize:(double)arg2 smallFontSize:(double)arg3;
+ (id)noticeDescriptionFromDate:(id)arg1;
+ (struct CGSize)getStringSize:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (void)gradientViewForView:(id)arg1 leftColor:(id)arg2 rightColor:(id)arg3;
+ (void)clearGradientViewForView:(id)arg1;
+ (id)resizableImageWithImagePath:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;
+ (id)getFirstDayOfWeek:(id)arg1;
+ (_Bool)isDateInCurrentWeek:(id)arg1;
+ (id)getWeekDayStringByWeekDay:(long long)arg1;
+ (id)getDateFormatString:(id)arg1;
+ (id)recentListMergeCellObjectFromSessionAdapter:(id)arg1;
+ (id)buildLittleHornDisplayContent:(id)arg1 contentColor:(id)arg2;
+ (id)littleHornExploseDict:(id)arg1;
+ (id)buildSessionContent:(id)arg1;
+ (id)recentListCellObjectFromSessionAdapter:(id)arg1;
+ (_Bool)isLifeCircleHelperSession:(id)arg1;
+ (void)sortSessionList:(id)arg1;
+ (int)getUserUType:(id)arg1 bizSubId:(long long)arg2;
+ (id)getMainBundleFile:(id)arg1 ofType:(id)arg2;
+ (id)dayNewDescriptionFromDate:(id)arg1;
+ (id)dayDescriptionFromDate:(id)arg1;
+ (id)dateFromTimeString:(id)arg1;
+ (_Bool)isVGroupWithGroupId:(id)arg1;
+ (_Bool)isDarenWithName:(id)arg1;
+ (_Bool)isPlatformOfficalWithAccountInfo:(id)arg1;
+ (int)sessionTypeFromSessionId:(id)arg1;

@end

