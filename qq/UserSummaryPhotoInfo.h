//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface UserSummaryPhotoInfo : QQModel <NSCopying>
{
    _Bool _valid;
    int _imageId;
    int _timeStamp;
    NSString *_imageUrl;
}

@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int imageId; // @synthesize imageId=_imageId;
- (void).cxx_destruct;
- (void)httpToHttps;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

