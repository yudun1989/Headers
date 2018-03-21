//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBJoinerEngine : NSObject
{
    NSMutableDictionary *_bindings;
    NSMutableDictionary *_uniques;
}

+ (void)clearUniqueObjects;
+ (void)clearUniqueObjectForProtocol:(id)arg1;
+ (id)invokeClassMethod:(id)arg1 selector:(SEL)arg2 retValue:(void *)arg3;
+ (id)performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2 object:(id)arg3 object:(id)arg4;
+ (id)performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2;
+ (Class)classLinkedWithProtcol:(id)arg1;
+ (id)objectFromFactory:(id)arg1;
+ (_Bool)containsBinding:(id)arg1;
+ (void)setDefaultWithClass:(Class)arg1 forProtocol:(id)arg2;
+ (void)bindWithClass:(Class)arg1 forProtocol:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_clearUniqueObjectForProtocol:(id)arg1;
- (id)_instanceFromBox:(CDStruct_21c3b639)arg1 protocol:(id)arg2;
- (id)_performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2 object:(id)arg3 object:(id)arg4;
- (id)_performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)_performClassMethodInProtocol:(id)arg1 selector:(SEL)arg2;
- (Class)_classLinkedWithProtocol:(id)arg1;
- (id)_objectFromFactory:(id)arg1;
- (_Bool)_containsBinding:(id)arg1;
- (void)_setDefaultWithClass:(Class)arg1 forProtocol:(id)arg2;
- (void)_bindWithClass:(Class)arg1 forProtocol:(id)arg2;

@end

