//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface GTLRBatchResponsePart : NSObject
{
    NSString *_contentID;
    NSDictionary *_headers;
    NSDictionary *_JSON;
    NSError *_parseError;
    long long _statusCode;
    NSString *_statusString;
}

@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(retain, nonatomic) NSDictionary *JSON; // @synthesize JSON=_JSON;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;

@end

