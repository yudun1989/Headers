//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSData, NSString, UIImage;

@interface MovieSDKShareImageInfo : MovieSDKDataBaseObject
{
    _Bool _isDownloaded;
    long long _imageType;
    NSString *_url;
    NSData *_imageData;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) _Bool isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

