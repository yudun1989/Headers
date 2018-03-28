//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSVideoNetMusicViewModel-Protocol.h"

@class NSArray, NSError, NSString;

@interface HTSVideoNetMusicViewModel : NSObject <HTSVideoNetMusicViewModel>
{
    NSError *_error;
    NSArray *_audios;
    CDUnknownBlockType _headerRefreshing;
    CDUnknownBlockType _footerRefreshing;
}

@property(copy, nonatomic) CDUnknownBlockType footerRefreshing; // @synthesize footerRefreshing=_footerRefreshing;
@property(copy, nonatomic) CDUnknownBlockType headerRefreshing; // @synthesize headerRefreshing=_headerRefreshing;
@property(retain, nonatomic) NSArray *audios; // @synthesize audios=_audios;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

