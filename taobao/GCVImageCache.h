//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface GCVImageCache : NSObject
{
    double _width;
    double _height;
    UIImage *_image;
    unsigned long long _jsTextreId;
}

@property(nonatomic) unsigned long long jsTextreId; // @synthesize jsTextreId=_jsTextreId;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;

@end

