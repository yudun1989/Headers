//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface UIImageView (WebCache)
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 cacheTimeout:(double)arg3;
- (void)cancelCurrentImageLoad;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 reserved:(id)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
@end

