//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPhoto.h"

@class NSString;

@interface APPhoto : BEEPhoto
{
}

+ (id)photoObjectFromPlumpFeed:(id)arg1 feedIndex:(long long)arg2;
+ (id)photoObjectFromPlumpFeed:(id)arg1 origFrames:(id)arg2;
+ (id)photoObjectFromPlumpFeed:(id)arg1 origFrame:(struct CGRect)arg2;
+ (id)photoObjectFromPlumpFeed:(id)arg1;
- (void)dealloc;
@property(nonatomic) long long bridge2FeedIndex;
@property(retain, nonatomic) NSString *subCaption;

@end

