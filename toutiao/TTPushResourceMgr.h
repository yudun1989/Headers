//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTPushResourceMgr : NSObject
{
}

+ (id)_validImageURLForString:(id)arg1;
+ (void)downloadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (_Bool)cachedImageExistsForURLString:(id)arg1;
+ (id)cachedImageForURLString:(id)arg1;
+ (void)downloadImageWithURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)downloadImageWithURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)prefetchImageWithURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

