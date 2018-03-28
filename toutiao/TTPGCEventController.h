//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTPGCEventController : NSObject
{
    struct NSMutableDictionary *_eventMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *eventMap; // @synthesize eventMap=_eventMap;
- (void).cxx_destruct;
- (_Bool)emit:(id)arg1 data:(id)arg2 canCancel:(_Bool)arg3;
- (_Bool)emit:(id)arg1 eventName:(id)arg2 data:(id)arg3 canCancel:(_Bool)arg4;
- (void)clear;
- (void)offByNamespace:(id)arg1;
- (void)off:(id)arg1 eventName:(id)arg2;
- (void)off:(id)arg1;
- (void)off:(id)arg1 listener:(id)arg2;
- (id)on:(id)arg1 eventName:(id)arg2 caller:(id)arg3 selector:(SEL)arg4;
- (id)on:(id)arg1 caller:(id)arg2 selector:(SEL)arg3 data:(id)arg4;
- (id)on:(id)arg1 caller:(id)arg2 selector:(SEL)arg3;
- (id)on:(id)arg1 eventName:(id)arg2 caller:(id)arg3 selector:(SEL)arg4 data:(id)arg5;
- (id)on:(id)arg1 listener:(id)arg2;
- (struct NSMutableArray *)getEventQueue:(id)arg1;
- (struct NSMutableArray *)getEventQueue:(id)arg1 createOnNil:(_Bool)arg2;
- (struct NSMutableDictionary *)getEventMap;

@end

