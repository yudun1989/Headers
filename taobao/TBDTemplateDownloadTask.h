//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSSet;

@interface TBDTemplateDownloadTask : NSObject
{
    _Bool _isFinished;
    CDUnknownBlockType _callback;
    NSArray *_totalTemplates;
    NSSet *_filteredTotalTemplates;
    NSMutableArray *_finishedTemplates;
    NSMutableArray *_failedTemplates;
    NSMutableArray *_existTemplates;
    NSMutableArray *_totalFinishedTemplates;
    NSMutableArray *_totalFailedTemplates;
    NSMutableArray *_toDownloadTemplates;
}

@property(retain, nonatomic) NSMutableArray *toDownloadTemplates; // @synthesize toDownloadTemplates=_toDownloadTemplates;
@property(retain, nonatomic) NSMutableArray *totalFailedTemplates; // @synthesize totalFailedTemplates=_totalFailedTemplates;
@property(retain, nonatomic) NSMutableArray *totalFinishedTemplates; // @synthesize totalFinishedTemplates=_totalFinishedTemplates;
@property(retain, nonatomic) NSMutableArray *existTemplates; // @synthesize existTemplates=_existTemplates;
@property(retain, nonatomic) NSMutableArray *failedTemplates; // @synthesize failedTemplates=_failedTemplates;
@property(retain, nonatomic) NSMutableArray *finishedTemplates; // @synthesize finishedTemplates=_finishedTemplates;
@property(retain, nonatomic) NSSet *filteredTotalTemplates; // @synthesize filteredTotalTemplates=_filteredTotalTemplates;
@property(retain, nonatomic) NSArray *totalTemplates; // @synthesize totalTemplates=_totalTemplates;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)currentDownloadResult;
- (id)initWithTotalTemplates:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

