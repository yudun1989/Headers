//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SDScanManager;

@interface SDScanAgentUtil : NSObject
{
    NSURL *_url;
    SDScanManager *_sdcodeMgr;
}

+ (_Bool)canParseURL:(id)arg1;
@property(retain, nonatomic) SDScanManager *sdcodeMgr; // @synthesize sdcodeMgr=_sdcodeMgr;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end

