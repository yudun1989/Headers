//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ACDSRPCCoder-Protocol.h"

@class NSString;

@interface ACDSRPCJsonCoder : NSObject <ACDSRPCCoder>
{
}

+ (id)sharedCoder;
- (unsigned long long)coderType;
- (id)decode:(id)arg1 modelClass:(Class)arg2;
- (id)decode:(id)arg1 handler:(id)arg2;
- (id)encode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

