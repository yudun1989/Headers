//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface DTCustomContext : NSObject
{
    _Bool _requestGZip;
    NSURL *_gatewayURL;
    NSString *_appKey;
}

@property(nonatomic) _Bool requestGZip; // @synthesize requestGZip=_requestGZip;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSURL *gatewayURL; // @synthesize gatewayURL=_gatewayURL;
- (void).cxx_destruct;
- (id)init;

@end

