//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MASSSvrInfo : NSObject
{
    NSString *_host;
    NSMutableArray *_iplist;
    NSString *_port;
}

@property(retain, nonatomic) NSString *port; // @synthesize port=_port;
@property(retain, nonatomic) NSMutableArray *iplist; // @synthesize iplist=_iplist;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

