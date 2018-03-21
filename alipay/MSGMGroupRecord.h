//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSGMToString.h"

@class NSArray, NSDictionary, NSString;

@interface MSGMGroupRecord : MSGMToString
{
    _Bool _hasMore;
    int _count;
    int _totalCount;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_traceInfo;
    NSString *_moreLinkName;
    NSString *_moreLinkUrl;
    NSArray *_hits;
    NSString *_queryTips;
    NSString *_rewriteQuery;
    NSString *_key;
    NSString *_templateId;
    NSString *_templateJson;
    NSString *_error;
    NSDictionary *_ext;
    NSString *_debugTrace;
}

+ (Class)extElementClass;
+ (Class)hitsElementClass;
@property(retain, nonatomic) NSString *debugTrace; // @synthesize debugTrace=_debugTrace;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *rewriteQuery; // @synthesize rewriteQuery=_rewriteQuery;
@property(retain, nonatomic) NSString *queryTips; // @synthesize queryTips=_queryTips;
@property(retain, nonatomic) NSArray *hits; // @synthesize hits=_hits;
@property(retain, nonatomic) NSString *moreLinkUrl; // @synthesize moreLinkUrl=_moreLinkUrl;
@property(retain, nonatomic) NSString *moreLinkName; // @synthesize moreLinkName=_moreLinkName;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

