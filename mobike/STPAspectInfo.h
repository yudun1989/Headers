//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAspectInfo-Protocol.h"

@class NSArray, NSInvocation, NSString;

@interface STPAspectInfo : NSObject <STPAspectInfo>
{
    NSArray *_arguments;
    id _instance;
    NSInvocation *_originalInvocation;
}

@property(readonly, nonatomic) NSInvocation *originalInvocation; // @synthesize originalInvocation=_originalInvocation;
@property(readonly, nonatomic) id instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (id)initWithInstance:(id)arg1 invocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

