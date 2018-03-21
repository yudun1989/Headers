//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JVSForwardLayer-Protocol.h"

@class JVSInvocation, JVSTensor, NSString, NSUUID;

@interface JVSPoolingLayer : NSObject <JVSForwardLayer>
{
    struct MetalPoolingParameter _poolingParameter;
    NSUUID *_uuid;
    NSString *_name;
    float _kernelSize;
    float _padding;
    float _stride;
    JVSTensor *_inputTensor;
    unsigned long long _type;
    JVSInvocation *_forwardInvocation;
    unsigned char _typeid;
    unsigned long long _poolingType;
    unsigned long long _forwardMode;
    struct Allocator *_allocator;
}

+ (_Bool)isSupportForward:(unsigned long long)arg1;
+ (void)invokeAverage:(float *)arg1 output:(float *)arg2 param:(struct MetalPoolingParameter *)arg3;
+ (void)invokeMax:(float *)arg1 output:(float *)arg2 param:(struct MetalPoolingParameter *)arg3;
+ (void)static_jvsRegister;
@property(readonly, nonatomic) struct Allocator *allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_typeid;
@property(readonly, nonatomic) unsigned long long forwardMode; // @synthesize forwardMode=_forwardMode;
@property(nonatomic) unsigned long long poolingType; // @synthesize poolingType=_poolingType;
@property(nonatomic) float stride; // @synthesize stride=_stride;
@property(nonatomic) float padding; // @synthesize padding=_padding;
@property(nonatomic) float kernelSize; // @synthesize kernelSize=_kernelSize;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)forwardInvocations;
- (_Bool)initializeForward:(id)arg1 batchSize:(int)arg2;
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

