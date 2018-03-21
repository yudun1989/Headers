//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKErrorRule-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface TBFollowError : NSObject <TBSDKErrorRule>
{
    NSString *errorCode;
    NSString *msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSDictionary *args;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSError *error;
@property(copy, nonatomic) NSString *errorLocation;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *limitFlowRawCode;
@property(copy, nonatomic) NSString *mappingCode;
@property(retain, nonatomic) NSDictionary *raw;
@property(copy, nonatomic) NSString *sub_code;
@property(copy, nonatomic) NSString *sub_msg;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSError *uikitError;

@end

