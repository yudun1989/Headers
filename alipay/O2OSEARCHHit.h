//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSArray, NSDictionary, NSString;

@interface O2OSEARCHHit : O2OSEARCHToString
{
    NSString *_bizId;
    NSString *_icon;
    NSString *_name;
    NSString *_desc;
    NSString *_templateId;
    NSString *_templateJson;
    NSString *_actionType;
    NSString *_actionParam;
    NSDictionary *_ext;
    NSDictionary *_objExt;
    NSArray *_actIcons;
    NSArray *_promotionInfos;
    NSArray *_featureInfos;
    NSArray *_pluginInfos;
    NSDictionary *_tempExt;
    NSString *_debugDocTrace;
}

+ (Class)tempExtElementClass;
+ (Class)pluginInfosElementClass;
+ (Class)featureInfosElementClass;
+ (Class)promotionInfosElementClass;
+ (Class)actIconsElementClass;
+ (Class)objExtElementClass;
+ (Class)extElementClass;
@property(retain, nonatomic) NSString *debugDocTrace; // @synthesize debugDocTrace=_debugDocTrace;
@property(retain, nonatomic) NSDictionary *tempExt; // @synthesize tempExt=_tempExt;
@property(retain, nonatomic) NSArray *pluginInfos; // @synthesize pluginInfos=_pluginInfos;
@property(retain, nonatomic) NSArray *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(retain, nonatomic) NSArray *promotionInfos; // @synthesize promotionInfos=_promotionInfos;
@property(retain, nonatomic) NSArray *actIcons; // @synthesize actIcons=_actIcons;
@property(retain, nonatomic) NSDictionary *objExt; // @synthesize objExt=_objExt;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;

@end

