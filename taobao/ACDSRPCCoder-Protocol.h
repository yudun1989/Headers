//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACDSRPCBizHandler, NSData;

@protocol ACDSRPCCoder <NSObject>
- (unsigned long long)coderType;
- (id)decode:(id)arg1 modelClass:(Class)arg2;
- (id)decode:(id)arg1 handler:(ACDSRPCBizHandler *)arg2;
- (NSData *)encode:(id)arg1;
@end

