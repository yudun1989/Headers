//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QBWebInspector : NSObject
{
    NSMutableArray *_webpages;
    NSMutableDictionary *_statusInfo;
    NSMutableArray *_pageIDsForUpload;
    NSMutableArray *_pageIDsHasUploaded;
}

+ (id)diagnosisInfo;
+ (id)JSONInfoWithDetail:(_Bool)arg1;
+ (_Bool)uploadWithDetail:(_Bool)arg1 triggerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)isWebInspectorURL:(id)arg1;
+ (void)addStatusWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(_Bool)arg3;
+ (void)addEvent:(id)arg1 forRequest:(id)arg2;
+ (id)webItemWithURL:(id)arg1 pageURL:(id)arg2;
+ (id)webpageWithURL:(id)arg1;
+ (void)addWebItemEvent:(id)arg1;
+ (void)loadStatusAndCheckWebpageVaildation;
+ (id)networkDescriptionWithStatus:(long long)arg1;
+ (_Bool)validationCheckForEvent:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;
@property(retain) NSMutableArray *pageIDsHasUploaded; // @synthesize pageIDsHasUploaded=_pageIDsHasUploaded;
@property(retain) NSMutableArray *pageIDsForUpload; // @synthesize pageIDsForUpload=_pageIDsForUpload;
@property(retain) NSMutableDictionary *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(retain) NSMutableArray *webpages; // @synthesize webpages=_webpages;
- (void).cxx_destruct;

@end

