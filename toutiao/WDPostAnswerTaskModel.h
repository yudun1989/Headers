//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface WDPostAnswerTaskModel : NSObject <NSCoding, NSCopying>
{
    _Bool _isMutate;
    _Bool _isRefreshedPath;
    NSString *_qid;
    NSString *_HTMLContent;
    NSArray *_imageList;
    NSArray *_videoList;
    double _timeStamp;
    unsigned long long _pasteTimes;
    unsigned long long _pastLength;
}

+ (id)replaceSandBoxPath:(id)arg1;
@property(nonatomic) _Bool isRefreshedPath; // @synthesize isRefreshedPath=_isRefreshedPath;
@property(nonatomic) unsigned long long pastLength; // @synthesize pastLength=_pastLength;
@property(nonatomic) unsigned long long pasteTimes; // @synthesize pasteTimes=_pasteTimes;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) _Bool isMutate; // @synthesize isMutate=_isMutate;
@property(copy, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(copy, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(copy, nonatomic) NSString *HTMLContent; // @synthesize HTMLContent=_HTMLContent;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;
- (void)refreshTimeStamp;
- (void)refreshCurrentSandBoxPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQid:(id)arg1 HTMLContent:(id)arg2 imageList:(id)arg3 videoList:(id)arg4;

@end

