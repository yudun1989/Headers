//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSThread, _priv_NBSTraceItem, _priv_NBSUILogCenter_assistant;

@interface _priv_NBSFinishArgumentsHelper : NSObject
{
    _Bool _isOtherStage;
    int _category;
    NSThread *_curThread;
    NSString *_className;
    NSString *_methodName;
    long long _mach_tm1;
    long long _mach_tm2;
    _priv_NBSTraceItem *_traceItem;
    _priv_NBSUILogCenter_assistant *_object;
    NSString *_threadId;
}

@property(nonatomic) _Bool isOtherStage; // @synthesize isOtherStage=_isOtherStage;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) _priv_NBSUILogCenter_assistant *object; // @synthesize object=_object;
@property(retain, nonatomic) _priv_NBSTraceItem *traceItem; // @synthesize traceItem=_traceItem;
@property(nonatomic) long long mach_tm2; // @synthesize mach_tm2=_mach_tm2;
@property(nonatomic) long long mach_tm1; // @synthesize mach_tm1=_mach_tm1;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) int category; // @synthesize category=_category;
@property(retain, nonatomic) NSThread *curThread; // @synthesize curThread=_curThread;
- (void).cxx_destruct;
- (id)init;

@end

