//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SDWebImageCoder-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, SDWebImageCoder;

@interface SDWebImageCodersManager : NSObject <SDWebImageCoder>
{
    NSMutableArray<SDWebImageCoder> *_mutableCoders;
    NSObject<OS_dispatch_queue> *_mutableCodersAccessQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutableCodersAccessQueue; // @synthesize mutableCodersAccessQueue=_mutableCodersAccessQueue;
@property(retain, nonatomic) NSMutableArray<SDWebImageCoder> *mutableCoders; // @synthesize mutableCoders=_mutableCoders;
- (void).cxx_destruct;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2;
- (id)decompressedImageWithImage:(id)arg1 data:(id *)arg2 options:(id)arg3;
- (id)decodedImageWithData:(id)arg1;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (_Bool)canDecodeFromData:(id)arg1;
- (_Bool)canDecodeFromat:(long long)arg1;
@property(retain, nonatomic) NSArray<SDWebImageCoder> *coders;
- (void)removeCoder:(id)arg1;
- (void)addCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

