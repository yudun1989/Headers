//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JVSForwardLayer-Protocol.h"

@class JVSInvocation, JVSTensor, NSString, NSUUID;

@interface JVSSoftMaxLayer : NSObject <JVSForwardLayer>
{
    struct MetalSoftMaxParameter _softMaxParameter;
    NSUUID *_uuid;
    NSString *_name;
    JVSTensor *_inputTensor;
    JVSInvocation *_forwardInvocation;
    unsigned char _typeid;
    unsigned long long _forwardMode;
    struct Allocator *_allocator;
}

+ (_Bool)isSupportForward:(unsigned long long)arg1;
+ (void)static_jvsRegister;
@property(readonly, nonatomic) JVSTensor *inputTensor; // @synthesize inputTensor=_inputTensor;
@property(readonly, nonatomic) struct Allocator *allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_typeid;
@property(readonly, nonatomic) unsigned long long forwardMode; // @synthesize forwardMode=_forwardMode;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)initializeForward:(id)arg1 batchSize:(int)arg2;
- (id)forwardInvocations;
@property(readonly, nonatomic) struct jvsdimension outputs;
@property(readonly, nonatomic) struct jvsdimension inputs;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int inputSize;
- (id)initWithAllocator:(struct Allocator *)arg1 type:(unsigned char)arg2 dimensions:(vector_b740ff7c)arg3 name:(id)arg4 forwardMode:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long format;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

