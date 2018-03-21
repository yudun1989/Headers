//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSDictionary, NSString;

@interface O2OSEARCHBaseRequest : O2OSEARCHToString
{
    int _size;
    int _originalSize;
    NSString *_groupIn;
    NSString *_query;
    NSString *_location;
    NSString *_searchId;
    NSString *_sessionId;
    NSString *_trace;
    NSString *_actionSrc;
    NSString *_searchSrc;
    NSString *_queryIndex;
    NSString *_uid;
    NSString *_currentCity;
    NSString *_noTokens;
    NSString *_rpcSid;
    NSString *_sceneSrc;
    NSString *_searchType;
    NSString *_srcSpm;
    NSString *_sceneId;
    NSDictionary *_logParamsMap;
}

+ (Class)logParamsMapElementClass;
@property(retain, nonatomic) NSDictionary *logParamsMap; // @synthesize logParamsMap=_logParamsMap;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) NSString *srcSpm; // @synthesize srcSpm=_srcSpm;
@property(retain, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *sceneSrc; // @synthesize sceneSrc=_sceneSrc;
@property(retain, nonatomic) NSString *rpcSid; // @synthesize rpcSid=_rpcSid;
@property(retain, nonatomic) NSString *noTokens; // @synthesize noTokens=_noTokens;
@property(retain, nonatomic) NSString *currentCity; // @synthesize currentCity=_currentCity;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *queryIndex; // @synthesize queryIndex=_queryIndex;
@property(retain, nonatomic) NSString *searchSrc; // @synthesize searchSrc=_searchSrc;
@property(retain, nonatomic) NSString *actionSrc; // @synthesize actionSrc=_actionSrc;
@property(retain, nonatomic) NSString *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) int originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *groupIn; // @synthesize groupIn=_groupIn;
- (void).cxx_destruct;

@end

