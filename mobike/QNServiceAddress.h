//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QNServiceAddress : NSObject
{
    NSString *_address;
    NSArray *_ips;
}

@property(readonly, nonatomic) NSArray *ips; // @synthesize ips=_ips;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)init:(id)arg1 ips:(id)arg2;

@end

