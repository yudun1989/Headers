//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PirateRuleResult : NSObject
{
    _Bool _success;
    NSString *_errorCode;
    NSString *_errorMessage;
}

+ (id)errorWithCode:(id)arg1 message:(id)arg2;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)init;

@end

