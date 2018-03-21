//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface STPSourceRedirect : NSObject <STPAPIResponseDecodable>
{
    NSURL *_returnURL;
    long long _status;
    NSURL *_url;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)requiredFields;
+ (long long)statusFromString:(id)arg1;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURL *returnURL; // @synthesize returnURL=_returnURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

