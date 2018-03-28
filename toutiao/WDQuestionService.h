//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface WDQuestionService : NSObject
{
    NSHashTable *_delegates;
}

+ (void)editQuestionWithQuestionID:(id)arg1 corcernIds:(id)arg2 apiParameter:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)editQuestionWithQiD:(id)arg1 title:(id)arg2 questionDesc:(id)arg3 imageList:(id)arg4 apiParameter:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
+ (void)postQuestionWithTitle:(id)arg1 questionDesc:(id)arg2 imageList:(id)arg3 apiParameter:(id)arg4 source:(id)arg5 listEntrance:(id)arg6 gdExtJson:(id)arg7 finishBlock:(CDUnknownBlockType)arg8;
+ (void)reportQuestionWithQid:(id)arg1 reportParams:(id)arg2 gid:(id)arg3 apiParam:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
+ (void)deleteQuestionWithQid:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)followQuestionWithQid:(id)arg1 followType:(unsigned long long)arg2 apiParameter:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)unRegisterDelegate:(id)arg1;
+ (void)registerDelegate:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)broadcastQuestionWithQid:(id)arg1 actionType:(unsigned long long)arg2 error:(id)arg3;
- (void)unRegisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)init;

@end

