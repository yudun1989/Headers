//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QQApiURLDecoder : NSObject
{
    NSString *scheme;
    NSString *host;
    NSString *path;
    NSDictionary *queryItem;
}

+ (id)decoderWithUrl:(id)arg1;
@property(readonly, nonatomic) NSDictionary *queryItem; // @synthesize queryItem;
@property(copy, nonatomic) NSString *path; // @synthesize path;
@property(copy, nonatomic) NSString *host; // @synthesize host;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme;
- (void)dealloc;
- (id)init;

@end

