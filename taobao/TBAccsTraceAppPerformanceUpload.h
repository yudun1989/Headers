//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBAccsAppPerformanceContent;

@interface TBAccsTraceAppPerformanceUpload : TBJSONModel
{
    NSString *_appName;
    NSString *_category;
    NSString *_debugId;
    NSString *_traceId;
    TBAccsAppPerformanceContent *_content;
}

+ (id)getObjectInternal:(id)arg1;
+ (id)getObjectData:(id)arg1;
+ (id)getJSON:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) TBAccsAppPerformanceContent *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;

@end

