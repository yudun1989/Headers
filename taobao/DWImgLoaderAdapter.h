//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DWImgLoaderProtocol-Protocol.h"

@class NSString;

@interface DWImgLoaderAdapter : NSObject <DWImgLoaderProtocol>
{
}

+ (id)sharedInstance;
- (id)generateImageViewForGIFNamed:(id)arg1 frame:(struct CGRect)arg2;
- (void)setImageByURL:(id)arg1 imageView:(id)arg2 userInfo:(id)arg3 completed:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

