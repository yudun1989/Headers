//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDSConfigRequest, NSRecursiveLock;

@interface ACDSSchemaManager : NSObject
{
    _Bool _isUpdating;
    NSRecursiveLock *_lock;
    ACDSConfigRequest *_request;
}

+ (id)schemaFileEtag;
+ (id)schemaKeyInLocalMemory:(id)arg1;
+ (void)processSchema:(id)arg1 index:(int)arg2 withAllData:(id)arg3 withCallback:(CDUnknownBlockType)arg4 schemaCallback:(CDUnknownBlockType)arg5;
+ (void)processSchemaData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)sendNetCommandWithCallback:(CDUnknownBlockType)arg1;
+ (id)getSchema:(id)arg1;
+ (void)getSchema:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)updateSchema:(CDUnknownBlockType)arg1;
+ (void)initLocalSchema:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) ACDSConfigRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;

@end

