//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface TTVPlayerTipRelatedEngityVideo : JSONModel
{
    NSString<Optional> *_cover_image_url;
    NSString<Optional> *_cover_animated_url;
}

@property(copy, nonatomic) NSString<Optional> *cover_animated_url; // @synthesize cover_animated_url=_cover_animated_url;
@property(copy, nonatomic) NSString<Optional> *cover_image_url; // @synthesize cover_image_url=_cover_image_url;
- (void).cxx_destruct;

@end

