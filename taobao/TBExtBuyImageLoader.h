//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBExtBuyImageProtocol-Protocol.h"

@class NSString;

@interface TBExtBuyImageLoader : NSObject <TBExtBuyImageProtocol>
{
}

+ (_Bool)joinerSingleton;
- (id)imageFromIconFontName:(id)arg1 size:(double)arg2 color:(id)arg3;
- (id)imageFromLocalNamed:(id)arg1 imageView:(id)arg2;
- (void)imageFromUrl:(id)arg1 imageView:(id)arg2 placeholder:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageFromUrl:(id)arg1 imageView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageFromUrl:(id)arg1 imageView:(id)arg2 useOriginal:(_Bool)arg3;
- (void)imageFromUrl:(id)arg1 imageView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

