//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString, UIImageView;

@interface CDPSpaceObjectInfo : NSObject <NSCoding>
{
    _Bool _preload;
    _Bool _clickRealtimeReport;
    _Bool _showRealtimeReport;
    _Bool _closeRealtimeReport;
    _Bool _timeSensitive;
    _Bool _needLbs;
    _Bool _selfAdapt;
    _Bool _canScrolled;
    _Bool _isHoldH5load;
    _Bool _isHoldH5Render;
    int _priority;
    int _contentHeight;
    NSString *_objectId;
    NSString *_contentType;
    NSArray *_behaviors;
    NSString *_widgetId;
    NSString *_resVersion;
    NSString *_content;
    NSString *_hrefUrl;
    NSString *_shortImgUrl;
    NSString *_actionUrl;
    long long _gmtStart;
    long long _gmtEnd;
    NSString *_fgColor;
    NSString *_bgColor;
    NSString *_textColor;
    NSString *_widgetColor;
    NSString *_md5;
    NSString *_userId;
    NSString *_mrpRuleId;
    NSDictionary *_bizExtInfo;
    NSArray *_resourceInfos;
    NSArray *_crontabList;
    NSString *_clientMinVersion;
    NSString *_clientMaxVersion;
    NSString *_spaceCode;
    UIImageView *_iconImageView;
    double _bgColorOpacity;
    NSDictionary *_cdpExtInfo;
}

+ (Class)crontabListElementClass;
+ (Class)resourceInfosElementClass;
+ (Class)bizExtInfoElementClass;
+ (Class)behaviorsElementClass;
@property(retain, nonatomic) NSDictionary *cdpExtInfo; // @synthesize cdpExtInfo=_cdpExtInfo;
@property(nonatomic) _Bool isHoldH5Render; // @synthesize isHoldH5Render=_isHoldH5Render;
@property(nonatomic) _Bool isHoldH5load; // @synthesize isHoldH5load=_isHoldH5load;
@property(nonatomic) _Bool canScrolled; // @synthesize canScrolled=_canScrolled;
@property(nonatomic) double bgColorOpacity; // @synthesize bgColorOpacity=_bgColorOpacity;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) _Bool selfAdapt; // @synthesize selfAdapt=_selfAdapt;
@property(retain, nonatomic) NSString *clientMaxVersion; // @synthesize clientMaxVersion=_clientMaxVersion;
@property(retain, nonatomic) NSString *clientMinVersion; // @synthesize clientMinVersion=_clientMinVersion;
@property(nonatomic) _Bool needLbs; // @synthesize needLbs=_needLbs;
@property(nonatomic) _Bool timeSensitive; // @synthesize timeSensitive=_timeSensitive;
@property(retain, nonatomic) NSArray *crontabList; // @synthesize crontabList=_crontabList;
@property(nonatomic) int contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSArray *resourceInfos; // @synthesize resourceInfos=_resourceInfos;
@property(retain, nonatomic) NSDictionary *bizExtInfo; // @synthesize bizExtInfo=_bizExtInfo;
@property(retain, nonatomic) NSString *mrpRuleId; // @synthesize mrpRuleId=_mrpRuleId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool closeRealtimeReport; // @synthesize closeRealtimeReport=_closeRealtimeReport;
@property(nonatomic) _Bool showRealtimeReport; // @synthesize showRealtimeReport=_showRealtimeReport;
@property(nonatomic) _Bool clickRealtimeReport; // @synthesize clickRealtimeReport=_clickRealtimeReport;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *widgetColor; // @synthesize widgetColor=_widgetColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *fgColor; // @synthesize fgColor=_fgColor;
@property(nonatomic) long long gmtEnd; // @synthesize gmtEnd=_gmtEnd;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *shortImgUrl; // @synthesize shortImgUrl=_shortImgUrl;
@property(retain, nonatomic) NSString *hrefUrl; // @synthesize hrefUrl=_hrefUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(retain, nonatomic) NSString *resVersion; // @synthesize resVersion=_resVersion;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
@property(retain, nonatomic) NSArray *behaviors; // @synthesize behaviors=_behaviors;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (void)reportClicked:(_Bool)arg1;
- (id)queryWord;
- (_Bool)isViewEqualToObjectInfo:(id)arg1;
- (void)resetSpaceInfo:(_Bool)arg1 isJumpByUser:(_Bool)arg2;
- (_Bool)isCloseAfterJumpType;
- (_Bool)canClosed;
- (long long)objectHoverTime;
- (_Bool)addClickTimes;
- (_Bool)addShowTimes;
- (_Bool)checkObjectNormalUse;
- (id)segmentCrontabSubItem:(id)arg1;
- (id)getCrontabSubList;
- (id)getCrontabMainList;
- (id)getCurrentCrontab;
- (_Bool)checkCrontabItemWithCurrent:(id)arg1 mainCrontab:(id)arg2 subCrontab:(id)arg3;
- (_Bool)checkCrontabList;
- (int)getVersionValue:(id)arg1 index:(int)arg2;
- (_Bool)isVersion:(id)arg1 largerThan:(id)arg2;
- (_Bool)checkVersion;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)renderSuccess:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)setVoiceLabel:(id)arg1;
- (id)contentViewWithFrame:(struct CGRect)arg1 viewControllerName:(id)arg2;

@end

