//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STPCheckoutAccountLookup : NSObject
{
    NSString *_email;
    NSString *_redactedPhone;
}

+ (id)lookupWithData:(id)arg1 URLResponse:(id)arg2;
@property(retain, nonatomic) NSString *redactedPhone; // @synthesize redactedPhone=_redactedPhone;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;

@end

